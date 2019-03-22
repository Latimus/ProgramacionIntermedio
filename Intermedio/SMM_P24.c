//Manuel Alejandro Sahagun Mendoza  349857
/*Programa que sirva para calcular el salario de un trabajador...Desplegar todos los datos(salario x hora,
horas trabajadas, salario normal, salario extra y salario total)*/
//05 octubre 2016
//SMM_P24
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float hse,sxh,sln,sxt,tot;
    printf("Cantidad de horas trabajadas en la semana: ");
    scanf("%f",&hse);
    printf("Escriba el salario por hora: ");
    scanf("%f",&sxh);
    if (hse <= 40)
    {
           tot = hse * sxh;
           printf("\n Salario por hora: %.2f",sxh);
           printf("\n Horas trabajadas: %.2f",hse);
           printf("\n Salario normal:   %.2f",tot);
           printf("\n Salario extra:    0.00");
           printf("\n==========================");
           printf("\n Salario Total:    %.2f",tot);
           }
           else
           {
               if (hse <= 49)
               {
                       sln = hse * sxh;
                       sxt = ((hse - 40) * (2 * sxh));
                       tot = sln + sxt;
                       printf("\n Salario por hora: %.2f",sxh);
                       printf("\n Horas trabajadas: %.2f",hse);
                       printf("\n Salario normal:   %.2f",sln);
                       printf("\n Salario extra:    %.2f",sxt);
                       printf("\n==========================");
                       printf("\n Salario Total:    %.2f",tot);
                       }
                       else
                       {
                           sln = hse * sxh;
                           sxt = ((hse - 49) * (3 * sxh) + (9 * (2 * sxh)));
                           tot = sln + sxt;
                           printf("\n Salario por hora: %.2f",sxh);
                           printf("\n Horas trabajadas: %.2f",hse);
                           printf("\n Salario normal:   %.2f",sln);
                           printf("\n Salario extra:    %.2f",sxt);
                           printf("\n==========================");
                           printf("\n Salario Total:    %.2f",tot);
                       }
           }
  printf("\n");
  system("pause");	
  return 0;
}
