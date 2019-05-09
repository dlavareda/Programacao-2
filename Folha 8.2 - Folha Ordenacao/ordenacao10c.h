NOTAS *LerVetoresNotas(char *nomeFich, int *n){
    NOTAS *x, aux;
    FILE *f;
    f = fopen(nomeFich, "r");
    *n = 0;
    x = (NOTAS *) malloc(sizeof(NOTAS));
    while(fscanf(f, "%d %d", &(aux.numero), &(aux.notafinal)==2)){
        *n = *n + 1;
        x = (NOTAS *)realloc(x, (*n)*sizeof(NOTAS));
        x[*n-1] = aux;
    }
    fclose(f);
    return x;
}

void MostrarVectorNotas(NOTAS *x, int n){
    int i;
    for(i = 0; i < n; i++)
    {
       printf("%d -> %d\n", x[i].numero, x[i].notafinal);
    }
    printf("\n");
}