//Header file containing plaer and its related functions

int background_coor[]={0,0,0,480,640,480,640,0};

class Player{
public:
int save_no;
char hero_orientation;
int isreadMail;
int istakenLocket;
int hero_x;
int hero_y;
int lvl_no;
Player(){hero_x=120;hero_y=165;isreadMail=0;istakenLocket=0;
	 hero_orientation='b';int lvl_no=1;int save_no=0;}
};

Player Temp;

Player CurrentPlayer;

int save_flag=0;

void new_save(){

fstream f1("Player.dat",ios::binary|ios::out|ios::in);
long int beginning=f1.tellg();
f1.seekg(0,ios::end);
long int endf=f1.tellg();
f1.seekg(0,ios::beg);

if (endf!=beginning){
	f1.seekg(-1*sizeof(Player),ios::end);
	f1.read((char*)&Temp,sizeof(Player));
	CurrentPlayer.save_no=Temp.save_no+1;
			}

f1.write((char*)&CurrentPlayer,sizeof(Player));
f1.close();
save_flag=1;
}

void old_save(){

setcolor(WHITE);
setfillstyle(SOLID_FILL,DARKGRAY);
fillpoly(4,background_coor);

settextjustify(1,1);
outtextxy(320,30,"Enter number of the save slot: ");
int s_no=getch();

fstream f1("Player.dat",ios::binary|ios::in|ios::out);
while(f1.read((char*)&Temp,sizeof(Player)))
{if (Temp.save_no==s_no)
	{f1.seekp(-1*sizeof(Player),ios::cur);
	 f1.write((char*)&CurrentPlayer,sizeof(Player));
	 save_flag=1;
	}
}
f1.close();
}



void save(char choice){

setcolor(WHITE);
setfillstyle(SOLID_FILL,DARKGRAY);
fillpoly(4,background_coor);

if(choice=='N'){new_save();}
else {old_save();}

char saveIndex[100];

sprintf(saveIndex,"%d",CurrentPlayer.save_no);
settextjustify(1,1);
setcolor(WHITE);
settextstyle(3,0,1);



if (save_flag==1){
	fillpoly(4,background_coor);
	outtextxy(320,30,"Saved with save number");
	outtextxy(320,60,saveIndex);
	outtextxy(320,90,"Press any key to continue...");
	getch();
		 }
else {
	fillpoly(4,background_coor);
	outtextxy(320,30,"No such save found");
	outtextxy(320,60,"Press t to try again or n to create a new save...");
	outtextxy(320,90,"Press any other key to continue");
	switch(getch()){
		case 'n':{save('N');break;}
		case 't':{save('O');break;}
		}

	}

}
