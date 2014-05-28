#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * gcc 4.5.3 
Error: Not enought memory.
ot enought memory.
Error: Not enought memory.
 *
 * vs 2012 default: error
 * xcode 5.0 default: error
 * mac gcc/g++ (Apple LLVM version 5.1 (clang-503.0.40) (based on LLVM 3.4svn)): error
 * gcc/g++ (rubenvb-4.7.2-release) 4.7.2, default:error
 */

char *
my_strcpy(char *s1, const char *s2)
{
    char *s = s1;
    while ((*s++ = *s2++) != 0)
        ;
    return (s1);
}

char *
my_strcat(char *s1, const char *s2)
{
    //my_strcpy(&s1[strlen(s1)], s2);
    char * s = s1;
    while(*s)
        s++; //find the end of s1
    while ((*s++ = *s2++) != 0)
        ;
    return s1;
}

int main()
{
    char * error = "Error: ";
    char * msg = "Not enought memory.";
    char * buffer = (char*) malloc(strlen(error) + strlen(msg)+ 1);
    /*
     strcpy(buffer, error);
     char* result = strcat(buffer, msg);
    */
     strcpy(buffer, error);
     char* result = my_strcat(buffer, msg);
    //char* result = strcat(error, msg);
    printf("%s\n", error);
    printf("%s\n", msg);
    printf("%s\n", result);
    return 0;
}

