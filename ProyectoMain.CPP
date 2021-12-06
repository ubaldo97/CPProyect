#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
int driver, modo;
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
outtextxy(40,300,"Alumno     -------> ?");
outtextxy(40,320,"Boleta     -------> XXXXXXXXXX");
outtextxy(40,340,"Grupo      -------> XXXX");
outtextxy(210,430,"Fecha -------> 13/12/2021");
rectangle(25,20,620,450);
getch();
clearviewport();
int i;
	for(i=200;i>0;i--){
		circle(300,225,i);
		clearviewport();
	}
outtextxy(220,30,"Definici�n del problema.");
line(215,40,410,40);
rectangle(25,20,620,450);
	getch();
}