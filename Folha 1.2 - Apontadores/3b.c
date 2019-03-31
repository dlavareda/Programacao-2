#include <stdio.h>
main ( ) {
int v[5] = { 10, 20, 30, 40, 50 };
int *p, i;
p = v;
for (i = 1; i < 5; i++)
printf ("%d ", p[i]);

printf ("\n&v[0] = %p - %d\n", &v[0]);
printf ("&p[0] = %p - %d\n", &p[0]);
printf ("v = %p - %d\n", v);
printf ("p = %p - %d\n", p);
}
