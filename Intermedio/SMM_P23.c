//Manuel Alejandro Sahagun Mendoza  349857
//Programa que sirva para calcular el total a pagar por consumo de agua...
//05 octubre 2016
//SMM_P23
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float con,subt,iva,tot;
    printf("Dame la cantidad de metros cubicos de agua que se consumieron: ");
    scanf("%f",&con);
    if (con <= 4)
    {
            subt = 50;
            iva = subt * 0.16;
            tot = subt + iva;
            printf("\n Subtotal:             %.2f",subt);
            printf("\n IVA 16%:                %.2f",iva);
            printf("\n El total a pagar es:  %.2f pesos.",tot);
            }
            else
            {
                if (con <= 15)
                {
                        subt = ((con * 8) + 50);
                        iva = subt * 0.16;
                        tot= subt + iva;
                        printf("\n Subtotal:             %.2f",subt);
                        printf("\n IVA 16%:               %.2f",iva);
                        printf("\n El total a pagar es:  %.2f pesos.",tot);
                        }
                        else
                        {
                            if(con <= 50)
                            {
                                   subt = ((con * 10) + 130);
                                   iva = subt * 0.16;
                                   tot = subt + iva;
                                   printf("\n Subtotal:            %.2f",subt);
                                   printf("\n IVA 16%:               %.2f",iva);
                                   printf("\n El total a pagar es: %.2f pesos.",tot);
                                   }
                                   else
                                   {
                                       subt = ((con * 11) + 470);
                                   iva = subt * 0.16;
                                   tot = subt + iva;
                                   printf("\n Subtotal:            %.2f",subt);
                                   printf("\n IVA 16%:               %.2f",iva);
                                   printf("\n El total a pagar es: %.2f pesos.",tot);
                                   }
                        }
            }
  printf("\n");
  system("pause");	
  return 0;
}
