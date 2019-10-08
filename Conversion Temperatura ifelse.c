/******************************************************************************

                            Realizar un programa que permita
                            convertir de grados Centigrados a Farenheit
                            o viceversa

*******************************************************************************/

#include <stdio.h>
#include <math.h>

void main()
{
    float cent,fahr, gradoscent = 0, gradosfahr = 0;
    int op;
    printf("Menu Principal \n1.Grados Centigrados a Fahrenheit \n2.Grados Fahrenheit a Centigrados\n");
    printf("Escoja la opcion:");
    scanf("%d", &op);
    
    if(op==1){
     printf("Ingrese los grados Centigrados:");
    scanf("%f",&cent);
      gradoscent = (fahr - 32)*0.5555; 
      printf("Grados centigrados %.2f\n", gradoscent);
    }
    else{
        printf("Ingrese los grados Farenheit:");
    scanf("%f",&fahr);
    
    
    gradosfahr = (cent*1.8) + 32;
    
    printf("Grados Farenheit %.2f", gradosfahr);
   
        
    }
    
     
    
}
