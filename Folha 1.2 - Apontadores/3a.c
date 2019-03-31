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
}
