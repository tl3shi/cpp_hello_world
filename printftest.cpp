#include <stdio.h>
void printftest()
{
    printf("%f\n", 1);
    printf("%d\n", 6.01);
}

int main()
{
    printf("%s,%d\n", "helloworld", 100);
    printf("%s,\0%d\n", "helloworld", 200);
    printf("%s,%d\n", "hello\0world", 300);
    printf("%s,%c,%d\n", "helloworld", '\0',400);
    return 0;
}
