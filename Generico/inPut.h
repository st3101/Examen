#ifndef INPUT_H_INCLUDED
#define INPUT_H_INCLUDED

// --------------------------- GETS ----------------------------
int getInt (char mensaje[]);
float getFloat (char mensaje[]);
char getChar(char mensaje[]);
int getIntMinMax(int min,int max,char pregunta[]);
float getFloatMinMax(float min,float max,char pregunta[]);
void getString(char mensaje[], char input[]);

// -------------------------------------- VALIDACIONES --------------------------------------

void stringToUpper(char caracter[]);
int esNumerico (char str[]);
int esTelefono (char str[]);
int esSoloLetras (char str[]);
int esAlfaNumerico (char str[]);
int esNumericoFloat(char str[]);
int getStringLetras(char mensaje[], char input[]);
int getStringNumeros(char mensaje[], char input[]);
int getStringNumerosFloat(char pregunta[],char input[]);
int getAlfaNumerico(char mensaje[], char input[]);
int intMixMan(char str[],int min, int max);
int floatMinMax(char str[],int min, int max);



#endif // INPUT_H_INCLUDED
