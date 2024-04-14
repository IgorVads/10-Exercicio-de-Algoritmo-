#include <stdint.h>
#include <locale.h>

/*Programa que solicita e armazena oito n�meros reais em uma matriz 4 � 2, 
denominada de A. Construa outra matriz, denominada de B, do mesmo tipo e 
tamanho de A, e com os mesmos elementos armazenados em A, por�m de forma 
invertida. Ou seja, o primeiro elemento de A passa a ser o �ltimo de B, 
o segundo elemento de A passa a ser o pen�ltimo de B e assim por diante. Ao final, o 
programa deve exibir o conte�do de A e B.*/

int main()
{
	setlocale(LC_ALL, "portguese");
	
	int i,j,x=1,y=1;
	float A[4][2],B[4][2];

	printf ("Matriz A");	
	for (i=0;i<4;i++)
	{
		for (j=0; j<2; j++) 
		{
			printf 
		}
	}

	printf ("Matriz B");	
	for (i=0;i<4;i++)
	{
		for (j=0; j<2; j++) 
		{
			printf("Digite o %i° valor para [%i,%i]",x++,B[i][j]):
		}
	}
	return 0;
}