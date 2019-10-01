/******************************************************************************

Realizar un programa en C que permite determinar el area de un circulo

datos de entrada
real: radio, pi, area=0
proceso
escrivir ("ingrese")

*******************************************************************************/

#include <stdio.h> // difinicion de librerias
#define pi 3.1416 // define pi para no tenerlo como un caracter especial, una constante


void main() //void no retorna nada, dentro de los parentesis no puede ir absoultamente ningun valor
{
    float radio, area = 0;     //float para dar valores en decimales
    printf("Ingrese el radio:");
    scanf("%f", &radio);         // %f debe ir entre comillas para la sintaxis
    
    area = pi*radio*radio;   //proceso de ecuacion
    
    printf("El Area es: %.2f", area); // apartir del punto se coloca "%.2f" para dos decimales

    
}
