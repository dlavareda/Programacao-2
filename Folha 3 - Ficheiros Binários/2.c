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
    FILE *fbp;
    PESSOA p, pb;
    f = fopen("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 3 - Ficheiros Binários/pessoas.txt", "r");
    fb = fopen("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 3 - Ficheiros Binários/pessoas.bin", "wb");
    if (f == NULL)
    {
        printf("falha");
        return -1;
    }
    printf("FICHEIRO PESSOAS.TXT\n");
    while (fscanf(f, "%d%d%d%d%f%d", &p.numCC, &p.dataNasc[0], &p.dataNasc[1], &p.dataNasc[2], &p.altura, &p.peso) == 6)
    {
        printf("NUmero CC = %d\n", p.numCC);
        printf("Data nascimento =  %d-%d-%d\n", p.dataNasc[0], p.dataNasc[1], p.dataNasc[2]);
        printf("Altura = %f\n", p.altura);
        printf("Peso = %d\n", p.peso);
        printf("\n");
        fwrite(&p, sizeof(PESSOA), 1, fb);
    }

    fclose(f);
    fclose(fb);

    //mostrar dados pessoas.bin
    fb = fopen("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 3 - Ficheiros Binários/pessoas.bin", "rb");
    if (fb == NULL)
    {
        printf("falha");
        return -1;
    }
    printf("FICHEIRO BINARIO\n");
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
    int pos, numccfb;
    fseek(fb, 3 * sizeof(int), SEEK_SET);          // coloca-se no primeiro ano
    while (fread(&anofb, sizeof(int), 1, fb) == 1) //Le o ano e passa para o proximo (altura)
    {
        fseek(fb, sizeof(float), SEEK_CUR); //Salta a altura e coloca-se no peso
        fread(&pesofb, sizeof(int), 1, fb); //Le o peso e coloca-se no CC do proximo registo
        if (anofb == ano && pesofb > peso)
        {
            fseek(fb, -1 * sizeof(int), SEEK_CUR);   //retrocede para o peso
            fseek(fb, -1 * sizeof(float), SEEK_CUR); //retrocede para a altura
            fseek(fb, -4 * sizeof(int), SEEK_CUR);   //retrocede para o NUmCC
            fread(&numccfb, sizeof(int), 1, fb);     //Le o CC e coloca-se no dia de nascimento
            fseek(fb, 2 * sizeof(int), SEEK_CUR);    //coloca-se no ano
            fseek(fb, sizeof(float), SEEK_CUR);      //coloca-se no peso
            fseek(fb, 5 * sizeof(int), SEEK_CUR);    //coloca-se no ano do proximo registo

            printf("NUm CC = %d\n", numccfb);
            printf("PEso = %d\n", pesofb);
            fwrite(&numccfb, sizeof(int), 1, fbp);
            fwrite(&pesofb, sizeof(int), 1, fbp);
        }
        else
        {
            fseek(fb, 3 * sizeof(int), SEEK_CUR); //coloca-se no ano do proximo registo
        }
    }
    fclose(fb);
    fclose(fbp);

    //teste
    printf("\nFICHEIRO DATAS.BIN\n");
    fbp = fopen("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 3 - Ficheiros Binários/datas.bin", "rb");
    while (fread(&numccfb, sizeof(int), 1, fbp))
    {
        fread(&pesofb, sizeof(int), 1, fbp);
        printf("Num CC = %d\n", numccfb);
        printf("Peso = %d\n", pesofb);
        printf("\n");
    }
    fclose(fbp);
}