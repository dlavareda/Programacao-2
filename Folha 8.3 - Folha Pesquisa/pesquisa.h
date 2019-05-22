int PesquisaExaustiva(int Elem, int V[], int N)
{
    int k = 0;
    while ((k < N) && (Elem != V[k]))
        k = k + 1;
    if (k == N)
        return -1;
    else
        return k;
}
int PesquisaSequencial(int Elem, int V[], int N)
{
    int k = 0;
    while ((k < N) && (V[k] < Elem))
        k = k + 1;
    if ((k < N) && (Elem == V[k]))
        return k;
    else
        return -1;
}
int PesquisaBinaria(int Elem, int V[], int N)
{
    int inicio = 0, fim = N – 1, meio, pos = -1;
    while ((inicio <= fim) && (pos == -1))
    {
        meio = (inicio + fim) / 2;
        if (Elem == V[meio])
            pos = meio;
        else if (Elem < V[meio])
            fim = meio - 1;
        else
            inicio = meio + 1;
    }
    return pos;
}
int PesquisaBinariaRec(int Elem, int V[], int inicio, int fim)
{
    int meio;
    if (inicio > fim)
        return -1; // Elem não está em V
    meio = (inicio + fim) / 2;
    if (Elem == V[meio])
        return meio; // Elem está na posição meio
    if (Elem < V[meio])
        return PesquisaBinariaRec(Elem, V, inicio, meio - 1);
    else
        return PesquisaBinariaRec(Elem, V, meio + 1, fim);
}