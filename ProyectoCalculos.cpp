#include<conio.h>
#include<stdio.h>
#include<math.h>


int main()
{//clrscr() Por si lo corres en el viejo.
float d, p, FAB, FBC, area, resAB, resBC;//Diametro, carga, FuerzasAB, FuerzasBC, area, resultados.

printf("\t\t Ingreso de los datos\n\n\n");

printf("\tIngresa el diametro en mm:  "); //Ingreso de los datos
scanf("%f", &d);
printf("\n\tIngresa la carga P en kNw:  ");
scanf("%f", &p);

printf("\n\n\tLos datos para realizar los calculos son: \n\n\tDiametro: %.2lf mm,  Carga %.2lf KNw,  Angulo: 60", d,p);
getch();

// Empiezan los calculos
FAB = p / sin(60*M_PI/180);
FBC = FAB*cos(60*M_PI/180);
//printf("\nFab %f",FAB);
//printf("\nFBC %f",FBC);

float temp = d/1000; // Se convierten el diametro de mm a metros. El temp nomas era por si a caso.
area = (M_PI/4)*(temp*temp);
//printf("\nArea %f", area);
//printf("\nTemp %f", temp);

float tempAB= (FAB*1000)/area; // Resultado de Fuerzas en Pascales.
float tempBC = (FBC*1000)/area;
resAB = tempAB/1000000; //Se convierten los resultados en MPa.
resBC = tempBC/1000000;
//printf("\nTemAb %f", tempAB);
//printf("\nTempBC %f", tempBC);
//printf("\nresAb %f", resAB);
//printf("\nrespBC %f", resBC);
printf("\n\n\n\t\t-- Resultados obtenidos --\n\n");
printf("\t\tTension en AB = %.2f MPa\n\n",resAB);
printf("\t\tTension en BC = %.2f MPa\n\n",resBC);


getch();
return (0);
}
