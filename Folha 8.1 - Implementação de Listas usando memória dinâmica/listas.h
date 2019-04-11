ALUNO *CriarElemento()
{
    ALUNO *A;
    A = (ALUNO *)malloc(sizeof(ALUNO));
    printf("Qual o número do Aluno? ");
    scanf("%d", &((*A).numAluno));
    //ou scanf("%d", &(A->numALuno));
    printf("Qual a nota de FT? ");
    scanf("%f",  &(A->notaFT));
    printf("Qual a nota de Frequencia? ");
    scanf("%f",  &(A->notaFreq));
    return A;
}
ALUNO *CriarLista(int *n){
    ALUNO *L, *E;
    E = CriarElemento();
    L = (ALUNO *)malloc(sizeof(ALUNO));
    L[0] = *E;
    *n = 1;
    free(E);
    return L;
}

void MostrarLista(ALUNO *L, int N){
    int i;
    for (i = 0; i < N; i++){
        printf("O numero de aluno: %d\n", L[i].numAluno);
        printf("Nota FT: %f\n", L[i].notaFT);
        printf("Nota Frequencia: %f\n", L[i].notaFreq);
    }
}