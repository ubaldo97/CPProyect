#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void dibujardiagrama(){
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
	//setpalette(15,0);
	outtextxy(580,180,"P");
	outtextxy(480,240,"B");
	outtextxy(470,375,"C");
	outtextxy(360,83,"A");
	outtextxy(470,125,"0");
	line(500,170,500,120);
	arc(480,170,70,130,30);
}


void main(){
int driver, modo;
float d, p, FAB, FBC, area, resAB, resBC;//Diametro, carga, FuerzasAB, FuerzasBC, area, resultados.
int n=0;
			// Detect the graphics driver and mode
			detectgraph(&driver,&modo);
			// initialize the graphics mode with initgraph
initgraph(&driver,&modo,"TC\\BGI");
setbkcolor(15);
setpalette(15,0);
outtextxy(170,30,"Instituto Politecnico Nacional - IPN");
outtextxy(135,90,"Escuela superior de Ingenieria y Arquitectura");
outtextxy(250,110,"Unidad Zacatenco");
outtextxy(175,140,"Academia de Ingenieria de Sistemas");
outtextxy(180,200,"Proyecto del tercer departamental");
outtextxy(40,260,"Asignatura -------> Programacion");
outtextxy(40,280,"Profesor   -------> Ing. Rodriguez Alquicia Aaron Mauricio");
outtextxy(40,300,"Alumno     -------> Ortiz Perez Edwin Mauricio");
outtextxy(40,320,"Boleta     -------> 2021310718");
outtextxy(40,340,"Grupo      -------> 2CV6");
outtextxy(210,430,"Fecha -------> 13/12/2021");
rectangle(25,20,620,450);
getch();
clearviewport();
int i;
	for(i=200;i>0;i--){
		circle(300,225,i);
		clearviewport();
	}
	closegraph();
do{
int driver, modo;
detectgraph(&driver,&modo);
initgraph(&driver,&modo,"TC\\BGI");
clearviewport();
setbkcolor(15);
setpalette(15,0);

outtextxy(70,30,"Planteamiento del problema.");
line(68,40,285,40);
////Descripcion
outtextxy(40,90,"Las varillas AB y BC tienen");
outtextxy(40,105,"un diametro 'd' en mm cada una.");
outtextxy(40,120,"Si se aplica una carga 'P' al anillo,");
outtextxy(40,135,"determine la tension media en ");
outtextxy(40,150,"cada varilla si 0 = 60.");
outtextxy(40,200,"Considerando el equilibrio de la junta B:");
outtextxy(80,230,"P - FAB sin60 = 0");
outtextxy(80,250,"FAB cos60 - FBC = 0  ");
outtextxy(40,300,"El area de la seccion transversal de los");
outtextxy(40,315,"varillas AB y BC es: ");
outtextxy(80,345,"AAB = ABC = pi/4(d * d)");
outtextxy(40,430,"Presiona una tecla para calcular el problema   ------->");

rectangle(25,20,620,450);
	//getch();
	dibujardiagrama();
	getch();
	clearviewport();
	//float d, p, FAB, FBC, area, resAB, resBC;//Diametro, carga, FuerzasAB, FuerzasBC, area, resultados.
	//int n=0;
	//do{
closegraph();

//int driver, modo;
detectgraph(&driver,&modo);
initgraph(&driver,&modo,"TC\\BGI");
clearviewport();
//setbkcolor(15);
//setpalette(15,0);

printf("\t\t Ingreso de los datos\n\n");
printf("\t(Solo se admiten valores entre 1 y 100)\n\n\n");

printf("  Ingresa el diametro en mm:  "); //Ingreso de los datos
scanf("%f", &d);
printf("\n  Ingresa la carga P en kNw:  ");
scanf("%f", &p);
printf("\n\n  Los datos para realizar los calculos son: \n\n\tDiametro: %.2lf mm,  Carga %.2lf KNw,  Angulo: 60", d,p);
printf("\n\n\n\n Presiona una tecla para continuar --------->");
getch();
//cleardevice();
//setgraphmode(modo);
		 //Si el dato ingresado es correcto hacemos los calculos
		 if(p>0 && p<101){
cleardevice();
		 // Empiezan los calculos
FAB = p / sin(60*M_PI/180);
FBC = FAB*cos(60*M_PI/180);

float temp = d/1000; // Se convierten el diametro de mm a metros. El temp nomas era por si a caso.
area = (M_PI/4)*(temp*temp);

float tempAB= (FAB*1000)/area; // Resultado de Fuerzas en Pascales.
float tempBC = (FBC*1000)/area;
resAB = tempAB/1000000; //Se convierten los resultados en MPa.
resBC = tempBC/1000000;
//settextstyle( DEFAULT_FONT, 0, 1 );
//outtext("Resultados asdasdasd");
printf("\n\t-- Resultados obtenidos --\n\n");
printf("\tTension en AB = %.2f MPa\n\n",resAB);
printf("\tTension en BC = %.2f MPa\n\n",resBC);

dibujardiagrama();

setcolor(DARKGRAY);//Anillo
circle(180,150,15);
circle(180,150,10);
setfillstyle(SOLID_FILL,BROWN);
floodfill(180,162,DARKGRAY);
setlinestyle(0,0,1);//Ejes
setcolor(WHITE);
line(80,150,300,150);//Eje x
line(180,50,180,250);//Eje Y
setlinestyle(0,0,3);
setcolor(LIGHTBLUE);
line(180,150,270,150);//Derecha
line(180,150,180,248);//Abajo
line(180,150,100,110);//Diagonal
setlinestyle(0,0,1);
setfillstyle(SOLID_FILL,LIGHTBLUE);
int puntosDiagrama[6]={245,142,245,158,270,150};//Flecha derecha
fillpoly(3,puntosDiagrama);
int puntosDiagrama2[6]={172,225,188,225,180,250};//Flecha abajo
fillpoly(3,puntosDiagrama2);
int puntosDiagrama3[6]={95,120,108,102,85,102};//Flecha diagonal
fillpoly(3,puntosDiagrama3);
setcolor(WHITE);
arc(180,150,100,145,40);
outtextxy(125,105,"0=60");
outtextxy(170,40,"y");
outtextxy(310,145,"X");
outtextxy(60,80,"F");
outtextxy(65,85,"AB");
outtextxy(185,250,"F");
outtextxy(190,255,"BC");

		 //Al finalizar preguntamos si desea realizar de nuevo el calculo
			printf("\n  Escribe 1 si quieres repetir el calculo -->  ");
			scanf("%d",&n);
			//Si elige si cambiamos p para que el do while se repita
			if(n==1){
				p=102;

			}//En caso contrario no hacemos nada y el do while terminar�

		 } else{//En caso de que p sea mayor a 100
		 printf("\n\n  Datos incorrectos, presiona una tecla para comenzar de nuevo\n");
		 p=102;
		 getch();
		 }
	}while(p>100);//se repite mientras p sea mayor a 100
	closegraph();

}

