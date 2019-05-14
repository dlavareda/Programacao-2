NOTAS *LerVetoresNotas(char *nomeFich, int *n)
{
    NOTAS *x, aux;
    FILE *f;
    f = fopen(nomeFich, "r");
    *n = 0;
    x = (NOTAS *)malloc(sizeof(NOTAS));
    while (fscanf(f, "%d %d", &(aux.numero), &(aux.notafinal)) == 2)
    {
        *n = *n + 1;
        x = (NOTAS *)realloc(x, (*n) * sizeof(NOTAS));
        x[*n - 1] = aux;
    }
    fclose(f);
    return x;
}
void trocar_notas(NOTAS *A, NOTAS *B)
{
    NOTAS Aux;
    Aux = *A;
    *A = *B;
    *B = Aux;
}
void MostrarVectorNotas(NOTAS *x, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d -> %d\n", x[i].numero, x[i].notafinal);
    }
    printf("\n");
}
int DeterminarPosicaoPivot(NOTAS *x, int inicio, int fim)
{
    int i, k = inicio;
    for (i = inicio+1; i <= fim; i++)
    {
        if (x[i].notafinal < x[inicio].notafinal)
        {
            k++;
            trocar_notas(&(x[i]), &(x[k]));
        }
    }
    trocar_notas(&(x[inicio]), &(x[k]));

    return k;
}
void OrdenarQuickSort_NOTAS(NOTAS *x, int inicio, int fim)
{
    int k;
    if (inicio < fim)
    {
        {
            k = DeterminarPosicaoPivot(x, inicio, fim);
            OrdenarQuickSort_NOTAS(x, inicio, k - 1);
            OrdenarQuickSort_NOTAS(x, k + 1, fim);
        }
    }
}

void ConstruirVectorNOtas(NOTAS *v, int n, NOTAS **NEG, int *NN, NOTAS **POS, int *NP){
    int i,k;
    OrdenarQuickSort_NOTAS(v, 0, n-1);
    k = 0;
    while (k<n && v[k].notafinal<10)
    {
        k++;
    }
    *NN = k;
    *NP = n-k;
    *NEG = (NOTAS *)malloc((*NN)*sizeof(NOTAS));
    *POS = (NOTAS *)malloc((*NP)*sizeof(NOTAS));
    for (i = 0; i < k; i++)
    {
        (*NEG)[i] = v[i];
    }
    for (i = k; i < n; i++)
    {
        (*POS)[i-k]=v[i];
    }
    
    
    
}