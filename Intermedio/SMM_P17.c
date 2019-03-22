//Manuel Alejandro Sahagun Mendoza	349857
//Programa que lea 2 numero y realize las 4 operaciones basicas. El usuario debera seleccionar cual de las operaciones desea.
//04 octubre 2016
//SMM_P17
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int op;
	float num1,num2,res;
	printf("Dame el primer numero: ");
	scanf("%f",&num1);
	printf("Dame el segundo numero: ");
	scanf("%f",&num2);
	printf("Elije una opcionm: ");
	printf("\n Suma:            1");
	printf("\n Resta:           2");
	printf("\n Multiplicacion:  3");
	printf("\n Division:   	  4\n");
	scanf("%d",&op);
	switch (op)
	{
		case 1:
			res = num1 + num2;
			printf("\n El resultado de la suma es: %.2f",res);
			break;
		case 2:
			res = num1 - num2;
			printf("\n El resultado de la resta es: %.2f",res);
			break;
		case 3:
			res = num1 * num2;
			printf("\n El resultado de la multiplicacion es: %.2f",res);
			break;
		case 4:
			res = num1 / num2;
			printf("\n El resultado de la division es: %.2f",res);
			break;
		default:
			printf("Opcion no valida, elija un numero del 1 al 4");
	}
	printf("\n");
	system("pause");
	return 0;
}
