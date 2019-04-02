
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int ref;
    float var;
    int tm;
} REGISTO;

int main()
{
    //passar para bin.
    FILE *f;
    FILE *fb;
    REGISTO r;
    f = fopen("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 3 - Ficheiros Binários/registos.txt", "r");
    fb = fopen("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 3 - Ficheiros Binários/registos.bin", "wb");
    if (f == NULL)
    {
        printf("falha");
        return -1;
    }
    printf("FICHEIRO REGISTOS.TXT\n");
    while (fscanf(f, "%d%f%d", &r.ref, &r.var, &r.tm) == 3)
    {
        printf("Referencia = %d\n", r.ref);
        printf("VAR = %f\n", r.var);
        printf("TM = %d\n", r.tm);
        printf("\n");
        fwrite(&r, sizeof(REGISTO), 1, fb);
    }

    fclose(f);
    fclose(fb);

    //B ,C e D
    float var;
    int tm;
    float media;
    fb = fopen("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 3 - Ficheiros Binários/registos.bin", "rb");
    fseek(fb, sizeof(int), SEEK_SET); //posiciona-se no 1º var
    while (fread(&var, sizeof(float), 1, fb) == 1)
    {                                    //le o var e posiciona-se no tm
        fread(&tm, sizeof(int), 1, fb);  //le o TM e posiciona-se no proximo ref
        fseek(fb, sizeof(int), SEEK_CUR); // avança até ao proximo var
        media = (tm+var)/2;
        printf("Media = %f\n", media);
    }
    fclose(fb);
}

/*
b) determine a média dos valores de cada uma das variáveis da experiência;
c) determine a medição com o melhor (menor) coeficiente de aproximação, sendo este
dado pela expressão:
1 + ((var - mvar) / mvar) + ((tm - mtm) / mtm)
em que mvar e mtm representam as médias calculadas anteriormente e que se
assume serem diferentes de zero;
d) mostre as médias calculadas e os dados da medição com o melhor coeficiente de
aproximação.*/