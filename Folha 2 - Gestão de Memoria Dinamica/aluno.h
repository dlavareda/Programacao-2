typedef struct{
	int numero;
	int ano;
	char curso[30];
	float media;
}ALUNO;

ALUNO *copiaAluno(ALUNO *A){
	ALUNO *B;
	B= (ALUNO*)malloc(sizeof(ALUNO));
	if(B==NULL)
		return NULL;
	*B = *A;
	/*(*B).numero=(*A).numero;
	(*B).ano=(*A).ano;
	strcpy((*B).curso,(*A).curso);
	(*B).media=(*A).media*/
	return B;//ou return &(*B);//
}


void AcrescentarAlunoFicheiro(ALUNO *A, char *nomefich){
	FILE *f;
	f = fopen(nomefich, "a");
	if (f != NULL){
	fprintf(f, "%d\n", A->numero); //A->Numero = (*A).Numero;
	fprintf(f, "%d\n", A->ano); 
	fprintf(f, "%s\n", A->curso); 
	fprintf(f, "%f\n", A->media); 
	}
	fclose(f);
}
