#include <stdio.h>
#include <locale.h>

/*Um programa que solicita e armazena o nome e três notas de cinco alunos 
em uma matriz 5 x 3. Por fim, o programa deve exibir uma mensagem com o nome 
e a média aritmética de cada aluno.*/

int main()
{
	int i;
	char nomes[5][51];
	float notas[5][3], media;
	
	setlocale(LC_ALL, "portuguese");
	
	  for (i=0;i<5; i++)
	  {
		  printf("Digite o nome do %i° aluno: ",i+1);
		  scanf("%s", &nomes[i]);
		  
		  printf("Digite a 1° nota: ");
		  scanf("%f", &notas[i][0]);
		  printf("Digite a 2° nota: ");
		  scanf("%f", &notas[i][1]);
		  printf("Digite a 3° nota: ");
		  scanf("%f", &notas[i][2]);
	  }
	  
	  printf("\n Média dos alunos:\n");
	  	  for(i=0;i<5;i++) 
			{
				media = (notas[i][0] + notas[i][1] + notas[i][2]) / 3;
				printf("Aluno: %s %.2f\n", nomes[i], media);
			}
	return 0;
}