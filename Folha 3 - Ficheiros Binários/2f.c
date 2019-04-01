#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int numCC;       // Número de Cartão de Cidadão (único)
    int dataNasc[3]; // Data de nascimento no formato dia/mês/ano (ex: 21/5/1985)
    float altura;    // Altura em metros (ex: 1.85)
    int peso;        // Peso em Kg (ex: 76)
} PESSOA;


int main()
{
    //le o ficheiro
    FILE *f;
    FILE *fb;
    PESSOA p, pb;
    f = fopen("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 3 - Ficheiros Binários/pessoas.txt", "r");
    fb = fopen("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 3 - Ficheiros Binários/pessoas.bin", "wb");
	if	(f == NULL){
		printf("falha");
        return -1;
	}
    while (fscanf(f, "%d%d%d%d%f%d", &p.numCC, &p.dataNasc[0], &p.dataNasc[1], &p.dataNasc[2], &p.altura, &p.peso) == 6)
    {
        printf("NUmero CC = %d\n", p.numCC);
        printf("Data nascimento =  %d-%d-%d\n", p.dataNasc[0], p.dataNasc[1], p.dataNasc[2]); 
        printf("Altura = %f\n", p.altura);
        printf("Peso = %d\n", p.peso);  
        printf("\n");
        fwrite(&p.numCC, sizeof(int), 1, fb);
        fwrite(&p.dataNasc[0], sizeof(int), 1, fb);
        fwrite(&p.dataNasc[1], sizeof(int), 1, fb);
        fwrite(&p.dataNasc[2], sizeof(int), 1, fb);
        fwrite(&p.altura, sizeof(float), 1, fb );
        fwrite(&p.peso, sizeof(int), 1, fb);
    }
    
    close(f);
	fclose(fb);

    //mostrar dados pessoas.bin
    fb = fopen("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 3 - Ficheiros Binários/pessoas.bin", "rb");
    if	(f == NULL){
		printf("falha");
        return -1;
	}
     printf("FIcheiro Binário\n");
    while (fread(&pb, sizeof(PESSOA), 1, fb))
	{
       
		printf("Num CC = %d\n", pb.numCC);
        printf("Data nascimento =  %d-%d-%d\n", pb.dataNasc[0], pb.dataNasc[1], pb.dataNasc[2]); 
        printf("Altura = %f\n", pb.altura);
        printf("Peso = %d\n", pb.peso);  
        printf("\n");
	}

	printf("\n");
	fclose(fb);
}




/*
em que para a data 21/5/1985, dataNasc[0] = 21, dataNasc[1] = 5 e dataNasc[2] = 1985.
Construa um programa de C que realize as seguintes ações:
a) Crie o ficheiro binário “Pessoas.bin” a partir dos dados contidos no ficheiro de texto
“Pessoas.txt” (página web da disciplina), o qual é composto apenas por registos
(estruturas) do tipo “PESSOA”;
b) Mostre os dados contidos no dado ficheiro binário “Pessoas.bin”.
c) A partir dos dados contidos no ficheiro binário “Pessoas.bin” crie o ficheiro binário
“Datas.bin” com os Números de Cartão de Cidadão (numCC) e o Peso (peso) de todas
as pessoas nascidas num dado Ano e que pesem mais que um dado Peso. O Ano e o
Peso devem ser pedidos ao utilizador e inseridos por este.
Nota: Não pode usar vetores e deve usar a função fseek (para além de outras que achar
necessárias), e deve ler o mínimo de informação possível para atingir o objetivo proposto.*/