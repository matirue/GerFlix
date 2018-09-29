#include <stdio.h>
#include <stdlib.h>


#include "Usuario_Serie.h"


#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    eSerie listaDeSerie[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    serie_inicializarEstado(listaDeSerie, TAMSERIE);
    serie_inicializarHardCode(listaDeSerie);

    ususario_inicializarEstado(listaDeUsuarios,TAMUSUARIO);
    usuario_inicializarHardCode(listaDeUsuarios);

/**  1. Mostrar el listado de series
//  2. Mostrar el listado de usuarios
//  3. Mostrar el listado de Usuarios con el nombre de la serie que ve
//  4. Mostrar por cada serie, el nombre de los usuarios que la ven.

    printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf(" 1. Mostrar el listado de series. \n");
    serie_listar(listaDeSerie, TAMSERIE);


    printf("\n\n\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("2. Mostrar el listado de usuarios.\n");
    usuario_mostrarLista(listaDeUsuarios, TAMUSUARIO);


    printf("\n\n\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("3. Mostrar el listado de Usuarios con el nombre de la serie que ven.\n");
    usuario_mostrarConSuSerie(listaDeUsuarios, TAMUSUARIO, listaDeSerie, TAMSERIE);


    printf("\n\n\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf(" 4. Mostrar por cada serie, el nombre de los usuarios que la ven. \n");
    USU_SER_listarSerieConUsuarios(listaDeUsuarios,TAMUSUARIO,listaDeSerie,TAMSERIE);
*/
    int i, salir=0;

    do{
        system("cls");
        //system("clear");

        switch(menu_ABM())
        {
        case 1:
            printf("\n 111111111\n");
            system("pause");

            break;

        case 2:
            printf("\n 222222222\n");
            break;

        case 3:
            printf("\n333333333\n");
            system("pause");

            break;

        case 4:
            printf("\n444444444\n");
            system("pause");

            break;

        case 5:
            printf("\nchau!!");
            system("pause");

            salir=1;
            break;
        }
    }while(salir!=1);

    printf("\n\n     FIIIIN!!!!!  \n\n");


    return 0;
}
