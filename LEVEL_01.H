
void make_room(){
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);

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