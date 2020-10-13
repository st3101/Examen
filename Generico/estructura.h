#ifndef ESTRUCTURA_H_INCLUDED
#define ESTRUCTURA_H_INCLUDED

typedef struct
{
    int id;
    char nombre[51];
    int edad;
    char sexo;
    char tipo[10];
    int isEmpty;
    int idRaza;

}eMascotas;

void inicializarVacio(eMascotas list[], int len);
void harcodearEstructura(eMascotas list[]);
int buscarLugar(eMascotas list[], int len);
int BuscarId(eMascotas list[], int len, int id);
void mostrarUno(eMascotas list);
void mostrarEstructura(eMascotas list[], int len);
int autoIncrementalID(eMascotas list[], int len);
void add(eMascotas list[],int len);
int remover(eMascotas list[],int len);


#endif // ESTRUCTURA_H_INCLUDED
