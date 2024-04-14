#include <stdio.h>
#include <locale.h>

/*Um programa que solicita e armazena nove valores inteiros em uma 
matriz 3 x 3. Em seguida, exiba os elementos da matriz na ordem inversa.*/

int main(){

	setlocale(LC_ALL, "portuguese");
	
	int i,j,x=1,mat[3][3];
	
    for (i=0;i<3;i++){
		for (j=0;j<3;j++)
		{
		printf("Digite %i° valor inteiro: ",x++);
			   scanf("%i", &mat [i][j]);	
		}
	}
		printf("\nOrdem Inversa:\n\n");
			for (i=2; i>=0;  i--)
			{
				for (j=2 ;j>=0 ;j--) 
				{
					printf("%i  ",mat[i][j]);
				}
				printf("\n");
			}
	return 0;
}