#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
	float divnum1;
	float divnum2;
	int num1;
	int num2;
	int opcao;
	setlocale(LC_ALL,("Portuguese"));
	printf("===================================\nCalculadora para operações simples!\n===================================\n");
	system("pause");
	system("cls");
	do{
		printf("1.Soma.\n");
		printf("2.Subtração.\n");
		printf("3.Divisão.\n");
		printf("4.Multiplicação.\n");
		printf("5.Instruções.\n");
		printf("6.Sair.\n");
		scanf("%d", &opcao);
		fflush(stdin);
		system("pause");
		system("cls");
		switch(opcao){
			case 1:
				printf("Quais números você deseja somar?\n");
				scanf("%d", &num1);
				fflush (stdin);
				scanf("%d", &num2);
				fflush (stdin);
				printf("O resultado é:\n%d\n", num1 + num2);
				system("pause");
				system("cls");
				break;
			case 2:
				printf("Quais números você deseja subtrair?\n");
				scanf("%d", &num1);
				fflush (stdin);
				scanf("%d", &num2);
				printf("O resultado é:\n%d\n", num1 - num2);
				system("pause");
				system("cls");
				break;
			case 3:
				printf("Quais números você deseja dividir?\n");
				scanf("%f", &divnum1);
				fflush(stdin);
				scanf("%f", &divnum2);
				fflush(stdin);
				printf("O resultado é:\n%f\n", divnum1 / divnum2);
				system("pause");
				system("cls");
				break;
			case 4:
				printf("Quais números você deseja multiplicar?\n");
				scanf("%d", &num1);
				fflush(stdin);
				scanf("%d", &num2);
				fflush(stdin);
				printf("O resultado é:\n%d\n", num1 * num2);
				system("pause");
				system("cls");
				break;
			case 5:
				printf("Instruções de utilização da calculadora:\n\n");
				printf("A utilização da calcladora se dá de maneira simples.\n\n O usuário seleciona a opção desejada no menu inicial da calculadora, dentro da operação, você irá digitar o primeiro\n número sem qualquer sinal de operção e pressionar enter, em seguida, inserir o segundo número e pressionar enter,\n então, o resultado será exibido.\n\n\nObs: Todas as operações, exceto divisão, aceitam apenas números inteiros.\n\n");
				system ("pause");
				system("cls");
				break;
			case 6:
				printf("Programa encerrado!\n");
				system("pause");
				break;
				default:
					("Comando inválido!");
					break;
						}
	}while (opcao < 6);
}
