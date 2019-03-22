//Manuel Alejandro Sahagun Mendoza     349857
//Programa que lea 3 calificaciones, calcule el promedio y despliegue el resultado
//14 sept 2016
//SMMA_L02.C
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int cal1,cal2,cal3;
  float prom;
  printf("Dame la primera calificacion: ");
  scanf("%d",&cal1);
  printf("Dame la segunda calificacion: ");
  scanf("%d",&cal2);
  printf("Dame la tercera calificacion: ");
  scanf("%d",&cal3);
  prom=(float)(cal1+cal2+cal3)/3;
  printf("\n El promedio es: %.2f",prom);
  system("PAUSE");	
  return 0;
}
