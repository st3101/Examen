#include "MascotaRaza.h"
#include "raza.h"
#include "estructura.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructura.h"
#include "inPut.h"


void mostrarUnaRazaMascota(eMascotas listMascota,eRaza listRaza)
{
    printf("%5d%10s%10s%10d%10c%15s%12s \n", listMascota.id, listMascota.nombre, listMascota.tipo, listMascota.edad, listMascota.sexo, listRaza.descripcion, listRaza.pais);
}


void mostrarMascotaRaza(eMascotas listMacota[],int lenMascota,eRaza listRaza[],int lenRaza)
{
    int i;
    int j;

    printf("%5s%10s%10s%10s%10s%15s%12s\n\n","ID","NOMBRE","TIPO","EDAD","SEXO","DESCRIPCION","PAIS");
    for(i=0;i<lenMascota;i++)
    {
        j=buscarIgualdad(listRaza,lenRaza,listMacota[i].idRaza);


        if(listMacota[i].isEmpty==1)
        {
           mostrarUnaRazaMascota(listMacota[i],listRaza[j]);
        }

    }

}

int buscarIgualdad(eRaza listRaza[],int lenRaza,int idRaza)
{
    int i;
    for(i=0;i<lenRaza;i++)
    {
        if(idRaza==listRaza[i].idRaza)
        {
            return i;
        }
    }
    return -1;
}

void MostrarOrdenarPorPais(eMascotas listMascotas[],int lenMascotas,eRaza listRaza[],int lenRaza)
{
    int i;
    int j;



    eMascotas AuxMascotas;
    eRaza auxRazaI;
    eRaza auxRazaj;

        for(i=0; i<lenMascotas-1; i++)
        {
            auxRazaI=buscarIgualdad(listRaza,lenRaza,listRaza[i].idRaza);

            for(j=i+1; j<lenMascotas; j++)
            {

|                auxRazaj=buscarIgualdad(listRaza,lenRaza,listRaza[i].idRaza);

                if(strcmp(auxRazaI.pais,auxRazaj.pais))
                {
                    AuxMascotas=listMascotas[i];
                    listMascotas[i]=listMascotas[j];
                    listMascotas[j]=AuxMascotas;
                }

            }
        }

    mostrarMascotaRaza(listMascotas,lenMascotas,listRaza,lenRaza);
}









