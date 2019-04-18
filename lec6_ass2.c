#include <stdio.h>

void main(void)
{
    int x = 10, y = 12, z = 16;
    int *p, *q, *r;
    int *temp;
    p = &x;
    q = &y;
    r = &z;

    printf("%d \n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    printf("%d\n", p);
    printf("%d\n", q);
    printf("%d\n", r);
    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *r);

    temp = r;
    r = p;
    p = q;
    q = temp;

    printf("%d \n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    printf("%d\n", p);
    printf("%d\n", q);
    printf("%d\n", r);
    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *r);
}