#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()

{

float p,h,resultado;//p=peso e h=altura
char sexo;//VARIAVEL DE SEXO M OU F


    printf("Digite sua altura:\n");
    scanf("%f",&h);

    printf("Digite seu peso:\n");
    scanf("%f",&p);

    printf("Digite seu sexo [F] ou [M]:\n");//use letras maiusculas para funcionar
    scanf("%s",&sexo);

if(sexo == 'M')
{
    resultado = ((72.7*h) - 58);

}

else if (sexo == 'F')
{

    resultado = ((62.1*h) - 44.7);
}
    printf("O seu peso ideal e de: %f\n ", resultado);

return 0;
}
