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
    int h;


    eMascotas AuxMascotas;
mostrarMascotaRaza(listMascotas,lenMascotas,listRaza,lenRaza);

    for(i=0;i<lenMascotas;i++)
    {





        for(h=i+1;h<lenRaza+1;h++)
        {


                printf("%s y %s \n",listRaza[i].pais,listRaza[h].pais);
                printf("%d y %d \n",i,h);


            if((listRaza[i].pais[0]<listRaza[h].pais[0])>=0&&listRaza[h].isEmpty==1&&listRaza[i].isEmpty==1)
            {
                printf("ENTR0\n");
                AuxMascotas=listMascotas[i];
                listMascotas[i]=listMascotas[h];
                listMascotas[h]=AuxMascotas;
            }
        }

    }

    mostrarMascotaRaza(listMascotas,lenMascotas,listRaza,lenRaza);
}








