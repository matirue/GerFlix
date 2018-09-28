
#include "Serie.h"

typedef struct
{
    int idUsuario;
    char nombre[50];
    int idSerie;
    int estado;
}eUsuario;

void ususario_inicializarEstado(eUsuario [], int);
void usuario_inicializarHardCode(eUsuario []);
void usuario_mostrarLista(eUsuario [], int);
void usuario_mostrar (eUsuario );
void usuario_mostrarConSuSerie(eUsuario[], int, eSerie [], int);
void usuario_mostrarUsuarioSerie (eUsuario , eSerie );
