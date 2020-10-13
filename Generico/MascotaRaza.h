#ifndef MASCOTARAZA_H_INCLUDED
#define MASCOTARAZA_H_INCLUDED
#include "raza.h"
#include "estructura.h"

void mostrarMascotaRaza(eMascotas listMascota[],int lenMascota,eRaza listRaza[],int lenRaza);
void mostrarUnaRazaMascota(eMascotas listMascota,eRaza listRaza);
int buscarIgualdad(eRaza listRaza[],int lenRaza,int idRaza);
void MostrarOrdenarPorPais(eMascotas listMascotas[],int lenMascotas,eRaza listRaza[],int lenRaza);

#endif // MASCOTARAZA_H_INCLUDED
