#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
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
