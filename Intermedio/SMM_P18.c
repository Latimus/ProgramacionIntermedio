//Manuel Alejandro Sahagun Mendoza	349857
//Programa que sirve para realizar las conversiones de temperaturas segun desee el usuario
//04 octubre 2016
//SMM_P18
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int op;
	float grad,conv;
	printf("Dame la temperatura que deseas convertir: ");
	scanf("%f",&grad);
	printf("Elije que conversion deseas realizar");
	printf("\n Centigrados a Fahrenheit:  1");
	printf("\n Fahrenheit a Centigrados:  2");
	printf("\n Centigrados a Kelvin:      3");
	printf("\n Centigrados a Kelvin:      4\n");
	scanf("%d",&op);
	switch (op)
	{
		case 1:
			conv = (( 1.8  * grad) + 32);
			printf("\n Son %.2f grados Fahrenheit",conv);
			break;
		case 2:
			conv = (grad - 32) / 1.8;
			printf("\n Son %.2f grados Centigrados",conv);
			break;
		case 3:
			conv = grad + 273.15;
			printf("\n Son %.2f Kelvin",conv);
			break;
		case 4:
			conv = (((grad - 32) / 1.8) + 273.15);
			printf("\n Son %.2f Kelvin",conv);
			break;
		default:
			printf("\n Opcion no valida, elija un nuemro del 1 al 4");
	}
	printf("\n");
	system("pause");
	return 0;
}
