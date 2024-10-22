#include <stdio.h>
int callByReference(int *a, int *b);
int main()
{
    int a = 10, b = 20;
    int *p = &a, *q = &b;
    printf("p = %d q= %d\n", *p, *q);
    printf("p = %p q= %p\n", p, q);
    callByReference(p, q);
    printf("p = %d q= %d\n", *p, *q);
}
int callByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}