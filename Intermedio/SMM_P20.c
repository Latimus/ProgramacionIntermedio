//Manuel Alejandro Sahagun Mendoza	349857
//Un usuario desea saber cuanto pagara por un boleto de tren...
//04 octubre 2016
//SMM_P20
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int op;
	float km,tot,subt,desc;
	
	printf("Cantidad de kilometros recorridos: ");
	scanf("%f",&km);
	printf("\n Elija una opcion: ");
	printf("\n Boleto sencillo:  1");
	printf("\n Boleto redondo:   2\n ");
	scanf("%d",&op);
	switch (op)
	{
		case 1:
			if (km < 100)
			{
				tot = km * 4.5;
				printf("\n Costo total del boleto:          %.2f pesos.",tot);
				printf("\n Total de kilometros recorridos:  %.2f kilometros.",km);
				printf("\n ==================================================");
				printf("\n                                    Boleto sencillo");
			}
			else
			{
				if (km < 500)
				{
					tot = km * 4;
					printf("\n Costo total del boleto:          %.2f pesos.",tot);
					printf("\n Total de kilometros recorridos:  %.2f kilometros.",km);
					printf("\n ==================================================");
					printf("\n                                    Boleto sencillo");
				}
				else
				{
					tot = km * 3.5 ;
					printf("\n Costo total del boleto:          %.2f pesos.",tot);
					printf("\n Total de kilometros recorridos:  %.2f kilometros.",km);
					printf("\n ==================================================");
					printf("\n                                    Boleto sencillo");
				}
			}
			break;
		case 2:
			if (km < 100)
			{
				subt = km * 4.5;
				desc = subt * .3;
				tot = subt - desc;
				printf("\n Costo total del boleto:          %.2f pesos.",tot);
				printf("\n Total de kilometros recorridos:  %.2f kilometros.",km);
				printf("\n ==================================================");
				printf("\n                                    Boleto redondo");
			}
			else
			{
				if (km < 500)
				{
					subt = km * 4;
					desc = subt * .3;
					tot = subt - desc;
					printf("\n Costo total del boleto:          %.2f pesos.",tot);
					printf("\n Total de kilometros recorridos:  %.2f kilometros.",km);
					printf("\n ==================================================");
					printf("\n                                    Boleto redondo");
				}
				else
				{
					subt = km * 3.5;
					desc = subt * .3;
					tot = subt - desc;
					printf("\n Costo total del boleto:          %.2f pesos.",tot);
					printf("\n Total de kilometros recorridos:  %.2f kilometros.",km);
					printf("\n ==================================================");
					printf("\n                                    Boleto redondo");
				}
			}
			break;
		default:
			printf("Opcion no valida, elija 1 o 2.");		
	}
	printf("\n");
	system("pause");
	return 0;

}
