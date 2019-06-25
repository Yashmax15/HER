int ispressedSpace=0;
int ispressedEsc=0;
int text_coor[]= {0,405,0,480,640,480,640,405};

void intro()
{

}



void make_room()
{
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,WHITE);

//whitewash
    fillpoly(4,background_coor);

//map boundary
    int floor_coor[]= {0,400,0,0,640,0,640,400};
    fillpoly(4,floor_coor);

//bed
    int bedFoundation_coor[]= {0,190,205,190,205,310,0,310};
    int bedSheet_coor[]= {205,190,205,310,100,310,100,190};
    int bedFold_coor[]= {100,310,100,190,61,190,61,310};
    int pillow_coor[]= {40,220,40,280,12,280,12,220};
    fillpoly(4,bedFoundation_coor);
    fillpoly(4,bedSheet_coor);
    fillpoly(4,bedFold_coor);
    fillpoly(4,pillow_coor);

//drawer
    int drawer_coor[]= {0,180,70,180,70,0,0,0};
    fillpoly(4,drawer_coor);

//cupboard
    int cupboard_coor[]= {80,0,210,0,210,70,80,70};
    fillpoly(4,cupboard_coor);

//carpet
    int carpetBase_coor[]= {460,390,220,390,220,20,460,20};
    int innerBase_coor[]= {440,370,240,370,240,40,440,40};
    int tri1_coor[]= {300,40,240,40,240,100};
    int tri2_coor[]= {380,40,440,40,440,100};
    int tri3_coor[]= {240,310,240,370,300,370};
    int tri4_coor[]= {440,310,380,370,440,370};
    fillpoly(4,carpetBase_coor);
    fillpoly(4,innerBase_coor);
    fillpoly(3,tri1_coor);
    fillpoly(3,tri2_coor);
    fillpoly(3,tri3_coor);
    fillpoly(3,tri4_coor);

//computer
    int monitor_coor[]= {560,180,600,180,600,260,560,260};
    int back_coor[]= {600,180,620,200,620,240,600,260};
    int table_coor[]= {640,120,640,320,520,320,520,120};
    int chair_coor[]= {520,160,480,160,480,280,520,280};
    fillpoly(4,table_coor);
    fillpoly(4,chair_coor);
    fillpoly(4,monitor_coor);
    fillpoly(4,back_coor);

//gate
    int gate_coor[]= {190,400,190,410,240,410,240,400};
    fillpoly(4,gate_coor);
}



void move_hero(int &x, int &y, int minx, int maxx, int miny, int maxy, int valminx, int valmaxx, int valminy, int valmaxy)
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
    while(ispressedSpace==0&&ispressedEsc==0) /*1=true, so this loop runs as long as it is not exited manually*/
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
                        make_room();
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
                        make_room();
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
                        make_room();
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
                        make_room();
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


void dialogue_mail()
{
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

void dialogue_postmail()
{
    settextstyle(3,0,1);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(4,text_coor);
    outtextxy(10,410,"I must find the locket. I remember I kept it somwhere around");
    getch();
    outtextxy(10,430,"the bed...");
    getch();
    fillpoly(4,text_coor);
}

void dialogue_wrongDrawer()
{
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,WHITE);
    settextstyle(3,0,1);
    fillpoly(4,text_coor);
    outtextxy(10,410,"Nope, not in here.");
    getch();
    fillpoly(4,text_coor);
}

void dialogue_rightDrawer1()
{
    setfillstyle(SOLID_FILL,WHITE);
    settextstyle(3,0,1);
    fillpoly(4,text_coor);
    outtextxy(10,410,"Yes, Here it is. The locket. I must take my flight to New York now.");
    getch();
    fillpoly(4,text_coor);
}

void dialogue_rightDrawer2()
{
    setfillstyle(SOLID_FILL,WHITE);
    settextstyle(3,0,1);
    fillpoly(4,text_coor);
    outtextxy(10,410,"I must take my flight to New York now.");
    getch();
    fillpoly(4,text_coor);
}

void dialogue_noexit1()
{
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,WHITE);
    settextstyle(3,0,1);
    fillpoly(4,text_coor);
    outtextxy(10,410,"I think there's a mail on the PC. Let me check it first.");
    getch();
    fillpoly(4,text_coor);

}

void dialogue_noexit2()
{
    setfillstyle(SOLID_FILL,WHITE);
    settextstyle(3,0,1);
    fillpoly(4,text_coor);
    outtextxy(10,410,"I cannot leave now. I must get the locket first!");
    getch();
    fillpoly(4,text_coor);
}

void lvl_01()
{
    CurrentPlayer.lvl_no=1;
    int minx=0,maxx=getmaxx(),miny=0,maxy=400;
    int vminx=0,vmaxx,vminy,vmaxy;
    int quit=0;
    make_room();

    switch (CurrentPlayer.hero_orientation)
    {
    case 'l':
    {
        hero_l(CurrentPlayer.hero_x,CurrentPlayer.hero_y);
        break;
    }
    case 'r':
    {
        hero_r(CurrentPlayer.hero_x,CurrentPlayer.hero_y);
        break;
    }
    case 'b':
    {
        hero_b(CurrentPlayer.hero_x,CurrentPlayer.hero_y);
        break;
    }
    case 'f':
    {
        hero_f(CurrentPlayer.hero_x,CurrentPlayer.hero_y);
        break;
    }
    }

    while(1)
    {
        if (CurrentPlayer.hero_y==375)
        {
            vminy=375;
            vmaxy=375;
            minx=0;
            maxx=getmaxx();
            if (CurrentPlayer.hero_x<215)
            {
                miny=310;
                vminx=0;
                vmaxx=210;
            }
            else if (CurrentPlayer.hero_x==215)
            {
                miny=310;
                maxy=405;
                vminx=215;
                vmaxx=215;
            }
            else if (CurrentPlayer.hero_x>215&&CurrentPlayer.hero_x<230)
            {
                miny=310;
                maxy=400;
                vminx=220;
                vmaxx=225;
            }
            else if (CurrentPlayer.hero_x>=230&&CurrentPlayer.hero_x<500)
            {
                miny=0;
                maxy=400;
                vminx=230;
                vmaxx=500;
            }
            else
            {
                miny=310;
                maxy=400;
                vminx=500;
                vmaxx=getmaxx();
            }
        }
        else if(CurrentPlayer.hero_y>375)
        {
            minx=190;
            maxx=240;
            miny=310;
            maxy=410;
            vminx=190;
            vmaxx=240;
            vminy=380;
            vmaxy=410;
        }
        else if(CurrentPlayer.hero_y<375&&CurrentPlayer.hero_y>165)
        {
            minx=205;
            maxx=520;
            vminx=0;
            vmaxx=getmaxx();
            miny=0;
            maxy=getmaxy();
            vminy=170;
            vmaxy=370;
        }
        else if(CurrentPlayer.hero_y<=165&&CurrentPlayer.hero_y>135)
        {
            minx=70;
            maxx=520;
            if(CurrentPlayer.hero_x>70&&CurrentPlayer.hero_x<225)
            {
                vminx=0;
                vmaxx=220;
                miny=70;
                maxy=190;
                vminy=0;
                vmaxy=getmaxy();
            }
            else if(CurrentPlayer.hero_x>=225)
            {
                vminx=225;
                vmaxx=getmaxx();
                miny=0;
                maxy=getmaxy();
                vminy=140;
                vmaxy=165;
            }
        }
        else if(CurrentPlayer.hero_y<=135&&CurrentPlayer.hero_y>95)
        {
            minx=210;
            maxx=520;
            vminx=0;
            vmaxx=getmaxx();
            miny=0;
            maxy=getmaxy();
            vminy=100;
            vmaxy=135;
        }
        else if(CurrentPlayer.hero_y<=95)
        {
            if (CurrentPlayer.hero_x<500)
            {
                minx=210;
                maxx=getmaxx();
                vminx=0;
                vmaxx=495;
                miny=0;
                maxy=getmaxy();
                vminy=0;
                vmaxy=95;
            }
            else
            {
                minx=210;
                maxx=getmaxx();
                vminx=500;
                vmaxx=getmaxx();
                miny=0;
                maxy=120;
                vminy=0;
                vmaxy=95;
            }
        }

        move_hero(CurrentPlayer.hero_x,CurrentPlayer.hero_y,minx,maxx,miny,maxy,vminx,vmaxx,vminy,vmaxy);

        if (ispressedSpace)
        {
            if (CurrentPlayer.hero_x==215&&CurrentPlayer.hero_y==385&&::CurrentPlayer.hero_orientation=='f')
            {
                if(CurrentPlayer.isreadMail==0)
                {
                    dialogue_noexit1();
                }
                else if(CurrentPlayer.isreadMail==1&&CurrentPlayer.istakenLocket==0)
                {
                    dialogue_noexit2();
                }
                else
                {
                    quit=1;
                }
            }
            else if(CurrentPlayer.hero_x==495&&CurrentPlayer.hero_y==240&&::CurrentPlayer.hero_orientation=='r')
            {
                if(CurrentPlayer.isreadMail==0)
                {
                    dialogue_mail();
                    CurrentPlayer.isreadMail=1;
                }
                else if(CurrentPlayer.isreadMail==1)
                {
                    dialogue_postmail();
                }
            }
            else if(CurrentPlayer.hero_x==95&&CurrentPlayer.hero_y==150&&::CurrentPlayer.hero_orientation=='l')
            {
                if(CurrentPlayer.isreadMail==1&&CurrentPlayer.istakenLocket==0)
                {
                    dialogue_rightDrawer1();
                    CurrentPlayer.istakenLocket=1;
                }
                else if(CurrentPlayer.isreadMail==1&&CurrentPlayer.istakenLocket==1)
                {
                    dialogue_rightDrawer2();
                }
            }
            else if(CurrentPlayer.hero_x==155&&CurrentPlayer.hero_y==135&&::CurrentPlayer.hero_orientation=='b')
            {
                if(CurrentPlayer.isreadMail==1)
                {
                    dialogue_wrongDrawer();
                }
            }
        }
        if (ispressedEsc||ispressedSpace)
        {
            quit=1;
        }
        if (quit==1)
        {
            return;
        }

    }
}
