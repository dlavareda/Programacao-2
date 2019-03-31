#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"
int main(){
	ALUNO A1, *A2;
	printf("Insira o numero: ");
	scanf("%d", &A1.numero);
	printf("Insira o ano: ");
	scanf("%d", &A1.ano);
	//fflush(stdin); stdin porque � do teclado
	printf("Insira o curso: ");
	scanf("%c"); 
	//em vez do fflush
	gets(A1.curso);//gets(&A1.curso[0]);
	printf("Insira a media: ");
	scanf("%f", &A1.media);
	
	A2=copiaAluno(&A1);
	
	if(A2==NULL)
		return 0;
	printf("%d - %d - %s - %f\n", (*A2).numero, (*A2).ano, A2->curso, A2->media);
	AcrescentarAlunoFicheiro(&A1, "/home/dlavareda/Documents/Programação 2/Folha 2 - Gestão de Memoria Dinamica/Matriculas.txt");
	return 1;
}
