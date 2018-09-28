#include <string.h>

#include "Serie.h"
#define LIBRE 0
#define OCUPADO 1
/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void serie_inicializarEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = LIBRE;
    }
}


void serie_inicializarHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};
    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = OCUPADO;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}

void serie_listar (eSerie series[], int tam)
{
    int i;
    printf("\n\n    ID   \t   TITULO   \t   GENERO   \t    NUMERO DE TEMPORADAS ");
    for(i=0;i<tam;i++)
        {
            if(series[i].estado==OCUPADO)
                {
                    serie_mostrar(series[i]);
                }
        }
}

void serie_mostrar (eSerie series)
{
    printf("\n  %d   \t   %s   \t   %s   \t   %d   ",series.idSerie, series.nombre, series.genero, series.cantidadTemporadas);
}




