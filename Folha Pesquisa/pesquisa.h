int PesquisaBinariaRec(int elem, int v[], int inicio, int fim)
{
    int meio;
    if (inicio > fim)
    {
        return -1; //Elemento nao existe em V
    }
    meio = (inicio + fim) / 2;
    if (elem == v[meio])
    {
        return meio;
    }
    if (elem < v[meio])
    {
        return PesquisaBinariaRec(elem, v, meio + 1, fim);
    }
    else
    {
        return PesquisaBinariaRec(elem, v, inicio, meio - 1);
    }
}