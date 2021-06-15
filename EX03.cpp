#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    char C;
    
    system("color E");
	
	printf("Digite um caractere: ");
	scanf("%c", &C);

	printf("\nCaracteres usados: %c", C);
	printf("\nEm Octal: %o", C);
	printf("\nEm Decimal: %d", C);
	printf("\nEm Hexadecimal: %x ", C);
	
	return 0;
}
