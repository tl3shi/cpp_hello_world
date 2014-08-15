#include <stdio.h>
#include <setjmp.h>

//在执行到longjmp时，程序没有继续执行了，而是直接从setjmp处执行，setjmp的返回值是longjmp的第二个参数
int main(int argc, char** argv)
{
    jmp_buf ex_buf;
    int except_type = setjmp(ex_buf);
    if(except_type == 0)//try, first time return 0
    {
        printf("try statement 1....\n");
        //longjmp(ex_buf, 1);//throw exception 1
        printf("try statement 2...\n");
        longjmp(ex_buf, 2);//throw exception 1
        printf("miss this statement\n");
    }else if(except_type == 1)//catch, 
    {
        printf("catch exception %d\n", except_type);
    }else 
    {
        printf("catch exception %d\n", except_type);
    }
    return 0;
}
