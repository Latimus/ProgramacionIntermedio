//Manuel Alejandro Sahagun Mendoza     349857
//Programa que lea 2 numeros
//14 sept 2016
//SMMA_L01.C
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1,num2,suma;
    printf("Dame el primer numero: ");
    scanf("%d",&num1);
    printf("Dame el segundo numero: ");
    scanf("%d@",&num2);
    suma=num1+num2;
    printf("\n La suma de los numeros es: %d",suma);
    printf("\n %d+%d=%d\n",num1,num2,suma);
  system("PAUSE");	
  return 0;
}
