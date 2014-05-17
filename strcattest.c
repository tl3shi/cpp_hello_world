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
 * mac gcc/g++ default: error
 * gcc/g++ (rubenvb-4.7.2-release) 4.7.2, default:error
 */
int main()
{
    char * error = "Error: ";
    char * msg = "Not enought memory.";
    char * buffer = (char*) malloc(strlen(error) + strlen(msg)+ 1);
    strcpy(buffer, error);
    //char* result = strcat(buffer, msg);
    char* result = strcat(error, msg);
    printf("%s\n", error);
    printf("%s\n", msg);
    printf("%s\n", result);
    return 0;
}

