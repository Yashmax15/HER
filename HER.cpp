/*    HER- A tale unsung
    Copyright (C) 2019  Yash

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>. */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<fstream.h>
#include<string.h>
#include<PLAYER.h>
#include<HELP.h>
#include<HERO.h>
#include<RECMAN.h>
#include<LEVEL_01.h>
#include<LEVEL_02.h>
#include<LEVEL_03.h>
#include<STARTMEN.h>

int SYSTEM_EXIT=0;

void new_game()
{
    help();
    intro();
    if(1)
    {
        lvl_01();
        if(ispressedEsc==1)
        {
            ispressedEsc=0;
            return;
        }
        lvl12_bridge();
        lvl_02();
        if(ispressedEsc==1)
        {
            ispressedEsc=0;
            return;
        }
        lvl23_bridge();
        lvl_03();
        if(ispressedEsc==1)
        {
            ispressedEsc=0;
            return;
        }
        ending();
    }
}

void continue_game()
{
    switch (CurrentPlayer.lvl_no)
    {
    case 1:
    {
        lvl_01();
        if(ispressedEsc==1)
        {
            ispressedEsc=0;
            break;
        }
        lvl12_bridge();
        lvl_02();
        if(ispressedEsc==1)
        {
            ispressedEsc=0;
            break;
        }
        lvl23_bridge();
        lvl_03();
        if(ispressedEsc==1)
        {
            ispressedEsc=0;
            break;
        }
        ending();
        break;

    }
    case 2:
    {
        lvl_02();
        if(ispressedEsc==1)
        {
            ispressedEsc=0;
            break;
        }
        lvl23_bridge();
        lvl_03();
        if(ispressedEsc==1)
        {
            ispressedEsc=0;
            break;
        }
        ending();
        break;
    }

    case 3:
    {
        lvl_03();
        if(ispressedEsc==1)
        {
            ispressedEsc=0;
            break;
        }
        ending();
        break;
    }
    }

}

void main()
{
    clrscr();
    int gd=DETECT,gm;
//initgraph(&gd,&gm,"C:\\TURBOC3\\BGI"); //main call
    initgraph(&gd,&gm,"C:\\TC\\BGI");//for @Yash 's PC only, comment it out for your own PC and use the upar waala statement
    setbkcolor(DARKGRAY);
    beginning();
    while(!SYSTEM_EXIT)
    {
        switch(StartMenu())
        {
        case 0:
        {
            if(load_save())
                continue_game();
            break;
        }
        case 1:
        {
            new_game();
            break;
        }
        case 2:
        {
            save('O');
            break;
        }
        case 3:
        {
            save('N');
            break;
        }
        case 4:
        {
            SYSTEM_EXIT=1;
            setfillstyle(SOLID_FILL,WHITE);
            fillpoly(4,background_coor);
            setcolor(DARKGRAY);
            outtextxy(320,240,"Thank you for playing HER -A Tale Unsung. Press any key to exit.");
            break;
        }
        }
    }
    getch();
}
