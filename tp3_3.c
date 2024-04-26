#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){

    char **nombres;
    char buff[100];
    int cantNombres;
    printf("Ingrese el numero de nombres a ingresar:\n");
    scanf("%d", &cantNombres);

    nombres = (char**) malloc(sizeof(char*) * cantNombres);

    printf("Ingrese %d nombres:\n", cantNombres);
    for (int i = 0; i < cantNombres; i++)
    {
        if (i == 0)
        {
            getchar();
        }
        gets(buff);
        nombres[i] = (char*) malloc( sizeof(char) * strlen(buff));
        strcpy(nombres[i], buff);
        printf("Ingrese el siguiente nombre:\n");
    }

    printf("\n---------------------------\n");
    for (int j = 0; j < cantNombres; j++)
    {
        printf("-");
        puts(nombres[j]);
    }
    return 0;
}