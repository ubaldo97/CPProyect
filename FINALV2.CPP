#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<graphics.h>

void dibujardiagrama() //Funcion para dibujar el diagrama.
{
    setlinestyle(0,0,3); //Flecha derecha.
    line(571,200,590,200);
    int puntosFlecha[6]= {590,195,590,205,610,200};
    fillpoly(3,puntosFlecha);
    setlinestyle(0,0,1);

    setcolor(DARKGRAY); //Anillo central.
    circle(500,200,25);
    circle(500,200,20);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(523,200,DARKGRAY);

    setcolor(DARKGRAY); //Tubo Derecho
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    int puntosTuboD[8]= {520,196,520,204,571,204,571,196};
    fillpoly(4,puntosTuboD);

    int puntosTuboIn[8]= {496,220,504,220,504,350,496,350}; //Tubo Inferior
    fillpoly(4,puntosTuboIn);
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    int puntosTuboIn2[8]= {494,350,506,350,506,375,494,375};
    fillpoly(4,puntosTuboIn2);
    ellipse(500,410,0,180,15,35);
    setlinestyle(0,0,3);
    line(475,410,525,410);
    setlinestyle(0,0,1);
    setfillstyle(INTERLEAVE_FILL,DARKGRAY);
    floodfill(500,400,DARKGRAY);
    bar(475,410,525,415);

    setfillstyle(SOLID_FILL,LIGHTBLUE); //Tubo Superior.
    int dx1=482,dy1=191,dx2=488,dy2=185;
    int puntosTuboSu[8]= { dx1,dy1,dx2,dy2,dx2-80,dy2-80,dx1-80,dy1-80};
    fillpoly(4,puntosTuboSu);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    int gx1=401,gy1=112,gx2=409,gy2=104;
    int puntosTuboSu2[8]= {gx1,gy1,gx2,gy2,gx2-25,gy2-25,gx1-25,gy1-25};
    fillpoly(4,puntosTuboSu2);
    ellipse(380,48,180,360,15,35);
    setlinestyle(0,0,3);
    line(355,48,405,48);
    setlinestyle(0,0,1);
    setfillstyle(INTERLEAVE_FILL,DARKGRAY);
    floodfill(380,52,DARKGRAY);
    bar(355,43,405,48);

    outtextxy(580,180,"P"); //Literales
    outtextxy(480,240,"B");
    outtextxy(470,375,"C");
    outtextxy(360,83,"A");
    outtextxy(470,125,"0");
    line(500,170,500,120);
    arc(480,170,70,130,30);
}


void main()
{
    int driver, modo;
    float d, p, FAB, FBC, area, resAB, resBC;
    int n=0;

    // Ajustes del modo grafico
    detectgraph(&driver,&modo);
    initgraph(&driver,&modo,"TC\\BGI");
    // Caratula
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
    // Ciclo para efecto de cierre.
    int i;
    for(i=200; i>0; i--)
    {
        circle(300,225,i);
        clearviewport();
    }
    closegraph();

    //Comienza el ciclo do while y se vulve a abrir el modo grafico.
    do
    {
        int driver, modo;
        detectgraph(&driver,&modo);
        initgraph(&driver,&modo,"TC\\BGI");
        clearviewport();
        setbkcolor(15);
        setpalette(15,0);

        //Planteamiento del problema.
        outtextxy(70,30,"Planteamiento del problema.");
        line(68,40,285,40);
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
        dibujardiagrama(); //Se manda llamar la funcion y se dibuja el diagrama.
        getch();
        clearviewport();
        closegraph();
        // Se cierra y abre el modo grafico para evitar problemas al dibujar dentro del ciclo.
        detectgraph(&driver,&modo);
        initgraph(&driver,&modo,"TC\\BGI");
        clearviewport();

        // Comienza la seccion de los datos
        printf("\t\t Ingreso de los datos\n\n");
        printf("\t(Solo se admiten valores entre 1 y 100)\n\n\n");
        printf("  Ingresa el diametro en mm:  ");
        scanf("%f", &d);
        printf("\n  Ingresa la carga P en kNw:  ");
        scanf("%f", &p);
        printf("\n\n  Los datos para realizar los calculos son: \n\n\tDiametro: %.2lf mm,  Carga %.2lf kNw,  Angulo: 60", d,p);
        printf("\n\n\n\n Presiona una tecla para continuar --------->");
        getch();

        //Si el dato ingresado es correcto se hacen los calculos.
        if(p>0 && p<101 && d>0 && d<101)
        {
            cleardevice();
            FAB = p / sin(60*M_PI/180); //Calculos de fuerzas.
            FBC = FAB*cos(60*M_PI/180);

            float temp = d/1000; //Se convierten el diametro de mm a metros.
            area = (M_PI/4)*(temp*temp); //Calculo del area.

            float tempAB= (FAB*1000)/area; //Resultados en Pascales.
            float tempBC = (FBC*1000)/area;
            resAB = tempAB/1000000; //Se convierten los resultados a MPa.
            resBC = tempBC/1000000;

            printf("\n\t-- Resultados obtenidos --\n\n"); // Se muestran los resultados
            printf("\tTension en AB = %.2f MPa\n\n",resAB);
            printf("\tTension en BC = %.2f MPa\n\n",resBC);

            dibujardiagrama();
            // Comienza el dibujo del grafico.
            setcolor(DARKGRAY); // Anillo
            circle(180,150,15);
            circle(180,150,10);
            setfillstyle(SOLID_FILL,BROWN);
            floodfill(180,162,DARKGRAY);
            setlinestyle(0,0,1);    // Ejes
            setcolor(WHITE);
            line(80,150,300,150);   // Eje x
            line(180,50,180,250);   // Eje Y
            setlinestyle(0,0,3);
            setcolor(LIGHTBLUE);
            line(180,150,270,150);  // Lineas de fuerzas.
            line(180,150,180,248);
            line(180,150,100,110);
            setlinestyle(0,0,1);
            setfillstyle(SOLID_FILL,LIGHTBLUE);
            int puntosDiagrama[6]= {245,142,245,158,270,150}; // Flechas
            fillpoly(3,puntosDiagrama);
            int puntosDiagrama2[6]= {172,225,188,225,180,250};
            fillpoly(3,puntosDiagrama2);
            int puntosDiagrama3[6]= {95,120,108,102,85,102};
            fillpoly(3,puntosDiagrama3);
            setcolor(WHITE);
            arc(180,150,100,145,40); // Literales
            outtextxy(125,105,"0=60");
            outtextxy(170,40,"y");
            outtextxy(310,145,"X");
            outtextxy(60,80,"F");
            outtextxy(65,85,"AB");
            outtextxy(185,250,"F");
            outtextxy(190,255,"BC");

            //Al finalizar preguntamos si desea repetir el calculo.
            printf("\n  Escribe 1 si quieres repetir el calculo -->  ");
            scanf("%d",&n);
            //Si elige si, cambiamos p para que el do while se repita
            if(n==1)
            {
                p=102;

            }
            //En caso contrario escribe otra cosa y el do while termina.
        }
        else    //Si los datos estan fuera de rango muestra error y repite el planteamiento.
        {
            printf("\n\n  Datos incorrectos, presiona una tecla para comenzar de nuevo\n");
            p=102; //Asignamos un valor a p para que se repita el do while.
            getch();
        }
    }
    while(p>100); //Se repite mientras p sea mayor a 100.
    closegraph();


}

