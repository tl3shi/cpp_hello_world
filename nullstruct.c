#include <stdio.h>
#include <stdlib.h>

struct A
{
}a;

struct B
{
}b[10];


struct A1 { int a;};
struct A2: virtual A1{ int b;};
struct A3: virtual A2{ };

void test()
{
    printf("%lu\n", sizeof(A1));
    printf("%lu\n", sizeof(A2));
    printf("%lu\n", sizeof(A3));
}
int main()
{
    test();
    return 0;
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
