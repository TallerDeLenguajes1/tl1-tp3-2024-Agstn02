#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define ANIO 5
#define MES 12

void cargar_prod( float prod[ANIO][MES]);
void mostrar_prod(float prod[ANIO][MES]);
void promedio(float prod[ANIO][MES]);
void min_max(float prod[ANIO][MES]);

void main(){

    float produccion[ANIO][MES];

//Cargar el arrreglo
    cargar_prod(produccion);
//Mostrar el arrreglo
    mostrar_prod(produccion);
//Calcular y mostrar promedio
    promedio(produccion);
//Encontrar min y max
    min_max(produccion);
}

void cargar_prod( float prod[ANIO][MES]){
    srand(time(NULL));
    for (int i = 0; i < ANIO; i++)
    {
        for (int j = 0; j < MES; j++)
        {
            prod[i][j] =  (float)(rand() % 4000001 + 1000000) / 100 ; // Sin la division no muestra los dos decimales.
        }
    }
}

void mostrar_prod(float prod[ANIO][MES]){
    for (int i = 0; i < ANIO; i++)
    {
        for (int j = 0; j < MES; j++)
        {
            printf("[%.2f]-", prod[i][j]);
        }
        printf("\n");
    }   
}
void promedio(float prod[ANIO][MES]){


    for (int i = 0; i < ANIO; i++)
    {
        float total = 0;

        for (int j = 0; j < MES; j++)
        {
            total = total + prod[i][j];
        }
        
        total = total / (MES);
        printf("\n---- PROMEDIO AÑO %d : %.2f ----", i+1 , total);
    }

}
void min_max(float prod[ANIO][MES]){
    float min_val = 50001, max_val = 10000;
    int min_mes , min_anio, max_mes, max_anio;

    for (int i = 0; i < ANIO; i++)
    {
        for (int j = 0; j < MES; j++)
        {
            if (prod[i][j] < min_val)
            {
                min_val = prod[i][j];
                min_anio = i + 1;
                min_mes = j + 1;
            }
            if (prod[i][j] > max_val)
            {
                max_val = prod[i][j];
                max_anio = i + 1;
                max_mes = j + 1;
            }
        }
    }

    printf("\nValor mínimo : %.2f obtenido en el mes %d del año %d", min_val, min_mes , min_anio); 
    printf("\nValor máximo : %.2f obtenido en el mes %d del año %d", max_val, max_mes , max_anio); 

}