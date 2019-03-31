#include <stdio.h>

int maior_indicemaior(float x[], float *maior){
    int pos = 0;
    *maior = x[0];
    for(int i = 1; i < 9; i++)
    {
        if (*maior < x[i]) {
           *maior = x[i];
           pos = i;
        }
    }
    return pos;
}

int main(){
float v[10];
float maior;
int pos;
v[0] = 2.5;
v[1] = 52.9;
v[2] = 7.1;
v[3] = 3.6;
v[4] = 2.9;
v[5] = 8.1;
v[6] = 12.0;
v[7] = 2.1;
v[8] = 60.3;
v[9] = 2.7;
pos = maior_indicemaior(&v, &maior);
printf("Posição = %d\n", pos);
printf("Maior = %f\n", maior);
}