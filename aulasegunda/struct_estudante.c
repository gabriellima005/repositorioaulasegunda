#include <stdio.h>
#include <string.h>

struct Estudante{
	char nome[50];
	int matricula;
	float nota1;
	float nota2;
	float media;
	int quantidade;
};

int main(){
	struct Estudante aluno;
	
	printf("Numero de alunos: ");
	scanf("%d", &aluno.quantidade);
	if (aluno.quantidade >= 50 || aluno.quantidade <= 0){
		printf("\nNumero Invalido. ");
	}
	else {
	
		for( int i = 0; i < aluno.quantidade; i++){
			
			printf("\n-----------------------------------------");
	
			printf("\nDigite seu nome: ");
			scanf("%s", &aluno.nome);
			
			printf("\nDigite seu rgm: ");
			scanf("%d", &aluno.matricula);
			
			printf("\nsua primeira nota: ");
			scanf ("%f", &aluno.nota1);
			
			printf("\nsua segunda nota: ");
			scanf("%f", &aluno.nota2);
			
			aluno.media= (aluno.nota1 + aluno.nota2) /2;
			
			printf("\nMedia do %s: %.2f \n", aluno.nome, aluno.media);
			
			if (aluno.media >= 6 ){
				printf("\nAprovado(a)! ");
			} else if (aluno.media > 4 && aluno.media < 6){
				printf("\nRecuperacao!");
			}else{
				printf("\nReprovado(a)!");
			}
		}
	}
	return 0;
}