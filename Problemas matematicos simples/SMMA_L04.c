//Manuel Alejandro Sahagun Mendoza   349857
//Programa que lea una medida en cm; desplegarla en pulgadas y pies
//14 sept 2016
//SMMA_L04.C
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float cm,pulg,pie;
    printf("Dame una medida en centimetros: ");
    scanf("%f",&cm);
    pulg = cm / 2.54;
    printf("\n La medida en pulgadas es: %.2f",pulg);
    pie = cm / 30.48;
    printf("\n La medida en pies es: %.2f",pie);
  system("PAUSE");	
  return 0;
}
