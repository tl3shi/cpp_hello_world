#include <stdio.h>
#include <stdlib.h>

struct A
{
}a;

struct B
{
}b[10];

int main()
{
    struct A a1;
    printf("%lu\n", sizeof(a));
    printf("%lu\n", sizeof(a1));
    printf("%lu\n", sizeof(struct A));
    printf("%lu\n", sizeof(b));
    printf("%lu\n", &b[0]);
    printf("%lu\n", &b[1]);
    printf("%lu\n", sizeof(struct B));
    return 0;
}
