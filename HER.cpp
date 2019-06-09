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
void hero_f(int x, int y)
{//face
setcolor(EGA_DARKGRAY);
line(x-17,y-14,x-4,y-4);
line(x-4,y-4,x+4,y-4);
line(x+4,y-4,x+17,y-14);
line(x+17,y-14,x+17,y-24);
line(x+17,y-24,x+10,y-34);
line(x+10,y-34,x+4,y-24);
line(x+4,y-24,x-4,y-24);
line(x-4,y-24,x-10,y-34);
line(x-10,y-34,x-17,y-24);
line(x-17,y-24,x-17,y-14);
//ears
line(x-17,y-24,x-19,y-24);
line(x-19,y-24,x-19,y-22);
line(x-19,y-22,x-17,y-21);
line(x+17,y-24,x+19,y-24);
line(x+19,y-24,x+19,y-22);
line(x+19,y-22,x+17,y-21);
//eyes
setcolor(EGA_BROWN);
line(x-11,y-23,x-6,y-19);
line(x-6,y-19,x-6,y-12);
line(x-6,y-12,x-12,y-16);
line(x-12,y-16,x-12,y-23);
line(x-12,y-23,x-11,y-23);
line(x-9,y-14,x-8,y-20);
line(x-12,y-22,x-6,y-18);
line(x+11,y-23,x+6,y-19);
line(x+6,y-19,x+6,y-12);
line(x+6,y-12,x+12,y-16);
line(x+12,y-16,x+12,y-23);
line(x+12,y-23,x+11,y-23);
line(x+9,y-14,x+8,y-20);
line(x+12,y-22,x+6,y-18);
//scarf
/*setcolor(EGA_LIGHTRED);
line(x-17,y-10,x-4,y);
line(x-4,y,x+4,y);
line(x+4,y,x+17,y-10);*/  //please check if you like the character with or without the scarf
//pant+belt
setcolor(EGA_DARKGRAY);
line(x-17,y+18,x-14,y+18);
line(x-10,y+18,x-5,y+18);
line(x-5,y+18,x,y+16);
line(x+10,y+18,x+5,y+18);
line(x+5,y+18,x,y+16);
line(x,y+10,x,y+16);
line(x+14,y+18,x+17,y+18);
line(x-17,y+18,x-17,y-24);
line(x+17,y-24,x+17,y+18);
setcolor(EGA_LIGHTBLUE);
line(x+17,y+10,x-17,y+10);
line(x+17,y+8,x-17,y+8);
line(x-2,y+8,x-2,y+10);
line(x+2,y+8,x+2,y+10);
//hand+leg
setcolor(EGA_DARKGRAY);
circle(x-12,y+18,2);
circle(x-19,y+2,2);
circle(x+12,y+18,2);
circle(x+19,y+2,2);
line(x-17,y-14,x-21,y+2);
line(x+17,y-14,x+21,y+2);
//hair
setcolor(EGA_LIGHTRED);
line(x-19,y-24,x-20,y-34);
line(x-20,y-34,x-18,y-34);
line(x-18,y-34,x-18,y-43);
line(x-18,y-43,x-15,y-48);
line(x-15,y-48,x-13,y-44);
line(x-13,y-44,x-8,y-62);
line(x-8,y-62,x+2,y-50);
line(x+2,y-50,x+3,y-41);
line(x+3,y-41,x+5,y-47);
line(x+5,y-47,x+8,y-46);
line(x+8,y-46,x+10,y-54);
line(x+10,y-54,x+15,y-41);
line(x+15,y-41,x+20,y-38);
line(x+20,y-38,x+19,y-24);
}

void hero_l(int x, int y)
{
line(x-7,y,x+7,y);
line(x-32,y-21,x-7,y);
line(x+32,y-21,x+7,y);
line(x+32,y-21,x+32,y+30);
line(x-32,y-21,x-32,y+30);
line(x-32,y+30,x-28,y+30);
line(x+32,y+30,x+28,y+30);
line(x-20,y+30,x+20,y+30);
line(x-32,y-21,x-40,y+1);
line(x+32,y-21,x+40,y+1);
circle(x-24,y+30,4);
circle(x+24,y+30,4);
circle(x-36,y+3,4);
circle(x+36,y+3,4);
line(x-32,y-21,x-32,y-45);
line(x-32,y-45,x-19,y-63);
line(x-19,y-63,x-9,y-47);
line(x-9,y-47,x+9,y-47);
line(x+9,y-47,x+19,y-63);
line(x+19,y-63,x+32,y-45);
line(x+32,y-45,x+32,y-21);
line(x+32,y-45,x+37,y-45);
line(x+37,y-45,x+37,y-40);
line(x+37,y-40,x+32,y-37);
line(x-32,y-45,x-37,y-45);
line(x-37,y-45,x-37,y-40);
line(x-37,y-40,x-32,y-37);
line(x+37,y-45,x+37,y-77);
line(x+37,y-77,x+27,y-83);
line(x+27,y-83,x+17,y-117);
line(x+17,y-117,x+13,y-107);
line(x+13,y-107,x+9,y-107);
line(x+9,y-107,x+3,y-92);
line(x+3,y-92,x+3,y-102);
line(x+3,y-102,x-12,y-122);
line(x-12,y-122,x-20,y-89);
line(x-20,y-89,x-26,y-93);
line(x-26,y-93,x-29,y-85);
line(x-29,y-85,x-29,y-73);
line(x-29,y-73,x-35,y-73);
line(x-35,y-73,x-37,y-45);
}


void main()
{clrscr();
int gd=DETECT, gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(CYAN);
//initgraph(&gd,&gm,"C:\\TURBOC3\\BGI"); //main call
initgraph(&gd,&gm,"C:\\TC\\BGI");//for @Yash 's PC only
setbkcolor(WHITE);
int x=120,y=120;
hero_f(x,y);
getch();}