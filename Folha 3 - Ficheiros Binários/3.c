
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

    fb = fopen("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 3 - Ficheiros Binários/registos.bin", "rb");
    float varaux;
    int tmaux, refaux;
    float mediavar, mediat, *var;
    int *tm, *ref;
    var = malloc(sizeof(float));
    tm = malloc(sizeof(int));
    ref = malloc(sizeof(int));
    int i = 1;

    mediavar = 0;
    mediat = 0;
    while (fread(&refaux, sizeof(int), 1, fb) == 1)
    {
        fread(&varaux, sizeof(float), 1, fb); //le o var e posiciona-se no tm
        fread(&tmaux, sizeof(int), 1, fb);    //le o TM e posiciona-se no proximo ref
        ref = realloc(ref, (i) * sizeof(int));
        ref[i - 1] = refaux;
        var = realloc(var, (i) * sizeof(float));
        var[i - 1] = varaux;
        tm = realloc(tm, (i) * sizeof(float));
        tm[i - 1] = tmaux;
        mediavar = mediavar + varaux;
        mediat = mediat + tmaux;
        printf("REF = %d\n", ref[i - 1]);
        printf("VAR = %f\n", var[i - 1]);
        printf("TM = %d\n", tm[i - 1]);
        i++;
    }
    mediavar = mediavar / i;
    mediat = mediat / i;

    fclose(fb);
    float melhorcaprox = 0;
    float caprox = 0;
    int melhor_i=0;
    for (int ii = 0; ii < i; ii++)
    {
        caprox = (1 + ((var[ii] - mediavar) / mediavar) + ((tm[ii] - mediat) / mediat));
        if (caprox > melhorcaprox)
        {
            melhorcaprox = caprox;
            melhor_i = ii;
        }
    }
    printf("\n");
    printf("Media Var = %f\n", mediavar);
    printf("Media TM = %f\n", mediat);
    printf("MELHOR CAPROX = %f\n", melhorcaprox);
    printf("MEDIÇÃO COM O MELHOR CAPROX = %d\n", ref[melhor_i]);
    printf("VAR MELHOR MEDICAO = %f\n", var[melhor_i]);
    printf("TM MELHOR MEDIÇÃO = %d\n", tm[melhor_i]);
}