
int indice_maior(int *x, int n){
    int k;
    if (n == 1){
        return 0;//x[O] é o maior elemento
    }
    k = indice_maior(x, n-1);
    if (x[n-1] > x[k]){
        return n-1;
    }else
    {
       return k;
        
    }
}

int *LerVectorInteirosFicheiro(char *nomeFich, int *n){
    int *x, aux;
    FILE *f;
    f = fopen(nomeFich,"r");
    *n = 0;
    x = (int *) malloc(0*sizeof(int));
    while(fscanf(f, "%d", &aux)==1){
        *n = (*n)+1;
        x = (int*) realloc(x, (*n)*sizeof(int));
        x[(*n)-1] = aux;
    }
    close(f);
    return (x);
}

float *LerVectorFloatFicheiro(char *nomeFich, int *n){
    float *x, aux;
    FILE *f;
    f = fopen(nomeFich,"r");
    *n = 0;
    x = (int *) malloc(0*sizeof(float));
    while(fscanf(f, "%f", &aux)==1){
        *n = (*n)+1;
        x = (int*) realloc(x, (*n)*sizeof(float));
        x[(*n)-1] = aux;
    }
    fclose(f);
    return (x);
}

float media(float x[], int n, int k){
if (n == 1){
    return x[0]/k;
}else{
    return media(x, n-1, k)+ x[n-1]/k;
}
}

float media2(float x[], int n, int k, float soma){
    if (n==1){
        return (soma+x[0])/k;
    }else{
        return media2(x, n-1, k, soma+x[n-1]);
    }
}