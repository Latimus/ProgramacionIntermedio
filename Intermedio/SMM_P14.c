//Manuel Alejandro Sahagun Mendoza	349857
//Prgorama que lea 3 numeros, desplegar en forma ascendente (Op log)
//05 octubre 2016
//SMM_P14
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int n1,n2,n3;
  	printf("Dame el primer numero: ");
  	scanf("%d",&n1);
  	printf("Dame el segundo numero: ");
  	scanf("%d",&n2);
  	printf("Dame el tercer numero: ");
  	scanf("%d",&n3);
  	if ((n3 > n2) && (n2 > n1))
  	{
	  printf(" %d,%d,%d.",n1,n2,n3);
	}
	else
	{
		if ((n1 > n2) && (n2 > n3))
		{
			printf(" %d,%d,%d.",n3,n2,n1);
		}
		else
		{
			if ((n1 > n2) && (n3 > n1))
			{
				printf(" %d,%d,%d.",n2,n1,n3);
			}
			else
			{
				if ((n1 > n3) && (n3 > n2))
				{
					printf(" %d,%d,%d.",n2,n3,n1);
				}
				else
				{
					if((n2 > n3) && (n2 > n1) && (n1 > n3))
					{
						printf(" %d,%d,%d.",n3,n1,n2);
					}
					else
					{
						printf(" %d,%d,%d.",n1,n3,n2);
					}
				}
			}
		}
	}
  printf("\n");
  system("pause");	
  return 0;
}
	
