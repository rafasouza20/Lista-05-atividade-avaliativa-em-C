#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int num1, num2, num3;
    
    system("color E");
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("\n");
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    printf("\n");
    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);
    
    system("cls");
    
    if((num1>num2)and(num1>num3)){
    printf("\nO maior valor é o primeiro número digitado: %d", num1);
}
	else if((num2>num1)and(num2>num3)){
    printf("\nO maior valor é o segundo número digitado: %d", num2);
}
	else if((num3>num2)and(num3>num1)){
    printf("\nO maior valor é o terceiro número digitado: %d", num3);
}
	
	return 0;
}
