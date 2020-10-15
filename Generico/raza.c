#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructura.h"
#include "inPut.h"
#include "raza.h"

void harcodearAnidada(eRaza list[])
{

    int idRaza[4] = {100,200,300,400};
    char descripcion[4][50] = {"doberman","pastor","siames","persa"};
    char tamanio[4][50]={"grande","grande","chico","mediano"};
    char pais[4][50]={"Alemaia","Belgica","Tailandia","Persia"};

    int i;

    for (i=0; i<4; i++)
    {
        list[i].idRaza = idRaza[i];
        strcpy (list[i].descripcion, descripcion[i]);
        strcpy(list[i].tamanio,tamanio[i]);
        strcpy(list[i].pais,pais[i]);
        list[i].isEmpty = 1; // OCUPADO.
    }

}

void mostrarUnaRaza(eRaza list)
{
    printf("%10d%15s%10s%12s\n", list.idRaza, list.descripcion, list.tamanio, list.pais);
}

void mostrarTodasRazas(eRaza list[],int len)
{
    int i;
    printf("\n\n%10s%15s%10s%12s\n","ID-RAZA","DESCRIPCION","TAMANIO","PAIS");
    for(i=0; i<len; i++)
    {
        if (list[i].isEmpty == 1)
        {
            mostrarUnaRaza(list[i]);
        }

    }
}

