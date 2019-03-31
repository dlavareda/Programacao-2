int numerosPares(int v[], int n){
    if (n==0){
        return 0;
    }
    if ((v[n-1])%2 == 0){
        return 1+ numerosPares(x,n-1);
    }else
    {
        return numerosPares(x, n-1);
    }
    
    
}