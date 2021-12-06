#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
	int gd = DETECT, gm = DETECT;
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	setbkcolor(WHITE);
	setpalette(15,0);  ///////// Color negro
	rectangle(25,20,620,450);
	setlinestyle(0,0,3); //Cambio de tipo de linea flecha derecha
	line(571,200,590,200); //Linea flecha derecha
	int puntosFlecha[6]={590,195,590,205,610,200};//Flecha derecha
	fillpoly(3,puntosFlecha); //Flecha derecha
	setlinestyle(0,0,1); //Se regresa el tipo de linea normal

	// Anillo Central //
	setcolor(DARKGRAY);
	circle(500,200,25);
	circle(500,200,20);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(523,200,DARKGRAY);

	//Tubo Derecho
	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	int puntosTuboD[8]={520,196,520,204,571,204,571,196};//CentroDer 571,200
	fillpoly(4,puntosTuboD);

	//Tubo Inferior
	int puntosTuboIn[8]={496,220,504,220,504,350,496,350};
	fillpoly(4,puntosTuboIn);
	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	int puntosTuboIn2[8]={494,350,506,350,506,375,494,375};
	fillpoly(4,puntosTuboIn2);
	ellipse(500,410,0,180,15,35);
	setlinestyle(0,0,3);
	line(475,410,525,410);
	setlinestyle(0,0,1);
	setfillstyle(INTERLEAVE_FILL,DARKGRAY);
	floodfill(500,400,DARKGRAY);
	bar(475,410,525,415);

	// Tubo Superior
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	int dx1=482,dy1=191,dx2=488,dy2=185;
	int puntosTuboSu[8]={ dx1,dy1,dx2,dy2,dx2-80,dy2-80,dx1-80,dy1-80};
	fillpoly(4,puntosTuboSu);
	setfillstyle(SOLID_FILL,LIGHTGRAY); //Empieza parte gris
	int gx1=401,gy1=112,gx2=409,gy2=104;
	int puntosTuboSu2[8]={gx1,gy1,gx2,gy2,gx2-25,gy2-25,gx1-25,gy1-25};
	fillpoly(4,puntosTuboSu2);
	ellipse(380,48,180,360,15,35);//Comienza soporte
	setlinestyle(0,0,3);
	line(355,48,405,48);
	setlinestyle(0,0,1);
	setfillstyle(INTERLEAVE_FILL,DARKGRAY);
	floodfill(380,52,DARKGRAY);
	bar(355,43,405,48);

	// Literales
	setpalette(15,0);
	outtextxy(580,180,"P");
	outtextxy(480,240,"B");
	outtextxy(470,375,"C");
	outtextxy(360,83,"A");
	outtextxy(470,125,"0");
	line(500,170,500,120);
	arc(480,170,70,130,30);



	getch();
	closegraph();

}