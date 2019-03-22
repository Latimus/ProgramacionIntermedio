//Manuel Alejandro Sahagun Mendoza	349857
//Programa que lea la cantidad de articulos y precio (sin iva), caluclar subt (sin iva), IVA, descuento y total  a pagar. Despl toda la inf.
//04 octubre 2016
//SMM_P15
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	float cant,pre,subt,iva,desc,tot;
	printf("Dame la cantidad de articulos a pagar: ");
	scanf("%f",&cant);
	printf("Dame el precio del articulo: ");
	scanf("%f",&pre);
	subt = (pre * cant);
	if (subt >= 2000)
	{
		if (subt >= 10000)
		{
			desc = subt * 0.15;
			iva = subt * 0.16;
			tot = subt + iva - desc;
			printf("\n Subtotal:  %.2f",subt);
			printf("\n IVA 16%:   %.2f",iva);
			printf("\n Descuento: %.2f",desc);
			printf("\n Total:     %.2f",tot);
			
		}
		else
		{
			desc = subt * 0.10;
			iva = subt * 0.16;
			tot = subt + iva - desc;
			printf("\n Subtotal:  %.2f",subt);
			printf("\n IVA 16%:   %.2f",iva);
			printf("\n Descuento: %.2f",desc);
			printf("\n Total:     %.2f",tot);
		}
	}
	else
	{
		if (subt >= 1000)
			{
				desc = subt * 0.10;
				iva = subt * 0.16;
				tot = subt + iva - desc;
				printf("\n Subtotal:  %.2f",subt);
				printf("\n IVA 16%:   %.2f",iva);
				printf("\n Descuento: %.2f",desc);
				printf("\n Total:     %.2f",tot);
			}
			else
			{
				if (subt < 500)
					{
						desc = subt * 0;
						iva = subt * 0.16;
						tot = subt + iva - desc;
						printf("\n Subtotal:  %.2f",subt);
						printf("\n IVA 16%:   %.2f",iva);
						printf("\n Descuento: %.2f",desc);
						printf("\n Total:     %.2f",tot);
					}
				else
					{
						desc = subt * 0.025;
						iva = subt * 0.16;
						tot = subt + iva - desc;
						printf("\n Subtotal:  %.2f",subt);
						printf("\n IVA 16%:   %.2f",iva);
						printf("\n Descuento: %.2f",desc);
						printf("\n Total:     %.2f",tot);
					}	
			}
	}
	printf("\n");
	system("pause");
	return 0;
}
