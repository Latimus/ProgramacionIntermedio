//Manuel Alejandro Sahagun Mendoza	349857
//Programa que lea 3 califciaciones, anidado por el verdadero
//04 oct 2016
//SMM_P21
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	float cal1,cal2,cal3,prom;
	printf("Dame la primer calificacion: ");
	scanf("%f",&cal1);
	printf("Dame la segunda calificacion: ");
	scanf("%f",&cal2);
	printf("Dame la tercera calificacion: ");
	scanf("%f",&cal3);
	prom = (cal1 + cal2 + cal3) / 3;
	if (prom<=100)
	{
		if (prom<=96)
		{
			if (prom<=90)
			{
				if (prom<=80)
				{
					if (prom<=70)
					{
						if (prom<=60)
						{
							if (prom<=30)
							{
							printf("Recursar");
							}
							else
							{
							printf("Extraordinario");
							}
						}
						else
						{
						printf("Aprobado");
						}
					}
					else
					{
					printf("Suficiente");
					}
				}
				else
				{
				printf("Bien");
				}
			}
			else
			{
			printf("Muy bien");
			}
		}
		else
		{
		printf("Excelente");
		}
	}
	else
	{
	printf("Error");
	}
	printf("\n");
	system("pause");
	return 0;
}
