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
    if (f == NULL)
    {
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
        fwrite(&p, sizeof(PESSOA), 1, fb);
    }

    close(f);
    fclose(fb);

    //mostrar dados pessoas.bin
    fb = fopen("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 3 - Ficheiros Binários/pessoas.bin", "rb");
    if (fb == NULL)
    {
        printf("falha");
        return -1;
    }
    printf("FIcheiro BInário\n");
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
    //c
    FILE *fbp;
    fb = fopen("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 3 - Ficheiros Binários/pessoas.bin", "rb");
    fbp = fopen("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 3 - Ficheiros Binários/datas.bin", "wb");
    if (fb == NULL || fbp == NULL)
    {
        printf("falha");
        return -1;
    }
    int ano, peso;
    int anofb, pesofb;
    printf("Introduza o ano\n");
    scanf("%d", &ano);
    printf("Introduza o Peso\n");
    scanf("%d", &peso);
    int pos;
    fseek(fb, 3 * sizeof(int), SEEK_CUR);
    fread(&anofb, sizeof(int), 1, fb);
    fseek(fb, 1 * sizeof(int), SEEK_CUR);
    fread(&pesofb, sizeof(int), 1, fb);
    if (anofb == ano && pesofb > peso)
    {
        printf("%d\n", anofb);
        printf("%d\n", pesofb);
    }
    fclose(fb);
    fclose(fbp);
}

/*
c) A partir dos dados contidos no ficheiro binário “Pessoas.bin” crie o ficheiro binário
“Datas.bin” com os Números de Cartão de Cidadão (numCC) e o Peso (peso) de todas
as pessoas nascidas num dado Ano e que pesem mais que um dado Peso. O Ano e o
Peso devem ser pedidos ao utilizador e inseridos por este.
Nota: Não pode usar vetores e deve usar a função fseek (para além de outras que achar
necessárias), e deve ler o mínimo de informação possível para atingir o objetivo proposto.*/