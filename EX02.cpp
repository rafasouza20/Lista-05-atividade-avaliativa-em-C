#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
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
    printf("\nO maior valor � o primeiro n�mero digitado: %d", num1);
}
	else if((num2>num1)and(num2>num3)){
    printf("\nO maior valor � o segundo n�mero digitado: %d", num2);
}
	else if((num3>num2)and(num3>num1)){
    printf("\nO maior valor � o terceiro n�mero digitado: %d", num3);
}
	
	return 0;
}
