#include <stdio.h>
#include <stdlib.h>
#include "estructura.h"
#include "raza.h"
#include "inPut.h"
#include "MascotaRaza.h"

#define CAN_MASCOTAS 10
#define CAN_RAZA 4

int main()
{
    eMascotas listMascota[CAN_MASCOTAS];
    eRaza listRaza[CAN_RAZA];
    inicializarVacio(listMascota,CAN_MASCOTAS);
    harcodearEstructura(listMascota);
    harcodearAnidada(listRaza);

    //mostrarTodasRazas(listRaza,CAN_RAZA);
    //mostrarEstructura(listMascota,CAN_MASCOTAS);

    //mostrarUnaRazaMascota(listMascota[0],listRaza[0]);

    //add(list,A);
    //mostrarEstructura(list,A);
    //remover(list,A);

    char opcion;

    do
    {
        printf("1)Listado de mascotas con sus razas y paises de origen.\n");
        printf("2)Borrado logico.\n");
        printf("3)listado de mascotas ordenadas por pais de origen.\n");
        printf("4) \n");
        printf("5) \n");
        printf("6) \n");
        printf("7) Salir\n");

        printf("Debe elegir una opcion a realizar: ");
        fflush(stdin);
        scanf("%c", &opcion);


        switch (opcion)
        {
        case '1':
            mostrarMascotaRaza(listMascota,CAN_MASCOTAS,listRaza,CAN_RAZA);
            break;

        case '2':
            remover(listMascota,CAN_MASCOTAS);
            break;

        case '3':
            MostrarOrdenarPorPais(listMascota,CAN_MASCOTAS,listRaza,CAN_RAZA);
            break;

        case '4':
            break;

        case '5':
            break;

        case '6':
            break;

        case '7':
            break;

        default:
            printf("Error. Ha ingresado una opcion erronea!\n\n");
        }

        system("pause");
        system("cls");
    }
    while (opcion!='7');

    return 0;
}
