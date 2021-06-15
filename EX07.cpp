#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int num1, num2, num3;
    
    printf("\nDigite o primeiro número: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo número: ");
    scanf("%d", &num2);
    printf("\nDigite o terceiro número: ");
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
