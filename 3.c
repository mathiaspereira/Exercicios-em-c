#include <stdio.h>

int main(void){

int a, b, aux;
    printf("Escreva dois valores que voce queira:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d - %d\n", a, b);
    aux = a;
    a = b;
    b = aux;
    printf("%d - %d\n", a, b);
return 0;
  }
