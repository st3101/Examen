#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "inPut.h"


// ---------------- GETS ----------------
int getInt (char mensaje[])
{
    int auxiliarInt;
    printf("%s", mensaje);
    scanf("%d", &auxiliarInt);
    return auxiliarInt;
}


char getChar (char mensaje[])
{
    char auxiliarChar;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%s", &auxiliarChar);
    return auxiliarChar;
}


float getFloat(char mensaje[])
{
    float auxiliarFloat;
    printf("%s", mensaje);
    scanf("%f", &auxiliarFloat);
    return auxiliarFloat;
}


void getString(char mensaje[], char input[])
{
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%s", input);

}

int getIntMinMax(int min,int max,char pregunta[])
{
    char auxInt[51];

    while(!(getStringNumeros(pregunta,auxInt)))
    {
        printf("Error, ");
    }

    while(intMixMan(auxInt,min,max))
    {
        printf("Error, ");
            while(!(getStringNumeros(pregunta,auxInt)))
        {
            printf("Error, ");
        }
    }

    return atoi(auxInt);
}

float getFloatMinMax(float min,float max,char pregunta[])
{

    char auxFloat[51];

    while(!(getStringNumerosFloat(pregunta,auxFloat)))
    {
        printf("Error,");
    }

    while(floatMinMax(auxFloat,min,max))
    {
        printf("Error, ");
            while(!(getStringNumerosFloat(pregunta,auxFloat)))
        {
            printf("Error, ");
        }
    }



    return atof(auxFloat);
}


// ---------------- VALIDACIONES ----------------
void stringToUpper(char caracter[])
{
    int i;
    int largo;
    caracter[0]=toupper(caracter[0]);
    largo=strlen(caracter);
    for(i=0;i<largo;i++)
    {
        if(caracter[i]==' ')
        {
            i=i+1;
            caracter[i]=toupper(caracter[i]);
        }
    }
}



int esNumerico (char str[])
{

    int i=0;
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return 0;
        }
       i++;
    }
    return 1;
}



int esTelefono(char str[])
{
    int i=0;
    int contadorGuiones = 0;
    while (str[i] != '\0')
    {
        if ((str[i] != ' ') && (str[i] != '-') && (str[i] < '0' || str[i] > '9'))
            {
             return 0;
            }
        if (str[i] == '-')
        {
            contadorGuiones++;
        }

        i++;
    }
    if (contadorGuiones==1)
        return 1;
        return 0;
}



int esSoloLetras(char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] <  'a' || str [i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
        {
           return 0;
        }
        i++;
    }

    return 1;
}



int esAlfaNumerico(char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] <  'a' || str [i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
        {
           return 0;
        }

        i++;
    }
    return 1;
}

int esNumericoFloat(char str[])
{
    int i=0;

    while(str[i] != '\0')
    {
        if((str[i] != '.') && (str[i] < '0' || str[i] > '9'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int intMixMan(char str[],int min,int max)
{
    int aux = atoi(str);

    if(aux<min || aux>max)
    {
        return 1;
    }

    return 0;
}
int floatMinMax(char str[], int min, int max)
{
    float aux = atof(str);

    if(aux<min || aux>max)
    {
        return 1;
    }

    return 0;
}

int getStringLetras(char mensaje[], char input[])
{
    char auxiliar[256];
    getString(mensaje, auxiliar);
    if(esSoloLetras(auxiliar))
    {
        strcpy(input, auxiliar);
        return 1;
    }

    return 0;
}



int getStringNumeros(char mensaje[], char input[])
{
    char auxiliar[256];

    getString(mensaje, auxiliar);

    if(esNumerico(auxiliar))
    {
        strcpy(input, auxiliar);
        return 1;
    }

    return 0;
}
int getStringNumerosFloat(char pregunta[],char input[])
{
    char auxiliar[256];

    getString(pregunta,auxiliar);

    if(esNumericoFloat(auxiliar))
    {
        strcpy(input,auxiliar);
        return 1;
    }

    return 0;
}


int getAlfaNumerico(char mensaje[], char input[])
{
    char auxiliar[256];
    getString(mensaje, auxiliar);
    if(esAlfaNumerico(auxiliar))
    {
        strcpy(input,auxiliar);
        return 1;
    }
    return 0;
}


