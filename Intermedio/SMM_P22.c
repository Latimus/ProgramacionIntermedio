//Manuel Alejandro Sahagun Mendoza	349857
//Programa que lea 3 calificaciones, Anidado por el falso.
//04 octubre 2016
//SMM_P22
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
	if (prom>=100)
		{
		printf("Error");
		}
	else	
	{
		if (prom>=96)
			{
			printf("Excelente");
			}
		else
			{
			if (prom>=90)
			{
			printf("Muy bien");
			}
			else
				{
				if (prom>=80)
				{
				printf("Bien");
				}
				else
					{
					if (prom>=70)
					{
					printf("Suficiente");
						}
						else
							{
							if (prom>=60)
							{
							printf("Aprobado");
								}
								else
									{
									if (prom>=30)
									{
									printf("Extraordinario");	
									}
									else
									{
									printf("Repetir");
									}	
								}
							}
						}
					}
				}
			}
	printf("\n ");
	system("pause");
	return 0;
}
