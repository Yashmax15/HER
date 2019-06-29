//Header file containing plaer and its related functions

int background_coor[]= {0,0,0,480,640,480,640,0};
int save_flag=0;
int ispressedSpace=0;
int ispressedEsc=0;
int text_coor[]= {0,405,0,480,640,480,640,405};

class Player
{
public:
    char save_name[20];
    char hero_orientation;
    int isreadMail;
    int istakenLocket;
    int receptionClue;
    int isseenSafe;
    int isreadLetter;
    int ishavingKey;
    int hero_x;
    int hero_y;
    int lvl_no;
    Player()
    {
        hero_x=120;
        hero_y=165;
        isreadMail=0;
        istakenLocket=0;
        receptionClue=0;
        isseenSafe=0;
        isreadLetter=0;
        ishavingKey=0;
        hero_orientation='b';
        lvl_no=1;
    }
};

Player Temp;

Player CurrentPlayer;

void writePlayer()
{
    ofstream fwrite("C:\\TC\\HER\\Player.dat",ios::binary|ios::app);
    if (fwrite.write((char*)&CurrentPlayer,sizeof(Player)))
        save_flag=1;
    fwrite.close();
};

void new_save()
{
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,DARKGRAY);
    fillpoly(4,background_coor);

    int match=0;

    outtextxy(320,30,"Enter your name");
    gets(CurrentPlayer.save_name);
    ifstream fcheck("C:\\TC\\HER\\Player.dat",ios::binary|ios::in|ios::out);
    while(fcheck.read((char*)&Temp,sizeof(Player)))
    {
        if (!strcmpi(Temp.save_name,CurrentPlayer.save_name))
        {
            match=1;
            break;
        }
    }
    outtextxy(320,60,CurrentPlayer.save_name);
    delay(1200);
    if (match)
    {
        outtextxy(320,90,"Name already taken...");
        strcpy(CurrentPlayer.save_name,'\0');
        getch();
    }
    else
        writePlayer();
}

void old_save()
{
    ifstream f1("C:\\TC\\HER\\Player.dat",ios::binary|ios::in|ios::out);
    if(strcmp('\0',CurrentPlayer.save_name))
    {
        while(f1.read((char*)&Temp,sizeof(Player)))
        {
            if (!strcmpi(Temp.save_name,CurrentPlayer.save_name))
            {
                f1.seekg(-1*sizeof(Player),ios::cur);
                writePlayer();
            }
        }
    }
    else
    {
        save_flag=0;
    }
    f1.close();

}

void save(char choice)
{

    setcolor(WHITE);
    settextjustify(1,1);
    setfillstyle(SOLID_FILL,DARKGRAY);
    fillpoly(4,background_coor);

    if(choice=='N')
    {
        new_save();
    }
    else
    {
        old_save();
    }

    if (save_flag==1)
    {
        fillpoly(4,background_coor);
        outtextxy(320,30,"Saved with save name");
        outtextxy(320,60,CurrentPlayer.save_name);
        outtextxy(320,90,"Press any key to continue...");
        getch();
    }
    else
    {
        fillpoly(4,background_coor);
        outtextxy(320,30,"Save not created.");
        outtextxy(320,60,"Press t to try again or n to create a new save...");
        outtextxy(320,90,"Press any other key to continue");
        switch(getch())
        {
        case 'n':
        {
            save('N');
            break;
        }
        case 't':
        {
            save('O');
            break;
        }
        }

    }

}


int load_save()
{
    int flag=0;
    char save_name[20];
    setfillstyle(SOLID_FILL,DARKGRAY);
    fillpoly(4,background_coor);
    settextjustify(1,1);
    settextstyle(3,0,1);
    setcolor(WHITE);
    outtextxy(320,30,"Enter the name of save file: ");
    gets(save_name);
    ifstream f2("C:\\TC\\HER\\Player.dat",ios::binary);
    while(f2.read((char*)&Temp,sizeof(Player)))
    {
        if (!strcmpi(Temp.save_name,save_name))
        {
            flag=1;
            break;
        }
    }
    f2.close();
    if(flag==0)
    {
        outtextxy(320,60,"No such save found. Press any key to continue...");
        getch();
        return 0;
    }
    else
    {
        CurrentPlayer=Temp;
        outtextxy(320,60,"Save loaded. Press any key to continue...");
        getch();
        return 1;
    }

}
