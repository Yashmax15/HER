//Header file containing HERO drawing and movement

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


void hero_b(int x, int y)
{//face
setcolor(EGA_DARKGRAY);
line(x-17,y-14,x+17,y-14);
line(x+17,y-14,x+17,y-24);
line(x+17,y-24,x+8,y-18);
line(x+8,y-18,x-8,y-18);
line(x-8,y-18,x-17,y-24);
line(x-17,y-24,x-17,y-14);
//ears
line(x-17,y-24,x-19,y-24);
line(x-19,y-24,x-19,y-22);
line(x-19,y-22,x-17,y-21);
line(x+17,y-24,x+19,y-24);
line(x+19,y-24,x+19,y-22);
line(x+19,y-22,x+17,y-21);
//pant+belt
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
line(x+19,y-24,x+20,y-34);
line(x+20,y-34,x+18,y-34);
line(x+18,y-34,x+18,y-43);
line(x+18,y-43,x+15,y-48);
line(x+15,y-48,x+13,y-44);
line(x+13,y-44,x+8,y-62);
line(x+8,y-62,x-2,y-50);
line(x-2,y-50,x-3,y-41);
line(x-3,y-41,x-5,y-47);
line(x-5,y-47,x-8,y-46);
line(x-8,y-46,x-10,y-54);
line(x-10,y-54,x-15,y-41);
line(x-15,y-41,x-20,y-38);
line(x-20,y-38,x-19,y-24);
}


void hero_r(int x,int y)
{//pant+belt
setcolor(EGA_LIGHTBLUE);
line(x-10,y+8,x+10,y+8);
line(x-10,y+10,x+10,y+10);
line(x+9,y+8,x+9,y+10);  //
setcolor(EGA_DARKGRAY);
line(x-10,y+18,x+2,y+18); //
line(x+6,y+18,x+10,y+18); //
circle(x+4,y+18,2);
line(x-10,y+18,x-10,y-14);
line(x+10,y+18,x+10,y-14);
//face//
line(x+10,y-4,x+6,y-4);
line(x+6,y-4,x-10,y-14);
line(x-10,y-14,x,y-20);
line(x,y-20,x-2,y-22);
line(x-2,y-22,x-2,y-24);
line(x-2,y-24,x,y-24);
line(x,y-24,x+10,y-34);
line(x+10,y-44,x+10,y-19);
line(x+10,y-19,x+11,y-14);
line(x+10,y-14,x+10,y-4);
//hair
setcolor(EGA_LIGHTRED);
line(x-10,y-14,x-15,y-24);
line(x-15,y-24,x-15,y-34);
line(x-15,y-34,x-13,y-34);
line(x-13,y-34,x-2,y-62);
line(x-2,y-62,x,y-52);
line(x,y-52,x+2,y-52);
line(x+2,y-52,x+4,y-44);
line(x+4,y-44,x+6,y-54);
line(x+6,y-54,x+10,y-44);
line(x+10,y-44,x+10,y-34);
//eyes
setcolor(EGA_BROWN);
line(x+3,y-25,x+8,y-21);
line(x+8,y-21,x+8,y-14);
line(x+8,y-14,x+2,y-18);
line(x+2,y-18,x+2,y-25);
line(x+2,y-25,x+3,y-25);
line(x+5,y-16,x+6,y-22);
line(x+2,y-24,x+8,y-20);
//hand
setcolor(EGA_DARKGRAY);
line(x-2,y+4,x-2,y-4);
line(x+2,y+4,x+2,y-4);
circle(x,y+4,2);
}


void hero_l(int x,int y)
{//pant+belt
setcolor(EGA_LIGHTBLUE);
line(x-10,y+8,x+10,y+8);
line(x-10,y+10,x+10,y+10);
line(x-9,y+8,x-9,y+10);  //
setcolor(EGA_DARKGRAY);
line(x+10,y+18,x-2,y+18); //
line(x-6,y+18,x-10,y+18); //
circle(x-4,y+18,2);
line(x-10,y+18,x-10,y-14);
line(x+10,y+18,x+10,y-14);
//face//
line(x-10,y-4,x-6,y-4);
line(x-6,y-4,x+10,y-14);
line(x+10,y-14,x,y-20);
line(x,y-20,x+2,y-22);
line(x+2,y-22,x+2,y-24);
line(x+2,y-24,x,y-24);
line(x,y-24,x-10,y-34);
line(x-10,y-44,x-10,y-19);
line(x-10,y-19,x-11,y-14);
line(x-10,y-14,x-10,y-4);
//hair
setcolor(EGA_LIGHTRED);
line(x+10,y-14,x+15,y-24);
line(x+15,y-24,x+15,y-34);
line(x+15,y-34,x+13,y-34);
line(x+13,y-34,x+2,y-62);
line(x+2,y-62,x,y-52);
line(x,y-52,x-2,y-52);
line(x-2,y-52,x-4,y-44);
line(x-4,y-44,x-6,y-54);
line(x-6,y-54,x-10,y-44);
line(x-10,y-44,x-10,y-34);
//eyes
setcolor(EGA_BROWN);
line(x-3,y-25,x-8,y-21);
line(x-8,y-21,x-8,y-14);
line(x-8,y-14,x-2,y-18);
line(x-2,y-18,x-2,y-25);
line(x-2,y-25,x-3,y-25);
line(x-5,y-16,x-6,y-22);
line(x-2,y-24,x-8,y-20);
//hand
setcolor(EGA_DARKGRAY);
line(x-2,y+4,x-2,y-4);
line(x+2,y+4,x+2,y-4);
circle(x,y+4,2);
}


void move_hero(int &x, int &y, int minx, int maxx, int miny, int maxy){
hero_f(x,y);
int quit=0;
while(1){/*1=true, so this loop runs as long as it is not exited manually*/
	switch (getch())
	{case 0:
	  {switch (getch()){
		   case 75:{if(x>(minx+25)){clrscr();setbkcolor(63);hero_l(x-=5,y);}break;}
		   case 77:{if(x<(maxx()-25)){clrscr();setbkcolor(63);hero_r(x+=5,y);}break;}
		   case 72:{if(y>(miny+65)){clrscr();setbkcolor(63);hero_b(x,y-=5);}break;}
		   case 80:{if(y<(maxy()-104)){clrscr();setbkcolor(63);hero_f(x,y+=5);}break;}
			   }break;
	  }
	 case 27:{quit=1; break;}
	}
	if (quit==1){return;}
	}
}