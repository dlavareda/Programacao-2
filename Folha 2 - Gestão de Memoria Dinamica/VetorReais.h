float *lerVetor(int *n)
{
	float *v;
	int i;
	do
	{
		printf("Qual o tamanho do vetor: ");
		scanf("%d", &(*n)); // ou scanf("%d", n)
	} while (*n < 1);

	v = (float *)malloc((*n) * sizeof(float));

	if (v == NULL)
		return NULL;

	for (i = 0; i < *n; i++)
	{
		printf("Insira um real: ");
		scanf("%f", &v[i]);
	}
	return v; //ou entao return &v[o]
}

void escreverVetor(float *v, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("v[%d] = %f\n", i, v[i]);
	}
	printf("\n");
}

float *juntarVetores(float *v1, float *v2, int *n1, int *n2)
{
	int k, n;
	n = (*n1) + (*n2);
	v1 = (float *)realloc(v1, n * sizeof(float));
	if (v1 == NULL)
	{
		return NULL;
	}
	for (k = 0; k < *n2; k++)
	{
		v1[*n1 + k] = v2[k];
	}
	*n1 = n;
	return v1;
}

float *removerkelementos(float *v, int *n, int k)
{
	int i;

	for (i = k; i < *n; i++)
	{
		v[i - k] = v[i];
	}
	*n = *n - k;
	v = (float *)realloc(v, (*n) * sizeof(float));
	return v;
}

float *InserirElementos(float *Novos, int k, float *v, int *n)
{
	int i = 0;
	*n = *n + k;
	v = (float *)realloc(v, (*n) * sizeof(float));
	for (i = 1; i <= *n; i++)
	{
		v[*n - i] = v[*n - k - i];
	}
	for (i = 0; i < k; i++)
	{
		v[i] = Novos[i];
	}
}