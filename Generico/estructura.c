#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructura.h"
#include "inPut.h"

void inicializarVacio(eMascotas list[], int len)
{
    int i;

        for (i=0; i<len; i++)
        {
            list[i].isEmpty = 0;
        }
}

void harcodearEstructura (eMascotas list[])
{
    int id[5] = {1,2,3,4,5};
    char nombre[5][50] = {"michi","muz","negro","pirulo","lila"};
    int edad[5]={10,5,2,15,9};
    char sexo[5]={'f','m','m','m','f'};
    char tipo[5][10]={"Gato","Gato","Perro","Perro","Perro"};
    int idRaza[5]={100,200,300,300,400};

    int i;
    for (i=0; i<5; i++)
    {
        list[i].id = id[i];
        strcpy (list[i].nombre, nombre[i]);
        list[i].edad=edad[i];
        list[i].sexo=sexo[i];
        strcpy(list[i].tipo,tipo[i]);
        list[i].idRaza=idRaza[i];
        list[i].isEmpty = 1; // OCUPADO.
    }
}

int buscarLugar(eMascotas list[], int len)
{
    int indice = -1;
    int i;

    for (i=0; i<len; i++)
    {
        if (list[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
int BuscarId(eMascotas list[], int len, int id)
{
    for(int i=0; i<len; i++)
    {
        if(list[i].isEmpty==1 && list[i].id==id)
        {
            return i;
        }
    }

    return -1;
}

void mostrarUno(eMascotas list)
{
    printf("%5d%10s%10s%10d%10c\n", list.id, list.nombre, list.tipo, list.edad, list.sexo);
}

void mostrarEstructura(eMascotas list[], int len)
{
    int i;
    printf("\n\n%5s%10s%10s%10s%10s\n","ID","NOMBRE","TIPO","EDAD","SEXO");
    for(i=0; i<len; i++)
    {
        if (list[i].isEmpty == 1)
        {
            mostrarUno(list[i]);
        }

    }
}

int autoIncrementalID(eMascotas list[], int len)
{
    int retorno = 0;
    int i;
    if(len > 0 && list != NULL)
    {
        for(i=0; i<len; i++)
        {
            if(list[i].isEmpty == 1)
            {
                if(list[i].id > retorno)
                {
                    retorno = list[i].id;
                }
            }
        }
    }
    return retorno+1;
}
/*
void add(eMascotas list[],int len)
{
    int i;
    int id;

    char auxiliarSalario[50];
    char auxiliarSector[50];


    i = buscarLugar(list,len);
    id = autoIncrementalID(list,len);

    if(i>=0)
    {
        //pedir el nombre
        printf("Ingrese el nombre del empleado:");
        fflush(stdin);
        gets(list[i].name);

        while(esSoloLetras(list[i].name)==0)
        {
            printf("Usted ha ingresado un tipo de nombre incorrecto. Ingrese nuevamente: ");
            fflush(stdin);
            gets(list[i].name);
        }

        stringToUpper(list[i].name); // LLAMADA A LA FUNCION PARA 1ER LETRA MAYUSCULA.


        //Pedir el apellido
        printf("Ingrese el apellido del empleado:");
        fflush(stdin);
        gets(list[i].lastName);

        //Validar que se haya pedido el apellido.

                while(esSoloLetras(list[i].lastName)==0)
                {
                    printf("Usted ha ingresado un tipo de apellido incorrecto. Ingrese nuevamente: ");
                    fflush(stdin);
                    gets(list[i].lastName);
                }
                stringToUpper(list[i].lastName); // LLAMADA A LA FUNCION PARA 1ER LETRA MAYUSCULA.


        //Pedir un SALARIO
        printf("Ingrese el salario del empleado: ");
        fflush(stdin);
        gets(auxiliarSalario);
        //Validar que se haya ingresado un SALARIO correcto.

                while(esNumericoFloat(auxiliarSalario)==0)
                {
                    printf("Usted ha ingresado un tipo de salario incorrecto. Ingrese nuevamente: ");
                    fflush(stdin);
                    gets(auxiliarSalario);
                }

        list[i].salary=atof(auxiliarSalario);


        //Pedir un SECTOR
        printf("Ingrese el SECTOR del empleado: ");
        fflush(stdin);
        gets(auxiliarSector);
        //Validar que se haya ingresado un PUESTO correcto.

                while(esNumerico(auxiliarSector)==0)
                {
                    printf("Usted ha ingresado un tipo de puesto incorrecto. Ingrese nuevamente: ");
                    fflush(stdin);
                    gets(auxiliarSector);
                }

        list[i].sector=atoi(auxiliarSector);


        list[i].isEmpty=1;
        list[i].id=id;


    }
    else
    {
        printf("\nNo hay mas lugar!\n\n");
    }

}
*/
int remover(eMascotas list[], int len)
{
    int i;

    char auxiliarID[50];
    int scanID;

    int opcion;

    int estado = -1; // No se encontro ID

    mostrarEstructura(list, len);


    printf("Ingrese la ID del Mascota a remover: ");
    fflush(stdin);
    gets(auxiliarID);
    while(esNumerico(auxiliarID)==0)
    {
        printf("Usted ha ingresado un tipo de ID incorrecta. Ingrese nuevamente: ");
        fflush(stdin);
        gets(auxiliarID);
    }
    scanID=atoi(auxiliarID);


    for(i=0; i<len; i++)
    {
        if(scanID==list[i].id)
        {
            printf("\nDesea dar de baja el Mascota? Ingrese 1 para SI // Ingrese 2 para NO.\n");
            scanf("%d",&opcion);

            switch(opcion)
            {
            case 1:
                list[i].isEmpty = 0;
                list[i].id= 0;
                estado = 0; // Se modifico el empleado.
                break;

            case 2:
                estado = -2; // Se cancelo la baja.
                break;

            default:
                printf("\n\nUsted ingreso una opcion invalida. Vuelva a intentarlo nuevamente.\n");
                estado = -2;
                break;
            }

        }

    }

    return estado;
}


