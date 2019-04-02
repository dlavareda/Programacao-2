#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *f;

    f = fopen("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 3 - Ficheiros Binários/tarefa.txt", "r");
     if (f == NULL)
    {
        printf("falha");
        return -1;
    }
    while (fscanf(f, "%d%d%d%d%f%d", &p.numCC, &p.dataNasc[0], &p.dataNasc[1], &p.dataNasc[2], &p.altura, &p.peso) == 6)
    {
        printf("NUmero CC = %d\n", p.numCC);
        printf("Data nascimento =  %d-%d-%d\n", p.dataNasc[0], p.dataNasc[1], p.dataNasc[2]);
        printf("Altura = %f\n", p.altura);
        printf("Peso = %d\n", p.peso);
        printf("\n");
        fwrite(&p, sizeof(PESSOA), 1, fb);
    }

    close(f);
    fclose(fb);

}
/*4. Suponha que as linhas do ficheiro “tarefas.txt” (página web da disciplina) contêm a
designação de uma tarefa realizada durante um mês, seguida de quantos trabalhadores
estiveram envolvidos nessa tarefa em cada um dos dias úteis do mês. Um valor negativo
significa que a tarefa foi terminada. Exemplo:
Polimento 0 1 2 2 1 3 2 -1
significa que a tarefa Polimento envolveu 0 trabalhadores no 1º dia útil do mês, 1 no 2ª dia
útil, etc., e terminou no 8º dia útil. Escrever um programa que:
a) leia os dados do ficheiro de texto e os guarde no ficheiro binário “tarefas.bin”
b) leia do ficheiro binário e calcule:
- qual o dia em que se trabalharam mais tarefas;
- qual o dia em que se terminaram mais tarefas;
- qual a tarefa que ocupou mais trabalhadores.*/