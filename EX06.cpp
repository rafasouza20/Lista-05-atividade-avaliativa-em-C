#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int Caseregiao;
	char nome[50],regiao[50];

	system("color B");
	
	printf("Ol�, qual � o seu nome: \n");
	fgets(nome,50,stdin);
	fflush(stdin);
do {
		printf("\n");
		printf("1 - Ver menu de op��es\n"); 
		printf("0 - 0 ap�s a escolha\n");
		scanf("%d", &Caseregiao); 
			
		switch(Caseregiao) 
		{	
			case 1:
			printf("Escolha uma das op��es e digite 0 para o fim do sistema\n\n");
			printf("\n");
			printf(" Menu de op��es\n");
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
	 printf("Voc� deseja conhecer a regi�o %s!", regiao);
	 printf("\n");
	 printf("|FIM DO SISTEMA|");
	 
	 return 0;
}
