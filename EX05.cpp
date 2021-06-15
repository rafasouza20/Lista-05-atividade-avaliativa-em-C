#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    char sexo;
    
    system("color B");
	
	do { 
		printf("Insira o sexo (M ou F): ");
		scanf("%c", &sexo);
		system("cls");
	} while (tolower(sexo) != 'f' && tolower(sexo) != 'm');

	printf("Esse sexo por extenso, é: %s", tolower(sexo) == 'm' ? "Masculino" : "Feminino");
}
