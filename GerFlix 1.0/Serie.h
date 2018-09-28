typedef struct
{
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;
}eSerie;

void serie_inicializarEstado(eSerie [], int);
void serie_inicializarHardCode(eSerie []);
void mostrarListaSeries(eSerie [], int);

/*
void serie_listar (eSerie [], int );
void serie_mostrar (eSerie );
*/
