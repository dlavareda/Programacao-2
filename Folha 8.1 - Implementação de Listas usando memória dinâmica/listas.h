ALUNO *CriarElemento()
{
    ALUNO *A;
    A = (ALUNO *)malloc(sizeof(ALUNO));
    printf("Qual o número do Aluno? ");
    scanf("%d", &((*A).numAluno));
    //ou scanf("%d", &(A->numALuno));
    printf("Qual a nota de FT? ");
    scanf("%f", &(A->notaFT));
    printf("Qual a nota de Frequencia? ");
    scanf("%f", &(A->notaFreq));
    return A;
}
ALUNO *CriarLista(int *n)
{
    ALUNO *L, *E;
    E = CriarElemento();
    L = (ALUNO *)malloc(sizeof(ALUNO));
    L[0] = *E;
    *n = 1;
    free(E);
    return L;
}

void MostrarLista(ALUNO *L, int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        MostrarUmElemento(L[i]);
    }
}
void MostrarUmElemento(ALUNO A)
{
    printf("O numero de aluno: %d\n", A.numAluno);
    printf("Nota FT: %f\n", A.notaFT);
    printf("Nota Frequencia: %5.2f\n", A.notaFreq);
}
int PesquisarAluno(int chave, ALUNO *L, int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        if (L[i].numAluno == chave)
        {
            return 1;
        }
    }
    return 0;
}

ALUNO *InserirInicio(ALUNO A, ALUNO *L, int *N)
{
    int i;
    L = (ALUNO *)realloc(L, (*N + 1) * sizeof(ALUNO));
    for (i = *N; i > 0; i--)
    {
        L[i] = L[i - 1];
    }
    L[0] = A;
    *N = *N + 1;
    return L;
}

int PesquisaExaustiva(ALUNO X, ALUNO *L, int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        if (X.numAluno == L[i].numAluno)
        {
            return i; //Existe no indice i
        }
    }
    return -1; //não existe
}

ALUNO *Remover(ALUNO X, ALUNO *L, int *N)
{
    int i, pos;
    pos = PesquisaExaustiva(X, L, *N);
    if (pos >= 0)
    { // X existe em L
        for (i = 0; i < *N - 1; i++)
        {
            L[i] = L[i+1];
        }
        *N = *N - 1;
        L = (ALUNO *)realloc(L, (*N) * sizeof(ALUNO));
    }
    return L;
}