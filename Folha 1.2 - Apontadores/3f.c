#include <stdio.h>
main()
{
	int v[5] = {10, 20, 30, 40, 50};
	int *p, i;
	p = v;
	for (i = 1; i < 5; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\nv[0] = %d\n", v[0]);
	printf("p[0] = %d\n", p[0]);
	printf("*v = %d\n", *v);
	printf("*p = %d\n", *p);

	printf("\nv[1] = %d\n", v[1]);
	printf("p[1] = %d\n", p[1]);
	printf("*v+1 = %d\n", *(v + 1));
	printf("*p+1 = %d\n", *(p + 1));

	printf("%d %d %d %d\n", v[1], p[1], *v + 1, *p + 1);
}
