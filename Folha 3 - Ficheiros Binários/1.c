#include <stdio.h>
#include <stdlib.h>
int main()
{
	//a)
	int num;
	FILE *ft, *fb, *fb2;
	ft = fopen("/home/dlavareda/Documents/Programação 2/Folha 3 - Ficheiros Binários/Inteiros.txt", "r");
	fb = fopen("/home/dlavareda/Documents/Programação 2/Folha 3 - Ficheiros Binários/Inteiros.bin", "wb");
	while (fscanf(ft, "%d", &num) == 1)
	{
		fwrite(&num, sizeof(int), 1, fb);
	}
	fclose(ft);
	fclose(fb);
	//b)
	fb = fopen("/home/dlavareda/Documents/Programação 2/Folha 3 - Ficheiros Binários/Inteiros.bin", "rb");
	printf("Inteiros.bin\n");
	while (fread(&num, sizeof(int), 1, fb) == 1)
	{
		printf("%d ", num);
	}
	printf("\n");
	fclose(fb);

	//c)
	fb = fopen("/home/dlavareda/Documents/Programação 2/Folha 3 - Ficheiros Binários/Inteiros.bin", "rb");
	fb2 = fopen("/home/dlavareda/Documents/Programação 2/Folha 3 - Ficheiros Binários/InteirosPositivos.bin", "wb");
	while (fread(&num, sizeof(int), 1, fb) == 1)
	{
		if (num > 0)
		{
			fwrite(&num, sizeof(int), 1, fb2);
		}
	}
	fclose(fb);
	fclose(fb2);

	//d)
	fb2 = fopen("/home/dlavareda/Documents/Programação 2/Folha 3 - Ficheiros Binários/InteirosPositivos.bin", "rb");
	printf("Inteiros Positivos.bin\n");
	while (fread(&num, sizeof(int), 1, fb2) == 1)
	{
		printf("%d ", num);
	}
	printf("\n");
	fclose(fb2);
	return 1;
}
