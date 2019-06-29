//Header file containing HERO drawing and movement


void hero_f(int x, int y)
{
    //face
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,WHITE);
    int face_coor[]= {x-17,y-14,x-4,y-4,x+4,y-4,x+17,y-14,x+17,y-24,
                      x+10,y-34,x+4,y-24,x-4,y-24,x-10,y-34,x-17,y-24,
                      x-17,y-14
                     };
    fillpoly(11,face_coor);

//ears
    int earL_coor[]= {x-17,y-24,x-19,y-24,x-19,y-22,x-17,y-21};
    int earR_coor[]= {x+17,y-24,x+19,y-24,x+19,y-22,x+17,y-21};
    fillpoly(4,earL_coor);
    fillpoly(4,earR_coor);

//eyes
    setfillstyle(SOLID_FILL,DARKGRAY);
    int pupilL_coor[]= {x-6,y-12,x-6,y-18,x-8,y-20,x-9,y-14};
    int pupilR_coor[]= {x+6,y-12,x+6,y-18,x+8,y-20,x+9,y-14};
    fillpoly(4,pupilL_coor);
    fillpoly(4,pupilR_coor);

    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    int eyebrowL_coor[]= {x-12,y-22,x-12,y-23,x-11,y-24,x-6,y-20,x-5,y-19,x-6,y-18};
    int eyebrowR_coor[]= {x+12,y-22,x+12,y-23,x+11,y-24,x+6,y-20,x+5,y-19,x+6,y-18};
    fillpoly(6,eyebrowL_coor);
    fillpoly(6,eyebrowR_coor);

    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,WHITE);
    int irisL_coor[]= {x-12,y-22,x-12,y-16,x-9,y-14,x-8,y-19};
    int irisR_coor[]= {x+12,y-22,x+12,y-16,x+9,y-14,x+8,y-19};
    fillpoly(4,irisL_coor);
    fillpoly(4,irisR_coor);

//shirt
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    int shirt_coor[]= {x-17,y-14,x-4,y-4,x+4,y-4,x+17,y-14,x+17,y+8,x-17,y+8};
    fillpoly(6,shirt_coor);

//belt
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,YELLOW);
    int beltR_coor[]= {x+17,y+10,x+17,y+8,x+2,y+8,x+2,y+10};
    int beltL_coor[]= {x-17,y+8,x-17,y+10,x-2,y+10,x-2,y+8};
    fillpoly(4,beltL_coor);
    fillpoly(4,beltR_coor);
    setfillstyle(SOLID_FILL,BLUE);
    int buckle_coor[]= {x-2,y+8,x-2,y+10,x+2,y+8,x+2,y+10};
    fillpoly(4,buckle_coor);

//hand+leg
    setcolor(DARKGRAY);
    circle(x-12,y+18,2);
    circle(x-19,y+2,2);
    circle(x+12,y+18,2);
    circle(x+19,y+2,2);
    int handL_coor[]= {x-17,y-14,x-21,y+2,x-17,y+2};
    int handR_coor[]= {x+17,y-14,x+21,y+2,x+17,y+2};
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    fillpoly(3,handL_coor);
    fillpoly(3,handR_coor);

//pant
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    int pantL_coor[]= {x-17,y+10,x-17,y+18,x-5,y+18,x,y+16,x,y+10};
    int pantR_coor[]= {x+17,y+10,x+17,y+18,x+5,y+18,x,y+16,x,y+10};
    fillpoly(5,pantL_coor);
    fillpoly(5,pantR_coor);

//hair
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    int hair_coor[]= {x-19,y-24,x-20,y-34,x-18,y-34,x-18,y-43,x-15,y-48,x-13,y-44,
                      x-8,y-62,x+2,y-50,x+3,y-41,x+5,y-47,x+8,y-46,x+10,y-54,
                      x+15,y-41,x+20,y-38,x+19,y-24,x+17,y-24,x+10,y-34,x+4,y-24,
                      x-4,y-24,x-10,y-34,x-17,y-24
                     };

    fillpoly(21,hair_coor);
}


void hero_b(int x, int y)
{
    //face
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,WHITE);
    int face_coor[]= {x-17,y-14,x+17,y-14,x+17,y-24,x+8,y-18,x-8,y-18,x-17,y-24};
    fillpoly(6,face_coor);

//ears
    setfillstyle(SOLID_FILL,WHITE);
    int earL_coor[]= {x-17,y-24,x-19,y-24,x-19,y-22,x-17,y-21};
    int earR_coor[]= {x+17,y-24,x+19,y-24,x+19,y-22,x+17,y-21};
    fillpoly(4,earL_coor);
    fillpoly(4,earR_coor);

//belt
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,YELLOW);
    int belt_coor[]= {x+17,y+10,x-17,y+10,x-17,y+8,x+17,y+8};
    fillpoly(4,belt_coor);

//shirt
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    int shirt_coor[]= {x-17,y-14,x+17,y-14,x+17,y+8,x-17,y+8};
    fillpoly(4,shirt_coor);

//hand+leg
    circle(x-12,y+18,2);
    circle(x-19,y+2,2);
    circle(x+12,y+18,2);
    circle(x+19,y+2,2);
    int handL_coor[]= {x-17,y-14,x-21,y+2,x-17,y+2};
    int handR_coor[]= {x+17,y-14,x+21,y+2,x+17,y+2};
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    fillpoly(3,handL_coor);
    fillpoly(3,handR_coor);

//pant
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    int pantL_coor[]= {x-17,y+10,x-17,y+18,x-5,y+18,x,y+16,x,y+10};
    int pantR_coor[]= {x+17,y+10,x+17,y+18,x+5,y+18,x,y+16,x,y+10};
    fillpoly(5,pantL_coor);
    fillpoly(5,pantR_coor);

//hair
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    int hair_coor[]= {x+19,y-24,x+20,y-34,x+18,y-34,x+18,y-43,x+15,y-48,x+13,y-44,
                      x+8,y-62,x-2,y-50,x-3,y-41,x-5,y-47,x-8,y-46,x-10,y-54,x-15,y-41,
                      x-20,y-38,x-19,y-24,x-17,y-24,x-8,y-18,x+8,y-18,x+17,y-24
                     };

    fillpoly(19,hair_coor);
}


void hero_r(int x,int y)
{
    //belt
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,YELLOW);
    int belt_coor[]= {x-10,y+8,x+9,y+8,x+9,y+10,x-10,y+10};
    fillpoly(4,belt_coor);
    setfillstyle(SOLID_FILL,BLUE);
    int buckle_coor[]= {x+9,y+8,x+9,y+10,x+10,y+10,x+10,y+8};
    fillpoly(4,buckle_coor);

//pant
    circle(x+4,y+18,2);
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    int pant_coor[]= {x-10,y+10,x-10,y+18,x+10,y+18,x+10,y+10};
    fillpoly(4,pant_coor);

//shirt
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    int shirt_coor[]= {x-10,y-14,x+6,y-4,x+10,y-4,x+10,y+8,x-10,y+8};
    fillpoly(5,shirt_coor);

//face
    setfillstyle(SOLID_FILL,WHITE);
    int face_coor[]= {x-10,y-14,x+6,y-4,x+10,y-4,x+10,y-14,x+11,y-14,x+10,y-19,x+10,y-34,
                      x,y-24,x-2,y-24,x-2,y-22,x,y-20
                     };
    fillpoly(11,face_coor);

//hair
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);

    int hair_coor[]= {x-10,y-14,x-15,y-24,x-15,y-34,x-13,y-34,x-2,y-62,x,y-52,
                      x+2,y-52,x+4,y-44,x+6,y-54,x+10,y-44,x+10,y-34,
                      x,y-24,x-2,y-24,x-2,y-22,x,y-20,x-8,y-14,x-10,y-14
                     };

    fillpoly(17,hair_coor);

//eyes
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    int pupilL_coor[]= {x+8,y-11,x+8,y-19,x+6,y-21,x+5,y-15};
    fillpoly(4,pupilL_coor);

    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    int eyebrowL_coor[]= {x+2,y-23,x+2,y-24,x+3,y-25,x+8,y-21,x+9,y-20,x+8,y-19};
    fillpoly(6,eyebrowL_coor);

    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,WHITE);
    int irisL_coor[]= {x+2,y-23,x+2,y-17,x+5,y-15,x+6,y-20};
    fillpoly(4,irisL_coor);

//hand
    line(x-2,y+4,x-2,y-4);
    line(x+2,y+4,x+2,y-4);
    circle(x,y+4,2);
}


void hero_l(int x,int y)
{
    //belt
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,YELLOW);
    int belt_coor[]= {x+10,y+8,x-9,y+8,x-9,y+10,x+10,y+10};
    fillpoly(4,belt_coor);
    setfillstyle(SOLID_FILL,BLUE);
    int buckle_coor[]= {x-9,y+8,x-9,y+10,x-10,y+10,x-10,y+8};
    fillpoly(4,buckle_coor);

//pant
    circle(x-4,y+18,2);
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    int pant_coor[]= {x+10,y+10,x+10,y+18,x-10,y+18,x-10,y+10};
    fillpoly(4,pant_coor);

//shirt
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    int shirt_coor[]= {x+10,y-14,x-6,y-4,x-10,y-4,x-10,y+8,x+10,y+8};
    fillpoly(5,shirt_coor);

//face
    setfillstyle(SOLID_FILL,WHITE);
    int face_coor[]= {x+10,y-14,x-6,y-4,x-10,y-4,x-10,y-14,x-11,y-14,x-10,y-19,x-10,y-34,
                      x,y-24,x+2,y-24,x+2,y-22,x,y-20
                     };
    fillpoly(11,face_coor);

//hair
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);

    int hair_coor[]= {x+10,y-14,x+15,y-24,x+15,y-34,x+13,y-34,x+2,y-62,x,y-52,
                      x-2,y-52,x-4,y-44,x-6,y-54,x-10,y-44,x-10,y-34,
                      x,y-24,x+2,y-24,x+2,y-22,x,y-20,x+8,y-14,x+10,y-14
                     };

    fillpoly(17,hair_coor);

//eyes
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    int pupilL_coor[]= {x-8,y-11,x-8,y-19,x-6,y-21,x-5,y-15};
    fillpoly(4,pupilL_coor);

    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    int eyebrowL_coor[]= {x-2,y-23,x-2,y-24,x-3,y-25,x-8,y-21,x-9,y-20,x-8,y-19};
    fillpoly(6,eyebrowL_coor);

    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,WHITE);
    int irisL_coor[]= {x-2,y-23,x-2,y-17,x-5,y-15,x-6,y-20};
    fillpoly(4,irisL_coor);

//hand
    line(x-2,y+4,x-2,y-4);
    line(x+2,y+4,x+2,y-4);
    circle(x,y+4,2);
}
