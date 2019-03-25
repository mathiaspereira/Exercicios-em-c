#include<stdio.h>

int main(){
	int a,b,c,d,e;//variaveis 1,2,3...

	printf("Digite o 1 numero:\n");
	scanf("%d",&a);
	printf("Digite o 2 numero:\n");
	scanf("%d",&b);
	printf("Digite o 3 numero:\n");
	scanf("%d",&c);
	printf("Digite o 4 numero:\n");
	scanf("%d",&d);
	printf("Digite o 5 numero:\n");
	scanf("%d",&e);

	if(a>b && a>c && a>d && a>e){
		printf("O maior numero e: %d\n",a);
	}
	else if(b>a && b>c && b>d && b>e){
		printf("O maior numero e: %d\n",b);
    }
	else if(c>a && c>b && c>d && c>e){
		printf("O maior numero e: %d\n",c);
	}
	else if(d>a && d>b && d>c && d>e){
		printf("O maior numero e: %d\n",d);
	}
	else if(e>a && e>b && e>c && e>d){
		printf("O maior numero e: %d\n",e);
	}

	//MAIOR EM CIMA E MENOR EM BAIXO

	if(a<b && a<c && a<d && a<e){
		printf("O menor numero e: %d\n",a);
	}
	else if(b<a && b<c && b<d && b<e){
		printf("O menor numero e: %d\n",b);
    }
	else if(c<a && c<b && c<d && c<e){
		printf("O menor numero e: %d\n",c);
	}
	else if(d<a && d<b && d<c && d<e){
		printf("O menor numero e: %d\n",d);
	}
	else if(e<a && e<b && e<c && e<d){
		printf("O menor numero e: %d\n",e);
	}
	return 0;
	}
