//Manuel Alejandro Sahagun Mendoza   349857
//Programa que calcule el area de un triangulo
//14 sept 2016
//SMMA_L05.C
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float base,alt,area;
    printf("Dame la base del triangulo: ");
    scanf("%f",&base);
    printf("Dame la altura del triangulo: ");
    scanf("%f",&alt);
    area = (base * alt)/2;
    printf("\n El area del triangulo es: %.2f",area);
  system("PAUSE");	
  return 0;
}
