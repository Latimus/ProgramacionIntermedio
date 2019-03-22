//Manuel Alejandro Sahagun Mendoza	349857
//Programa que sirva para desplegar el total de una llamada donde se pide como datos min y tipo de llamada
//04 de octubre 2016
//SMM_P16
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int op;
	float min,iva,subt,tot;
	printf("Ingrese la cantidad de tiempo habla en minutos: ");
	scanf("%f",&min);
	printf("Elija una opcion de llamada: ");
	printf("\n Llamada local:    	  1");
	printf("\n Llamada nacional: 	  2");
	printf("\n Llamada internacional:   3\n");
	scanf("%d",&op);
	switch (op)
	{
		case 1:
			subt= 3;
			iva = 3 * 0.16;
			tot = subt + iva;
			printf("\n Subtotal:            	    	  %.2f",subt);
			printf("\n IVA 16%:  		       	  %.2f",iva);
			printf("\n El total de la llamada son:      %.2f pesos",tot);
			printf("\n Cantidad de minutos hablados:    %.2f",min);
			break;
		case 2:
			subt = (((min - 3) * 2) + 7);
			iva = subt * 0.16;
			tot = subt + iva;
			printf("\n Subtotal:            	    	  %.2f",subt);
			printf("\n IVA 16%:  		       	  %.2f",iva);
			printf("\n El total de la llamada son:      %.2f pesos",tot);
			printf("\n Cantidad de minutos hablados:    %.2f",min);
			break;
		case 3:
			subt = (((min - 2) * 4) + 9);
			iva = subt * 0.16;
			tot = subt + iva;
			printf("\n Subtotal:            	    	  %.2f",subt);
			printf("\n IVA 16%:  		       	  %.2f",iva);
			printf("\n El total de la llamada son:      %.2f pesos",tot);
			printf("\n Cantidad de minutos hablados:    %.2f",min);
			break;
		default:
			printf("Opcion no valida, elija un numero del 1 al 3");
	}			
	printf("\n");
	system("pause");
	return 0;
}
