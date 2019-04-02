


/*
3. Considere que dispõe de ficheiros binários (página web da disciplina) cujo conteúdo é
constituído por uma ou mais estruturas do tipo “Registo” definido da seguinte forma:
typedef struct {
int ref;
float var;
int tm;
} Registo;
A informação constante dos ficheiros representa medições de uma dada experiência de
laboratório. O campo ref representa o número de referência da medição, var e tm os valores
medidos em duas variáveis da experiência. 
Implementar um programa em C que realize as seguintes ações:
a) leia os dados de um dos ficheiros de texto e os guarde num ficheiro binário;
b) determine a média dos valores de cada uma das variáveis da experiência;
c) determine a medição com o melhor (menor) coeficiente de aproximação, sendo este
dado pela expressão:
1 + ((var - mvar) / mvar) + ((tm - mtm) / mtm)
em que mvar e mtm representam as médias calculadas anteriormente e que se
assume serem diferentes de zero;
d) mostre as médias calculadas e os dados da medição com o melhor coeficiente de
aproximação./*