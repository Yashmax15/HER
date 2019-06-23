#include<HERO.h>

int text_coor[]={0,405,0,480,640,480,640,405};
int ispressedSpace=0;
char hero_orientation;
int isreadMail=0;
int istakenLocket=0;



void make_room(){
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);

//whitewash
int background_coor[]={0,0,0,480,640,480,640,0};
fillpoly(4,background_coor);

//map boundary
int floor_coor[]={0,400,0,0,640,0,640,400};
fillpoly(4,floor_coor);

//bed
int bedFoundation_coor[]={0,190,205,190,205,310,0,310};
int bedSheet_coor[]={205,190,205,310,100,310,100,190};
int bedFold_coor[]={100,310,100,190,61,190,61,310};
int pillow_coor[]={40,220,40,280,12,280,12,220};
fillpoly(4,bedFoundation_coor);
fillpoly(4,bedSheet_coor);
fillpoly(4,bedFold_coor);
fillpoly(4,pillow_coor);

//drawer
int drawer_coor[]={0,180,70,180,70,0,0,0};
fillpoly(4,drawer_coor);

//cupboard
int cupboard_coor[]={80,0,210,0,210,70,80,70};
fillpoly(4,cupboard_coor);

//carpet
int carpetBase_coor[]={460,390,220,390,220,20,460,20};
int innerBase_coor[]={440,370,240,370,240,40,440,40};
int tri1_coor[]={300,40,240,40,240,100};
int tri2_coor[]={380,40,440,40,440,100};
int tri3_coor[]={240,310,240,370,300,370};
int tri4_coor[]={440,310,380,370,440,370};
fillpoly(4,carpetBase_coor);
fillpoly(4,innerBase_coor);
fillpoly(3,tri1_coor);
fillpoly(3,tri2_coor);
fillpoly(3,tri3_coor);
fillpoly(3,tri4_coor);

//computer
int monitor_coor[]={560,180,600,180,600,260,560,260};
int back_coor[]={600,180,620,200,620,240,600,260};
int table_coor[]={640,120,640,320,520,320,520,120};
int chair_coor[]={520,160,480,160,480,280,520,280};
fillpoly(4,table_coor);
fillpoly(4,chair_coor);
fillpoly(4,monitor_coor);
fillpoly(4,back_coor);

//gate
int gate_coor[]={190,400,190,410,240,410,240,400};
fillpoly(4,gate_coor);

}


void move_hero(int &x, int &y, int minx, int maxx, int miny, int maxy, int valminx, int valmaxx, int valminy, int valmaxy){
switch(hero_orientation){
case'l': {hero_l(x,y);break;}
case'r': {hero_r(x,y);break;}
case'b': {hero_b(x,y);break;}
case'f': {hero_f(x,y);break;}
}
int quit=0;
while(1){/*1=true, so this loop runs as long as it is not exited manually*/
	if (x>=valminx&&x<=valmaxx&&y>=valminy&&y<=valmaxy){
	switch (getch())
	{case 0:
	  {switch (getch()){
		   case 75:{if(x>(minx+25)){make_room();x-=5;hero_l(x,y);hero_orientation='l';}break;}
		   case 77:{if(x<(maxx-25)){make_room();x+=5;hero_r(x,y);hero_orientation='r';}break;}
		   case 72:{if(y>(miny+65)){make_room();y-=5;hero_b(x,y);hero_orientation='b';}break;}
		   case 80:{if(y<(maxy-25)){make_room();y+=5;hero_f(x,y);hero_orientation='f';}break;}
			   }break;
	  }
	 case 27:{quit=1; break;}
	 case 32: {ispressedSpace=1;quit=1;break;}
	}
	if (quit==1){return;}                          }

	else {return;}
	if(quit==1){return;}
	}

}


void dialogue_mail(){
settextstyle(3,0,1);
setfillstyle(SOLID_FILL,WHITE);
fillpoly(4,text_coor);
outtextxy(10,410,"Mail: Hey,");
getch();
outtextxy(10,430,"I bet you don't really remeber. There's no other reason why you still");
getch();
outtextxy(10,450,"couldn't come. You were never good at promises. I hope that locket");
getch();
fillpoly(4,text_coor);
outtextxy(10,410,"will remind you the promise you so solemnly gave me.");
getch();
outtextxy(10,430,"I wouldn't have contacted you, I didn't mean to intrude, but I really ");
getch();
outtextxy(10,450,"need you right now. Things are not... right. I should not have come");
getch();
fillpoly(4,text_coor);
outtextxy(10,410,"here in the first place. I should have listened to you. I hope it is");
getch();
outtextxy(10,430,"not too late. Please come to Hotel Tranz, room 203.");
getch();
outtextxy(10,450,"I hope you'll find me. I'm putting my faith in you for one last time");
getch();
fillpoly(4,text_coor);
outtextxy(10,410,"Max.");
getch();
outtextxy(10,430,"\tYours");
getch();
outtextxy(10,450,"\tApril");
getch();
fillpoly(4,text_coor);
outtextxy(10,410,"Oh no! It's April! How can I forget?");
getch();
outtextxy(10,430,"I must find the locket. I remember I kept it somewhere around");
getch();
outtextxy(10,450,"the bed...");
getch();
fillpoly(4,text_coor);
}

void dialogue_postmail(){
settextstyle(3,0,1);
setfillstyle(SOLID_FILL,WHITE);
fillpoly(4,text_coor);
outtextxy(10,410,"I must find the locket. I remember I kept it somwhere around");
getch();
outtextxy(10,430,"the bed...");
getch();
fillpoly(4,text_coor);
}

void dialogue_wrongDrawer(){
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
settextstyle(3,0,1);
fillpoly(4,text_coor);
outtextxy(10,410,"Nope, not in here.");
getch();
fillpoly(4,text_coor);
}

void dialogue_rightDrawer1(){
setfillstyle(SOLID_FILL,WHITE);
settextstyle(3,0,1);
fillpoly(4,text_coor);
outtextxy(10,410,"Yes, Here it is. The locket. I must take my flight to New York now.");
getch();
fillpoly(4,text_coor);
}

void dialogue_rightDrawer2(){
setfillstyle(SOLID_FILL,WHITE);
settextstyle(3,0,1);
fillpoly(4,text_coor);
outtextxy(10,410,"I must take my flight to New York now.");
getch();
fillpoly(4,text_coor);
}

void dialogue_noexit1(){
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
settextstyle(3,0,1);
fillpoly(4,text_coor);
outtextxy(10,410,"I think there's a mail on the PC. Let me check it first.");
getch();
fillpoly(4,text_coor);

}

void dialogue_noexit2(){
setfillstyle(SOLID_FILL,WHITE);
settextstyle(3,0,1);
fillpoly(4,text_coor);
outtextxy(10,410,"I cannot leave now. I must get the locket first!");
getch();
fillpoly(4,text_coor);
}

void lvl_01(int x=120, int y=165, char hero_orientation='b')
{
int minx=0,maxx=getmaxx(),miny=0,maxy=400;
int vminx=0,vmaxx,vminy,vmaxy;
int quit=0;
make_room();

switch (hero_orientation){
case 'l':{hero_l(x,y);break;}
case 'r':{hero_r(x,y);break;}
case 'b':{hero_b(x,y);break;}
case 'f':{hero_f(x,y);break;}
}

while(1){
if (y==375){vminy=375;vmaxy=375;minx=0;maxx=getmaxx();
	if (x<215){miny=310;vminx=0;vmaxx=210;}
	else if (x==215){miny=310;maxy=405;vminx=215;vmaxx=215;}
	else if (x>215&&x<230){miny=310;maxy=400;vminx=220;vmaxx=225;}
	else if (x>=230&&x<500){miny=0;maxy=400;vminx=230;vmaxx=500;}
	else {miny=310;maxy=400;vminx=500;vmaxx=getmaxx();}
	    }
else if(y>375){minx=190;maxx=240;miny=310;maxy=410;vminx=190;vmaxx=240;vminy=380;vmaxy=410;}
else if(y<375&&y>165){minx=205;maxx=520;vminx=0;vmaxx=getmaxx();miny=0;maxy=getmaxy();vminy=170;vmaxy=370;}
else if(y<=165&&y>135){minx=70;maxx=520;
	if(x>70&&x<225){vminx=0;vmaxx=220;miny=70;maxy=190;vminy=0;vmaxy=getmaxy();}
	else if(x>=225){vminx=225;vmaxx=getmaxx();miny=0;maxy=getmaxy();vminy=140;vmaxy=165;}
		      }
else if(y<=135&&y>95){minx=210;maxx=520;vminx=0;vmaxx=getmaxx();miny=0;maxy=getmaxy();vminy=100;vmaxy=135;}
else if(y<=95){
	if (x<500){minx=210;maxx=getmaxx();vminx=0;vmaxx=495;miny=0;maxy=getmaxy();vminy=0;vmaxy=95;}
	else {minx=210;maxx=getmaxx();vminx=500;vmaxx=getmaxx();miny=0;maxy=120;vminy=0;vmaxy=95;}
	      }

move_hero(x,y,minx,maxx,miny,maxy,vminx,vmaxx,vminy,vmaxy);

if (ispressedSpace==1){
	if (x==215&&y==385&&::hero_orientation=='f'){
		if(isreadMail==0){dialogue_noexit1();}
		else if(isreadMail==1&&istakenLocket==0){dialogue_noexit2();}
		else {quit=1;}
				}
	else if(x==495&&y==240&&::hero_orientation=='r'){
		if(isreadMail==0){dialogue_mail();isreadMail=1;}
		else if(isreadMail==1){dialogue_postmail();}
				}
	else if(x==95&&y==150&&::hero_orientation=='l'){
		if(isreadMail==1&&istakenLocket==0){dialogue_rightDrawer1();istakenLocket=1;}
		else if(isreadMail==1&&istakenLocket==1){dialogue_rightDrawer2();}
				}
	else if(x==155&&y==135&&::hero_orientation=='b'){
		if(isreadMail==1){dialogue_wrongDrawer();}
				}
			}
if (quit==1){return;}

	}
}