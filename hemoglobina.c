/******************************************************************************

5. En un laboratorio de análisis clínico, un médico determina si una persona tiene anemia o no, lo cual depende de su nivel de hemoglobina en la sangre, de su edad y de su género. Si el nivel de hemoglobina que tiene una persona es menor que el rango que le corresponde, se determina su resultado como positivo y en caso contrario como negativo. La tabla en la que el medico se basa para obtener el resultado para sexo femenino es la siguiente:

EDAD        NIVEL HEMOGLOBINA
0 entre 1 mes                        entre 13 y 26 g%
> 1 y < = 6 meses                  entre 10 y 18 g%
> 6 y < = 12 meses                  entre 11 y 15 g%
> 1 y < = 5  años                        entre 11.5 y 15 g%
> 5 y < = 10 años                             entre 12.6 y 15.5 g%
> 10 y < = 15 años                           entre 13 y 15.5 g%
*******************************************************************************/
#include <stdio.h>

int main()
{
    int edad,op;
    float nivelhemo;
    
    printf("Menu principal \n1/ Edad en meses \n2.Edad en anios");
    printf("Escoja la opcion:");
    scanf("%d",&op);
    if(op==1){
        
        printf("Ingrese su edad:";
        scanf("%d",&edad);
        printf("Ingrese el nivel de HEMOGLOBINA:")
        scanf("%f",&nivelhemo);
        if(edad>=0 && edad<=1 && nivelhemo>=13 && nivelhemo<=26)
            printf("No tiene anemia");
        else if(edad>1 && edad<=6 && nivelhemo>=10 && nivelhemo<=18)
            printf("No tiene anemia");
        else if(edad>6 && edad<=12 && nivelhemo>=13 && nivelhemo<=15)
            printf("No tiene anemia");
        else 
            printf("Tiene anemia");
            
            
    }
       else{
           printf("Ingrese su edad:";
        scanf("%d",&edad);
        printf("Ingrese el nivel de HEMOGLOBINA:")
        scanf("%f&nivelhemo);
        if(edad>=1 && edad<=5 && nivelhemo>=11.5 && nivelhemo<=15)
            printf("No tiene anemia");
        else if(edad>5 && edad<=6 && nivelhemo>=10 && nivelhemo<=18)
            printf("No tiene anemia");
        else if(edad>6 && edad<=12 && nivelhemo>=13 && nivelhemo<=15)
            printf("No tiene anemia");
        else 
            printf("Tiene anemia");
           
       }
        
        
            
}
