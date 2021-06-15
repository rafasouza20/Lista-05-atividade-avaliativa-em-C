#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    float porcent;
    float result;
	int option;
	
	system("color E");
	
	printf("|calcular o percentual digitado do valor 555.|");
	
	printf("\n\nDigite um valor percentual: ");
	scanf("%f", &porcent);
	result= (porcent*555)/100;
	
	system("pause");
	system("cls");
	printf("%.0f%% de 555 é = %.0f", porcent, result);
	printf("\n\n--FIM DO SISTEMA--");
	
	return 0;
}
