#include "Usuario.h"

#define LIBRE 0
#define OCUPADO 1

void ususario_inicializarEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = LIBRE;
    }
}

void usuario_inicializarHardCode(eUsuario usuarios[])
{
    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};
    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};
    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = OCUPADO;
        strcpy(usuarios[i].nombre, nombre[i]);
    }
}


void usuario_mostrarLista(eUsuario usuarios[], int tam)
{
    int i;
    printf("\n\n    ID USUARIO   \t   NOMBRE   \t   ID SERIE   ");
    for(i=0;i<tam;i++)
        {
            if(usuarios[i].estado==OCUPADO)
                {
                    usuario_mostrar(usuarios[i]);
                }
        }
}

void usuario_mostrar (eUsuario usuarios)
{
    printf("\n  %9d   \t   %13s   \t   %6d   ",usuarios.idUsuario,usuarios.nombre,usuarios.idSerie);
}

void usuario_mostrarConSuSerie(eUsuario usuarios[], int tamUsuario, eSerie series[], int tamSerie)
{
    int i,j;
    printf("\n\n    ID USUARIO   \t   NOMBRE USUARIO   \t   NOMBRE SERIE   ");
    for(i=0;i<tamUsuario;i++)
        {
            if(usuarios[i].estado==OCUPADO)
                {
                    for(j=0;j<tamSerie;j++)
                        {
                            if(series[j].estado==OCUPADO && (usuarios[i].idSerie==series[j].idSerie))
                                {
                                    usuario_mostrarUsuarioSerie(usuarios[i],series[j]);
                                }
                        }
                }
        }
}

void usuario_mostrarUsuarioSerie (eUsuario usuario, eSerie serie)
{
    printf("\n  %9d   \t   %13s   \t   %13s",usuario.idUsuario,usuario.nombre, serie.nombre);
}
