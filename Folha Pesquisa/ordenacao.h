/*int *lerVetorInteiros(char *nomefich, int *n){
	FILE *f;
	int *v, num;
	f = fopen(nomefich, "r");
	v = (int *) malloc (sizeof(int));
	*n = 0;
	while(fscanf(f, "%d", &num)==1){
		*n = (*n)+1;
		v = (int *) realloc (v, (*n)*sizeof(int));
		v[*n-1]=num;
	}
	fclose(f);
	return v;
}

void ordenarBubblesort_Dec(int v[], int n){
	int k, kk, fim=n-1, aux;
	do{
		kk=0;
		for(k=0; k<fim; k++){
			if(v[k]<v[k+1]){
				aux=v[k];
				v[k]=v[k+1];
				v[k+1]= aux;
				kk=k;
			}
		}
		fim = kk;
	}while(kk!=0);
}

void MostrarVetorInteiros (int v[], int n)
{
   int k;
   for (k = 0; k < n; k++)
      printf("%d  ", v[k]);
   printf("\n\n");   
}

int fusao(int v[], int inicio, int meio, int fim){
	int esq, dir, k, i;
	int aux[fim-inicio+1];
	esq = inicio;
	dir = meio + 1;
	k=0; //k=tamanho de aux
	while(esq<=meio && dir<=fim){
		if(v[esq]<v[dir]){
			aux[k]=v[esq];
			esq++;
		}
		else{//v[esq]>=v[dir]
			aux[k]=v[dir];
			dir++;
		}
		k++;
	}
	if(esq>meio){
		for(i=dir; i<=fim; i++){
			aux[k]=v[i];
			k++;
		}
	}
	else{ //dir > fim
		for(i=esq; i<=meio;i++){
			aux[k]=v[i];
			k++;
		}
	}
	//aux esta construido, passar aux para v
	
	for(i=0;i<k; i++){
		v[inicio+i]=aux[i];
	}
	//ou
	/*for(i=inicio; i<=fim; i++){
		v[i]=aux[]
}
*/
void ordenarfusao(int v[], int inicio, int fim)
{
	int meio;
	if (inicio < fim)
	{
		meio = (inicio + fim) / 2;
		ordenarfusao(v, inicio, meio);
		ordenarfusao(v, meio + 1, fim);
		fusao(v, inicio, meio, fim);
	}
}

//Para Estruturas, o que se muda � onde esta num para o que queremos, por exemplo numero, nota... Para ordenar os dois(numero e nota) em simultaneo temos de fazer na mesma funcoes diferentes para cada campo
//Se fossem vetores do tipo float era tudo igual so mudava o cabecalho
int fusaonum(ALUNO v[], int inicio, int meio, int fim)
{
	int esq, dir, k, i;
	ALUNO aux[fim - inicio + 1];
	esq = inicio;
	dir = meio + 1;
	k = 0; //k=tamanho de aux
	while (esq <= meio && dir <= fim)
	{
		if (v[esq].num < v[dir].num)
		{
			aux[k] = v[esq];
			esq++;
		}
		else
		{ //v[esq]>=v[dir]
			aux[k] = v[dir];
			dir++;
		}
		k++;
	}
	if (esq > meio)
	{
		for (i = dir; i <= fim; i++)
		{
			aux[k] = v[i];
			k++;
		}
	}
	else
	{ //dir > fim
		for (i = esq; i <= meio; i++)
		{
			aux[k] = v[i];
			k++;
		}
	}
	//aux esta construido, passar aux para v

	for (i = 0; i < k; i++)
	{
		v[inicio + i] = aux[i];
	}
	//ou
	/*for(i=inicio; i<=fim; i++){
		v[i]=aux[]*/
}

void ordenarfusaonum(ALUNO v[], int inicio, int fim)
{
	int meio;
	if (inicio < fim)
	{
		meio = (inicio + fim) / 2;
		ordenarfusao(v, inicio, meio);
		ordenarfusao(v, meio + 1, fim);
		fusao(v, inicio, meio, fim);
	}
}

//10.c

NOTAS *LerVetoresNotas(char *nomeFich, int *n)
{
	NOTAS *x, aux;
	FILE *f;
	f = fopen(nomeFich, "r");
	*n = 0;
	x = (NOTAS *)malloc(sizeof(NOTAS));
	while (fscanf(f, "%d %d", &(aux.numero), &(aux.notafinal) == 2))
	{
		*n = *n + 1;
		x = (NOTAS *)realloc(x, (*n) * sizeof(NOTAS));
		x[*n - 1] = aux;
	}
	fclose(f);
	return x;
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