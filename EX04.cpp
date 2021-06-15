#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
   	int menu, cadeira, mesa_comp, estante_livro, mesa_imp, estante_cd, i;
   	cadeira=0;
   	mesa_comp=0;
   	estante_livro=0;
   	mesa_imp=0;
   	estante_cd=0;
   	i=1;
	
	system("color B");
	
	do{
		printf("Digite o n�mero de acordo com o produto que voc� deseja\n\n|%d� Produto|", i);
		printf("\n");
		printf("\n1- Cadeira");
		printf("\n2- Mesa de Computador");
		printf("\n3- Estante de Livros");
		printf("\n4- Mesa de Impressora");
		printf("\n5- Estante de CD");
		printf("\n6- Para sair\n");
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				cadeira++;
				i++;
				break;
				
			case 2:
				mesa_comp++;
				i++;
				break;
			
			case 3:
				estante_livro++;
				i++;
				break;
			
			case 4:
				mesa_imp++;
				i++;
				break;
			
			case 5:
				estante_cd++;
				i++;
				break;
			
			case 6:
				break;
				
			default:
				printf("N�o possuimos esse produto em nossos estoques. Tente novamente\n");
				system("pause");
				system("cls");
				
			}
		
		system("cls");

		}while(menu != 6);
		fflush(stdin);
		
		
		printf("Produtos que foram solicitados:\n\n");
		printf("Cadeiras = %d\n", cadeira);
		printf("Mesas de Computador = %d\n", mesa_comp);
		printf("Estantes de Livros = %d\n", estante_livro);
		printf("Mesas de Impressora = %d\n", mesa_imp);
		printf("Estante de CD = %d\n", estante_cd);
		printf("\n");
		printf("--FIM DO SISTEMA--");
		
		
	return 0;
}
