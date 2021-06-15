#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    char sexo;
    
    system("color B");
	
	do { 
		printf("Insira o sexo (M ou F): ");
		scanf("%c", &sexo);
		system("cls");
	} while (tolower(sexo) != 'f' && tolower(sexo) != 'm');

	printf("Esse sexo por extenso, �: %s", tolower(sexo) == 'm' ? "Masculino" : "Feminino");
}
