#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char * error = "Error: ";
    char * msg = "Not enought memory.";
    char * buffer = (char*) malloc(strlen(error) + strlen(msg)+ 1);
    strcpy(buffer, error);
    char* result = strcat(buffer, msg);
    //char* result = strcat(error, msg);
    printf("%s\n", error);
    printf("%s\n", msg);
    printf("%s\n", result);
    return 0;
}

