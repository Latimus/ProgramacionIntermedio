//Manuel Alejandro Sahagun Mendoza	349857
//Programa que despliegue un menu y que pregunte el tipo de conversion de medida que desea
//04 octubre 2016
//SMM_P19
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int op;
	float med,con;
	printf("Dame la medida que deseas convertir: ");
	scanf("%f",&med);
	printf("\n Elije una opcion: ");
	printf("\n Centimetros a pulgadas: 	1");
	printf("\n Centimetros a pies:     	2");
	printf("\n Kilometros a millas:    	3");
	printf("\n Pulgadas a centimetros: 	4");
	printf("\n Pies a centimetros:     	5");
	printf("\n Millas a kilometros:    	6\n");
	scanf("%d",&op);
	switch (op)
	{
		case 1:
			con = med * 2.54;
			printf("\n Son %.4f pulgadas",con);
			break;
		case 2:
			con = med * 0.0328084;
			printf("\n Son %.4f pies",con);
			break;
		case 3:
			con = med * 0.621371;
			printf("\n Son %.4f millas",con);
			break;
		case 4:
			con = med * 2.54;
			printf("\n Son %.4f centimetros",con);
			break;
		case 5:
			con = med * 30.48;
			printf("\n Son %.4f centimetros",con);
			break;
		case 6:
			con = med * 1.609;
			printf("\n Son %.4f kilometros",con);
			break;
		default:
			printf("Opcion no valida, elija un numero del 1 al 6"); 
	}
	printf("\n");
	system("pause");
	return 0;
}
