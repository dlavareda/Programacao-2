int *LerVectorInteiros(char *nomefich, int *n)
{
    FILE *f;
    int *v, num;
    f = fopen(nomefich, "r");
    v = (int *)malloc(sizeof(int));
    *n = 0;
    while (fscanf(f, "%d", &num) == 1)
    {
        *n = *n + 1;
        v = (int *)realloc(v, (*n) * sizeof(int));
        v[*n - 1] = num;
    }
    fclose(f);
    return v;
}

void OrdenarBubbleSort_Dec(int v[], int n)
{
    int k, kk, fim = n - 1, aux;
    do
    {
        kk = 0;
        for (k = 0; k < fim; k++)
        {
            if (v[k] < v[k + 1])
            {
                aux = v[k];
                v[k] = v[k + 1];
                v[k + 1] = aux;
                kk = k;
            }
        }
        fim = kk;
    } while (kk != 0);
}

void MostrarVetorInteiros(int V[], int N)
{
    int k;
    for (k = 0; k < N; k++)
    {
        printf("%d  ", V[k]);
    }
    printf("\n");
}