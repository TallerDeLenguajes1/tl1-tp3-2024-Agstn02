#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){

    char **nombres;
    char buff[100];

    nombres = (char**) malloc(sizeof(char*)*5);

    printf("Ingrese 5 nombres:\n");
    for (int i = 0; i < 5; i++)
    {
        gets(buff);
        nombres[i] = (char*) malloc( sizeof(char) * strlen(buff));
        strcpy(nombres[i], buff);
        printf("Ingrese el siguiente nombre:\n");
    }

    printf("\n---------------\n");
    for (int j = 0; j < 5; j++)
    {
        puts(nombres[j]);
    }
    return 0;
}