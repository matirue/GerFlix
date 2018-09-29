
#include "Usuario_Serie.h"


#define LIBRE 0
#define OCUPADO 1
/******************************************************************************************************************/
void USU_SER_listarSerieConUsuarios (eUsuario usuarios[], int tamUsuario, eSerie series[], int tamSeries)
{
     int i, j;
     printf("\n SERIE       USUARIO\n");
     for(i=0;i<tamSeries;i++)
        {
            if(series[i].estado==OCUPADO)
                {
                    printf(" %3s ",series[i].nombre);

                    for(j=0;j<tamUsuario;j++)
                       {
                           if( (usuarios[j].estado==OCUPADO) && (usuarios[j].idSerie==series[i].idSerie) )
                              {
                                 printf("\t %10s    \n", usuarios[j].nombre);
                              }
                       }
                }
        }
}
/******************************************************************************************************************/
int menu_ABM ()
{
    int opcion;
    printf(":::::::::::::::::::::MENU:::::::::::::::::::::\n");
    printf("1-ALTA\n2-BAJA\n3-MODIFICAR\n4-LISTAR(MENU)\n5-SALIR\n");
    opcion=getValidInt("\n  Elija una opcion:  ","\n\n ERROR. Operacion invalida. ", 1, 5);
    return opcion;

}

