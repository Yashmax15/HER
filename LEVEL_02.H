//Level_02

void make_reception()
{
//whitewash
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(4,background_coor);

//map boundary
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    int floor_coor[]= {0,400,0,0,640,0,640,400};
    fillpoly(4,floor_coor);

//right wall
    setfillstyle(SOLID_FILL,WHITE);
    int rightWall_coor[]= {450,0,650,0,650,400,450,400};
    fillpoly(4,rightWall_coor);

//receptionist
    receptionist(160,95);

//table
    setfillstyle(SOLID_FILL,RED);
    int table_coor[]= {250,0,300,0,300,150,0,150,0,100,250,100};
    fillpoly(6,table_coor);

//book
    setfillstyle(SOLID_FILL,WHITE);
    int leftPage_coor[]= {140,110,160,110,160,140,140,140};
    int rightPage_coor[]= {160,110,160,140,180,140,180,110};
    fillpoly(4,leftPage_coor);
    fillpoly(4,rightPage_coor);

//elevators
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    int lElevator_coor[]= {0,200,10,200,10,300,0,300};
    int rElevator_coor[]= {450,200,460,200,460,300,450,300};
    fillpoly(4,lElevator_coor);
    fillpoly(4,rElevator_coor);

//carpet
    setfillstyle(SOLID_FILL,WHITE);
    int border_coor[]= {260,320,380,320,380,380,260,380};
    int inner_coor[]= {270,330,370,330,370,370,270,370};
    fillpoly(4,border_coor);
    fillpoly(4,inner_coor);

//gate
    int gate_coor[]= {295,400,295,410,345,410,345,400};
    setfillstyle(SOLID_FILL,BROWN);
    fillpoly(4,gate_coor);

}

void move_hero2(int &x, int &y, int minx, int maxx, int miny, int maxy, int valminx, int valmaxx, int valminy, int valmaxy)
{
    switch(CurrentPlayer.hero_orientation)
    {
    case'l':
    {
        hero_l(x,y);
        break;
    }
    case'r':
    {
        hero_r(x,y);
        break;
    }
    case'b': {hero_b(x,y);break;}
        case'f': {hero_f(x,y);break;}
            }
    while(ispressedSpace==0&&ispressedEsc==0)
    {
        if (x>=valminx&&x<=valmaxx&&y>=valminy&&y<=valmaxy)
        {
            switch (getch())
            {
            case 0:
            {
                switch (getch())
                {
                case 75:
                {
                    if(x>(minx+25))
                    {
                        make_reception();
                        x-=5;
                        hero_l(x,y);
                        CurrentPlayer.hero_orientation='l';
                    }
                    break;
                }
                case 77:
                {
                    if(x<(maxx-25))
                    {
                        make_reception();
                        x+=5;
                        hero_r(x,y);
                        CurrentPlayer.hero_orientation='r';
                    }
                    break;
                }
                case 72:
                {
                    if(y>(miny+65))
                    {
                        make_reception();
                        y-=5;
                        hero_b(x,y);
                        CurrentPlayer.hero_orientation='b';
                    }
                    break;
                }
                case 80:
                {
                    if(y<(maxy-25))
                    {
                        make_reception();
                        y+=5;
                        hero_f(x,y);
                        CurrentPlayer.hero_orientation='f';
                    }
                    break;
                }
                }
                save_flag=0;
                break;
            }
            case 27:
            {
                ispressedEsc=1;
                if (save_flag==0)
                    save('O');
                break;
            }
            case 32:
            {
                ispressedSpace=1;
                break;
            }
            }
        }

        else
        {
            return;
        }
    }

}

void lvl12_bridge()
{
    setcolor(RED);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(4,background_coor);
    settextjustify(0,1);
    settextstyle(1,0,1);
    outtextxy(10,30,"I packed my stuff and headed to the airport.");
    getch();
    outtextxy(10,50,"I had to find her.");
    getch();
    outtextxy(10,70,"Landing in New York, I took a cab to Hotel Tranz.");
    getch();
}

void lvl2_start()
{
    CurrentPlayer.lvl_no=2;
    CurrentPlayer.hero_x=320;
    CurrentPlayer.hero_y=375;
    settextstyle(3,0,1);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(4,text_coor);
    settextjustify(0,1);
    setcolor(RED);
    outtextxy(10,410,"Receptionist: Welcome to Hotel Tranz ");
    getch();
    outtextxy(10,430,"If you wish to book a room, we're sorry to say, we're full...");
    getch();
    fillpoly(4,text_coor);
}

void dialogue_reception()
{
    setcolor(RED);
    settextstyle(3,0,1);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(4,text_coor);
    settextjustify(0,1);
    settextstyle(1,0,1);
    outtextxy(10,410,"Receptionist: Good evening Sir, How may i help you");
    getch();
    outtextxy(10,430,"I would like to know about a friend of mine, she stayed here in");
    getch();
    outtextxy(10,450,"room 203.");
    getch();
    fillpoly(4,text_coor);
    outtextxy(10,410,"Receptionist: May I have the name?");
    getch();
    outtextxy(10,430,"It's April");
    getch();
    outtextxy(10,450,"Receptionist: APRIL!! we... we don't know anyone... by that name.");
    getch();
    fillpoly(4,text_coor);
    outtextxy(10,410,"Please! Help me out, I've come a long way to find her.");
    getch();
    delay(1500);
    fillpoly(4,text_coor);
    outtextxy(10,410,"Receptionist: I cannot... Okay, It's on the fourth floor. ");
    getch();
    outtextxy(10,430,"Receptionist: But make it quick. If you take my word, go back");
    getch();
    outtextxy(10,450,"where you came from.");
    getch();
    fillpoly(4,text_coor);
    outtextxy(10,410,"YOU ARE SWIMMING IN DANGEROUS WATERS!!");
    getch();
    fillpoly(4,text_coor);
}

void dialogue_wrongLift()
{
    setcolor(RED);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(4,text_coor);
    settextjustify(0,1);
    settextstyle(3,0,1);
    outtextxy(10,410,"Receptionist: This elevator is out of order.");
    getch();
    outtextxy(10,430,"Receptionist: Take the other one...");
    getch();
    fillpoly(4,text_coor);
}

void dialogue_reception2()
{
    setcolor(RED);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(4,text_coor);
    settextjustify(0,1);
    settextstyle(3,0,1);
    outtextxy(10,410,"Receptionist: I haven't got all day man!");
    getch();
    outtextxy(10,430,"Receptionist: I told you room's on the fourth floor.");
    getch();
    fillpoly(4,text_coor);

}

void dialogue_noFloor()
{
    setcolor(RED);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(4,text_coor);
    settextjustify(0,1);
    settextstyle(3,0,1);
    outtextxy(10,410,"I know the room number but I do not know which floor to go to.");
    getch();
    outtextxy(10,430,"Maybe the receptionist would know...");
    getch();
    fillpoly(4,text_coor);
}

void dialogue_notNow()
{
    setcolor(RED);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(4,text_coor);
    settextjustify(0,1);
    settextstyle(3,0,1);
    outtextxy(10,410,"I have come this far. I cannot quit now.");
    getch();
    outtextxy(10,430,"April is waiting for me...");
    getch();
    fillpoly(4,text_coor);
}

void lvl_02()
{
    int minx=0,maxx=450,miny=0,maxy=400;
    int vminx=0,vmaxx,vminy,vmaxy;
    int quit=0;
    make_reception();
    if (CurrentPlayer.lvl_no==1)
    {
        lvl2_start();
    }
    while(1)
    {
        if (CurrentPlayer.hero_x<450&&CurrentPlayer.hero_x>320)
        {
            if(CurrentPlayer.hero_y>0&&CurrentPlayer.hero_y<185)
            {
                minx=300;
                maxx=450;
                miny=0;
                maxy=400;
                vminx=0;
                vmaxx=450;
                vminy=0;
                vmaxy=180;
            }
            else if(CurrentPlayer.hero_y>=185&&CurrentPlayer.hero_y<400)
            {
                minx=0;
                maxx=450;
                miny=0;
                maxy=400;
                vminx=325;
                vmaxx=450;
                vminy=185;
                vmaxy=400;
            }
        }
        else if(CurrentPlayer.hero_x==320)
        {
            minx=0;
            maxx=450;
            miny=120;
            maxy=410;
            vminx=320;
            vmaxx=320;
            vminy=125;
            vmaxy=410;
        }
        else
        {
            minx=0;
            maxx=450;
            miny=120;
            maxy=400;
            vminx=0;
            vmaxx=315;
            vminy= 0;
            vmaxy=400;
        }

        move_hero2(CurrentPlayer.hero_x,CurrentPlayer.hero_y,minx,maxx,miny,maxy,vminx,vmaxx,vminy,vmaxy);

        if (ispressedSpace)
        {
            if (CurrentPlayer.hero_x==160&&CurrentPlayer.hero_y==185&&CurrentPlayer.hero_orientation=='b')
            {
                if(CurrentPlayer.receptionClue==0)
                {
                    dialogue_reception();
                    CurrentPlayer.receptionClue=1;
                }
                else
                {
                    dialogue_reception2();
                }
            }
            else if(CurrentPlayer.hero_x==25&&CurrentPlayer.hero_y>=265&&CurrentPlayer.hero_y<=285&&CurrentPlayer.hero_orientation=='l')
            {
                if(CurrentPlayer.receptionClue==0)
                {
                    dialogue_noFloor();
                }
                else
                {
                    quit=1;
                }
            }
            else if(CurrentPlayer.hero_x==425&&CurrentPlayer.hero_y>=265&&CurrentPlayer.hero_y<=285&&CurrentPlayer.hero_orientation=='r')
            {
                dialogue_wrongLift();
            }
            ispressedSpace=0;
        }
        if (ispressedEsc)
        {
            quit=1;
        }
        if(quit==1)
        {
            break;
        }
    }
}
