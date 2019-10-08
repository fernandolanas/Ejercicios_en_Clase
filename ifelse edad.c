/******************************************************************************

                        

*******************************************************************************/

#include <stdio.h>

void main()
{
    int edad = 0;
    char nombre[10];
    printf("Ingrese nombre");
    scanf("%s",nombre);
    printf("Ingrese la edad:");
    scanf("%d",&edad);
    
    if(edad>=18)
    
        printf("%s es mayor de edad",nombre);
        
    else
    
        printf("%s es menor de edad",nombre);
    
}
