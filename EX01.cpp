#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
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
	printf("%.0f%% de 555 � = %.0f", porcent, result);
	printf("\n\n--FIM DO SISTEMA--");
	
	return 0;
}
