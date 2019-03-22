//Manuel Alejandro Sahagun Mendoza  349857
//Programa que lea 3 numeros, desplegar cual es el del medio
//05 octubre 2016
//SMM_P13
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n1,n2,n3;
  printf("Dame el primer numero: ");
  scanf("%d",&n1);
  printf("Dame el segundo numero: ");
  scanf("%d",&n2);
  printf("Dame el tercer numero: ");
  scanf("%d",&n3);
  if (((n3 > n2) && (n2 > n1)) || ((n3 < n2) && (n2 < n1)))
  {
       printf("El nuemro medio es: %d",n2);
   }
   else
   {
       if (((n1 > n3) && (n3 > n2)) || ((n1 < n3) && (n3 < n2)))
       {
                printf("El nuemro medio es: %d",n3);
                }
                else
                {
                    printf("El nuemro medio es: %d",n1);
                }
   }   
  printf("\n");
  system("pause");	
  return 0;
}
