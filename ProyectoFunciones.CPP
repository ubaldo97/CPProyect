#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

//funcion para inicializar el modo grafico
void rungrafico(){
int driver, modo;
	// Detectar el controlador y el modo
	detectgraph(&driver,&modo);
	// Inicializa el modo grafico
		initgraph(&driver,&modo,"TC\\BGI");
}

// funcion para pintar la portada 
void pintarcaratula(){
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
}

//Funcion para crear las animaciones
void crearanimacion(int num){
	if(num==1){
	int i;
		for(i=200;i>0;i--){
			circle(300,225,i);
			clearviewport();
		}
	}
}

//Funcion para pintar el planteamiento del problema 
void plantearproblema(){
		outtextxy(220,30,"Definicion del problema.");
		line(215,40,410,40);
}

void main(){
	//Llamamos a la funcion para inicializar el modo grafico
	rungrafico();
	//Seteamos el color de fondo en blanco
	setbkcolor(15);
	//Cambiamos el color de las letras de blanco a negro para que se distingan del fondo
	setpalette(15,0);
	//Llamamos a la funcion para pintar la portada 
	pintarcaratula();
	//Dibujamos un rectangulo alrededor de nuestro texto de portada para más placer XD
	rectangle(25,20,620,450);
	//Esperamos a que el usuario presione una tecla
	getch();
	//Limpiamos la pantalla rellenando con el color de fondo actual (blanco)
	clearviewport();
	//Llamamos a la funcion que nos crea las animaciones y le pasamos el numero de animacion que queremos
	crearanimacion(1);
	//Llamamos a la funcion que nos pinta el plantemiento del problema 
	plantearproblema();
	//Volvemos a pintar el rectangulo que se limpio anteriormente
	rectangle(25,20,620,450);
	//Esperamos a que el usuario presione una tecla
	getch();
}