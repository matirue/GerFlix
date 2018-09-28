

#include "Usuario_Serie.h"

#define LIBRE 0
#define OCUPADO 1

void USU_SER_listarSerieConUsuarios (eUsuario usuarios[], int tamUsuario, eSerie series[], int tamSeries)
{
     int i, j;
     printf("\n NOMBRE DE LA SERIE    NOMBRE DEL USUARIO");
     for(i=0;i<tamSeries;i++)
        {
           for(j=0;j<tamUsuario;j++)
            {
                if(series[i].estado==OCUPADO && usuarios[j].estado==OCUPADO)
                    {
                        printf("\n %10s    \t     ", series[i].nombre);

                        if(series[i].idSerie==usuarios[j].idSerie)
                            {
                                printf("%13s", usuarios[j].nombre);
                            }
                    }
            }

        }


}


