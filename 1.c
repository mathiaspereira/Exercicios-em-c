#include <stdio.h>
#include <math.h>

int main()
{
    float numero; //variaveis
    float resultado;

        printf("\nDigite o numero: ");
        scanf("%f",&numero);

    if(numero >= 0){
        resultado = sqrt(numero);// sqrt numero para pegar a raiz quadrada
        printf("\nA raiz quadrada e:%f ",resultado);
    }
    else{
        printf("Numero Invalido");//se o numero for negatico mensagen de invalido
    }

    return 0;
}
