//Header file containing HERO drawing and movement

#include<conio.h>
#include<stdio.h>
#include<graphics.h>

void hero_f(int x, int y)
{//face
setcolor(EGA_DARKGRAY);
setfillstyle(SOLID_FILL,EGA_LIGHTGREEN);
int face_coor[]={x-17,y-14,x-4,y-4,x+4,y-4,x+17,y-14,x+17,y-24,
		 x+10,y-34,x+4,y-24,x-4,y-24,x-10,y-34,x-17,y-24,
		 x-17,y-14};
fillpoly(11,face_coor);
//ears
int earl_coor[]={x-17,y-24,x-19,y-24,x-19,y-22,x-17,y-21};
int earr_coor[]={x+17,y-24,x+19,y-24,x+19,y-22,x+17,y-21};
fillpoly(4,earl_coor);
fillpoly(4,earr_coor);


//eyes
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,DARKGRAY);
int pupill_coor[]={x-6,y-12,x-6,y-18,x-8,y-20,x-9,y-14};
int pupilr_coor[]={x+6,y-12,x+6,y-18,x+8,y-20,x+9,y-14};
fillpoly(4,pupill_coor);
fillpoly(4,pupilr_coor);

setcolor(BROWN);
setfillstyle(SOLID_FILL,BROWN);
int eyebrowl_coor[]={x-12,y-22,x-12,y-23,x-11,y-24,x-6,y-20,x-5,y-19,x-6,y-18};
int eyebrowr_coor[]={x+12,y-22,x+12,y-23,x+11,y-24,x+6,y-20,x+5,y-19,x+6,y-18};
fillpoly(6,eyebrowl_coor);
fillpoly(6,eyebrowr_coor);

setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
int irisl_coor[]={x-12,y-22,x-12,y-16,x-9,y-14,x-8,y-19};
int irisr_coor[]={x+12,y-22,x+12,y-16,x+9,y-14,x+8,y-19};
fillpoly(4,irisl_coor);
fillpoly(4,irisr_coor);

//scarf
/*setcolor(EGA_LIGHTRED);
line(x-17,y-10,x-4,y);
line(x-4,y,x+4,y);
line(x+4,y,x+17,y-10);*/  //please check if you like the character with or without the scarf
//pant+shirt
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

//shirt
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
int shirt_coor[]={x-17,y-14,x-4,y-4,x+4,y-4,x+17,y-14,x+17,y+8,x-17,y+8};
fillpoly(6,shirt_coor);
//belt
setcolor(EGA_LIGHTBLUE);
line(x+17,y+10,x-17,y+10);
line(x+17,y+8,x-17,y+8);
setfillstyle(SOLID_FILL,BLUE);
int buckle_coor[]={x-2,y+8,x-2,y+10,x+2,y+8,x+2,y+10};
fillpoly(4,buckle_coor);
//hand+leg
setcolor(EGA_DARKGRAY);
circle(x-12,y+18,2);
circle(x-19,y+2,2);
circle(x+12,y+18,2);
circle(x+19,y+2,2);
int handl_coor[]={x-17,y-14,x-21,y+2,x-17,y+2};
int handr_coor[]={x+17,y-14,x+21,y+2,x+17,y+2};
setfillstyle(SOLID_FILL,EGA_LIGHTGRAY);
fillpoly(3,handl_coor);
fillpoly(3,handr_coor);
//hair
setcolor(EGA_LIGHTRED);
setfillstyle(SOLID_FILL,EGA_LIGHTRED);
int hair_coor[]={x-19,y-24,x-20,y-34,x-18,y-34,x-18,y-43,x-15,y-48,x-13,y-44,
		 x-8,y-62,x+2,y-50,x+3,y-41,x+5,y-47,x+8,y-46,x+10,y-54,
		 x+15,y-41,x+20,y-38,x+19,y-24,x+17,y-24,x+10,y-34,x+4,y-24,
		 x-4,y-24,x-10,y-34,x-17,y-24};

fillpoly(21,hair_coor);
}

void hero_b(int x, int y)
{//face
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTGREEN);
int face_coor[]={x-17,y-14,x+17,y-14,x+17,y-24,x+8,y-18,x-8,y-18,x-17,y-24};
fillpoly(6,face_coor);

//ears
setcolor(EGA_DARKGRAY);
setfillstyle(SOLID_FILL,EGA_LIGHTGREEN);
int earl_coor[]={x-17,y-24,x-19,y-24,x-19,y-22,x-17,y-21};
int earr_coor[]={x+17,y-24,x+19,y-24,x+19,y-22,x+17,y-21};
fillpoly(4,earl_coor);
fillpoly(4,earr_coor);

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

//shirt
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
int shirt_coor[]={x-17,y-14,x+17,y-14,x+17,y+8,x-17,y+8};
fillpoly(4,shirt_coor);

//hand+leg
setcolor(EGA_DARKGRAY);
circle(x-12,y+18,2);
circle(x-19,y+2,2);
circle(x+12,y+18,2);
circle(x+19,y+2,2);
int handl_coor[]={x-17,y-14,x-21,y+2,x-17,y+2};
int handr_coor[]={x+17,y-14,x+21,y+2,x+17,y+2};
setfillstyle(SOLID_FILL,EGA_LIGHTGRAY);
fillpoly(3,handl_coor);
fillpoly(3,handr_coor);

//hair
setcolor(EGA_LIGHTRED);
setfillstyle(SOLID_FILL,EGA_LIGHTRED);
int hair_coor[]={x+19,y-24,x+20,y-34,x+18,y-34,x+18,y-43,x+15,y-48,x+13,y-44,
		 x+8,y-62,x-2,y-50,x-3,y-41,x-5,y-47,x-8,y-46,x-10,y-54,x-15,y-41,
		 x-20,y-38,x-19,y-24,x-17,y-24,x-8,y-18,x+8,y-18,x+17,y-24};

fillpoly(19,hair_coor);
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
line(x+10,y-44,x+10,y-19);
line(x+10,y-19,x+11,y-14);
line(x+10,y-14,x+10,y-4);
//hair
setcolor(EGA_LIGHTRED);
setfillstyle(SOLID_FILL,LIGHTRED);

int hair_coor[]={x-10,y-14,x-15,y-24,x-15,y-34,x-13,y-34,x-2,y-62,x,y-52,
		 x+2,y-52,x+4,y-44,x+6,y-54,x+10,y-44,x+10,y-34,
		 x,y-24,x-2,y-24,x-2,y-22,x,y-20,x-8,y-14,x-10,y-14};

fillpoly(17,hair_coor);

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
line(x-10,y-44,x-10,y-19);
line(x-10,y-19,x-11,y-14);
line(x-10,y-14,x-10,y-4);
//hair
setcolor(EGA_LIGHTRED);
setfillstyle(SOLID_FILL,LIGHTRED);

int hair_coor[]={x+10,y-14,x+15,y-24,x+15,y-34,x+13,y-34,x+2,y-62,x,y-52,
		 x-2,y-52,x-4,y-44,x-6,y-54,x-10,y-44,x-10,y-34,
		 x,y-24,x+2,y-24,x+2,y-22,x,y-20,x+8,y-14,x+10,y-14};

fillpoly(17,hair_coor);

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

void chareraser(int a){
int b[]={0,0,0,479,639,479,639,0,0,0};
setcolor(a);
setfillstyle(SOLID_FILL,a) ;
fillpoly(4,b);
}


void move_hero(int &x, int &y, int minx, int maxx, int miny, int maxy, int valminx, int valmaxx, int valminy, int valmaxy){
hero_f(x,y);
int quit=0;
while(1){/*1=true, so this loop runs as long as it is not exited manually*/
	if (x>=valminx&&x<valmaxx&&y>=valminy&&y<valmaxy){
	switch (getch())
	{case 0:
	  {switch (getch()){
		   case 75:{if(x>(minx+25)){chareraser(63);x-=5;hero_l(x,y);}break;}
		   case 77:{if(x<(maxx-25)){chareraser(63);x+=5;hero_r(x,y);}break;}
		   case 72:{if(y>(miny+65)){chareraser(63);y-=5;hero_b(x,y);}break;}
		   case 80:{if(y<(maxy-25)){chareraser(63);y+=5;hero_f(x,y);}break;}
			   }break;
	  }
	 case 27:{quit=1; break;}
	}
	if (quit==1){return;}                          }

	else {return;}
	}

}