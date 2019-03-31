#include <stdio.h>
int ListarFicheiro(char *);
typedef struct {
	int BI;
	float peso;
	int altura;
} IDENT;

main(){
	ListarFicheiro("/home/dlavareda/Documents/Programação 2/Folha 1.3 - Ficheiros de Texto/dados2.txt");
}

int ListarFicheiro(char *nomeFich){
	IDENT A; //A.BI, A.peso, A.altura
	FILE *f;
	f= fopen(nomeFich, "r");
	if	(f == NULL){
		return -1;
	}
	while (fscanf(f, "%d %f %d", &A.BI, &A.peso, &A.altura) == 3){
		printf("%d - %f - %d", A.BI, A.peso, A.altura);
		printf("\n");
	}
	fclose (f);
}
