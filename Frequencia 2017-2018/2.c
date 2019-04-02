#include <stdio.h>
#include <string.h>
typedef struct {
int Num;
char Nome[80];
int NotaFinal;
} ALUNO;

void aprovados(ALUNO *a, int n){

}
void mostrarvetor(float *x, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%f ", x[i]);
	}
	printf("\n");
}
int lervector(ALUNO *a)
{
    int n;
    ALUNO aux;
    do
    {
        printf("Insira o tamanho do vector ");
        scanf("%d", &n);
    } while (n <= 0);
    a = realloc(a, n*sizeof(ALUNO));
    for(int i = 0; i < n; i++)
    {
        printf("Numero: ");
        scanf("%d", &aux.Num);
        printf("Nome: ");
        scanf("%c");
        gets(&aux.Nome);
        printf("Nota Final: ");
        scanf("%d", &aux.NotaFinal);
        a[i] = aux;
    }

    return n;
}
int main(){
int n;
ALUNO *a;

n = lervector(a);
aprovados(a, n);
mostrarvetor(a, n);

}

/*Considere a seguinte definição de um tipo estrutura:
typedef struct {
int Num;
char Nome[80];
int NotaFinal;
} ALUNO;
Usando memória dinâmica na manipulação dos vetores, implemente uma função que dados um vetor
de elementos do tipo ALUNO e o seu tamanho (parâmetros de entrada da função), construa e devolva
um outro vetor do mesmo tipo com apenas os elementos do vetor de entrada cujo campo NotaFinal
seja um valor superior ou igual a 10*/