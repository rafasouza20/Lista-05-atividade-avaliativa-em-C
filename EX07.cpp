#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int num1, num2, num3;
    
    printf("\nDigite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo n�mero: ");
    scanf("%d", &num2);
    printf("\nDigite o terceiro n�mero: ");
    scanf("%d", &num3);


	if((num1>num2)and(num1>num3)){
		printf("Ordem Crescente:\n");
		printf("%d\n", num3);
		printf("%d\n", num2);
		printf("%d\n", num1);
	}
	else if((num2>num3)and(num2>num1)){
		printf("Ordem Crescente:\n");
		printf("%d\n", num3);
		printf("%d\n", num1);
		printf("%d\n", num2);
	}
	else if((num3>num1)and(num3>num2)){
		printf("Ordem Crescente:\n");
		printf("%d\n", num1);
		printf("%d\n", num2);
		printf("%d\n", num3);
	}
	
	
	return 0;
}
