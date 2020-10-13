#ifndef RAZA_H_INCLUDED
#define RAZA_H_INCLUDED

typedef struct
{
    char descripcion[51];
    char tamanio[21];
    char pais[51];
    int idRaza;
    int isEmpty;

}eRaza;

void harcodearAnidada(eRaza list[]);
void mostrarUnaRaza(eRaza list);
void mostrarTodasRazas(eRaza list[],int len);

#endif // RAZA_H_INCLUDED
