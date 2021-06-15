#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int Caseregiao;
	char nome[50],regiao[50];

	system("color B");
	
	printf("Olá, qual é o seu nome: \n");
	fgets(nome,50,stdin);
	fflush(stdin);
do {
		printf("\n");
		printf("1 - Ver menu de opções\n"); 
		printf("0 - 0 após a escolha\n");
		scanf("%d", &Caseregiao); 
			
		switch(Caseregiao) 
		{	
			case 1:
			printf("Escolha uma das opções e digite 0 para o fim do sistema\n\n");
			printf("\n");
			printf(" Menu de opções\n");
			printf("\n");
			printf("2 - Norte\n"); 
			printf("3 - Nordeste\n");
			printf("4 - Centro-Oeste\n"); 
			printf("5 - Sudeste\n"); 
			printf("6 - Sul\n");  
			break;
			
			case 2:
			strcpy(regiao, "Norte"); 
				Caseregiao = 0;
			break;
			case 3:
			strcpy(regiao, "Nordeste");
				Caseregiao = 0;
			case 4:
			strcpy(regiao, "Centro-oeste");
				Caseregiao = 0;
			break;
			case 5:
			strcpy(regiao, "Sudeste");
				Caseregiao = 0;
			break;
			case 6:
			strcpy(regiao, "Sul");
				Caseregiao = 0;
			break;
		
		default:
			Caseregiao = 0;
		}
	}while(Caseregiao!=0);
	 system("cls");
	 printf("Você deseja conhecer a região %s!", regiao);
	 printf("\n");
	 printf("|FIM DO SISTEMA|");
	 
	 return 0;
}
