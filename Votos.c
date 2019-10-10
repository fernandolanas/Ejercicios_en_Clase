/******************************************************************************

4. Los organizadores de un acto electoral solicitaron realizar un programa para manejar el conteo de votos. En la elección hay cinco candidatos, los cuales se representan con los valores comprendidos entre 1 y 5. El programa debe obtener el número de votos de cada candidato y el porcentaje que obtuvo respecto al total de los votantes. Se ingresa los votos  de manera desordenada, el final de ingreso de los votos se representa por un cero.
Ejemplo
 INGRESO DE VOTOS:
2 5 5 4 3 5 1 2 4 3 1 2 4 5 0
2 representa un voto para el candidato2
5 representa un voto para el candidato5
4 representa un voto para el candidato4

*******************************************************************************/
#include <stdio.h>

void main()
{
    int votos, cantv1=0, cantv2=0, cantv3=0, cantv4=0,cantv5=0, totalvotos=0;
    float porcv1=0, porcv2=0, porv3=0, prcv4=0,porcv5=0;
    
    printf("Ingrese su voto:");
    scanf("%d",&votos);

    if(votos==1)
        cantv1++;
    else if (votos==2)
        cantv2==2;
    else if(votos==3)
        cantv3++;
    else if (votos==4)
        cantv4==2;
    else if (votos==5)
        cantv5++;
    
     
     totalvotos = cantv1+cantv2+cantv3+cantv4+cantv5;   
     porcv1=(cantv1/totalvotos)*100;
     porcv2=(cantv2/totalvotos)*100;
     porcv3=(cantv3/totalvotos)*100;
     porcv4=(cantv4/totalvotos)*100;
     porcv5=(cantv5/totalvotos)*100;
    
    printf("Total de votos del candidato1 es: %d con un porcentaje de %.2f\n",cantv1,porcv1);
    printf("Total de votos del candidato1 es: %d con un porcentaje de %.2f\n",cantv2,porcv2);
    printf("Total de votos del candidato1 es: %d con un porcentaje de %.2f\n",cantv3,porcv3);
printf("Total de votos del candidato1 es: %d con un porcentaje de %.2f\n",cantv4,porcv4);
printf("Total de votos del candidato1 es: %d con un porcentaje de %.2f\n",cantv5,porcv5);

else 
        printf("Candidato invalido!");
}
