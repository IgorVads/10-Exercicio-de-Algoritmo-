#include <stdio.h>
#include <locale.h>

/*Um programa que solicita e armazena seis números inteiros em uma 
matriz 2 x 3, denominada de A, e solicita e armazena seis números inteiros em outra 
matriz 2 x 3, denominada de B. Em seguida, exiba a soma dessas matrizes.*/

int main(void)
{
	
	int j,i;
	int A[2][3];
	int B[2][3];
	int resultado[2][3];
	
	setlocale(LC_ALL,"portuguese");
	
	printf("\nDigite os valores da matriz A:\n\n ");
	for (i=0; i<2; i++) 
	{
		for (j=0; j<3; j++)
		{
			printf("Digite o valor para A[%i][%i]: ", i,j);
				scanf("%i", &A[i][j]);
		}
	}
	printf("\nDigite os valores da matriz B:\n\n");
	for (i = 0; i < 2; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			printf("Digite o valor para B[%i][%i]: ", i, j);
				scanf("%i", &B[i][j]);
		}
	}
	
	printf("\nA soma das matrizes A e B é:\n\n");
	for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            resultado[i][j] = A[i][j] + B[i][j];
            printf("%i  ", resultado[i][j]);printf("A[%i][%i] + B[%i][%i] = %i\n", i, j, i, j, resultado[i][j]);
        }
        printf("\n");
    }
    

	return 0;	
}
	
	