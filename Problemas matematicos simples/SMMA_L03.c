//Manuel Alejandro Sahagun Mendoza   349587
//Programa que lea 2 numeros enteros y desplegar las 4 operaciones basicas
//14 sept 2016
//SMMA_L03.C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,suma,resta,mult,divi;
    printf("Dame el primer numero: ");
    scanf("%f",&num1);
    printf("Dame el segundo numero: ");
    scanf("%f",&num2);
    suma = num1 + num2;
    printf("\n La suma es: %.2f",suma);
    resta= num1 - num2;
    printf("\n La resta es: %.2f",resta);
    mult= num1 * num2;
    printf("\n La multiplicacion es: %.2f",mult);
    divi = (float)(num1 / num2);
    printf("\n La division es: %.2f",divi);
  
  system("PAUSE");	
  return 0;
}
