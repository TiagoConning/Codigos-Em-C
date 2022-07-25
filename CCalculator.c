#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, ("Portuguese"));
	
	float num1,
	      num2;
	char oper;
	do
	{
		printf("\t\tCalculadora simples linguagem C\n\n");
		printf("Opera��es dispon�veis.\n");
		printf("'+': Soma.\n");
		printf("'-': Subtra��o. \n");
		printf("'*': Multiplica��o. \n");
		printf("'/': Divis�o. \n");
		printf("'%%': Resto da divis�o. \n");
		printf("\nDigite a express�o na forma: numero1 operador numero2\n");
		printf("Exemplos: 1 enter + enter 1 enter, 2.1 enter * enter 3.1 enter. \n");
		printf("Para sair digite '0 enter 0 enter 0 enter'.\n");
		scanf("%f", &num1);
		fflush(stdin);
		scanf("%c", &oper);
		fflush(stdin);
		scanf("%f", &num2);
		fflush(stdin);
		system("cls");
		printf("Calculando: %f %c %f =\n", num1,oper,num2);
		switch(oper)
		{
			case '+':
		    	printf("%f\n\n", num1 + num2);
			    break;
			case '-':
				printf("%f\n\n", num1 - num2);
				break;
		    case'*':
		    	printf("%f\n\n", num1 * num2);
		    	break;
		    case'/':
		    if(num2 != 0)
			     printf("%f\n\n", num1 / num2);
			else
			     printf("N�o existe divis�o por 0!\n\n");
			break;
			case'%':
			printf("%f\n\n", (int)num1 % (int)num2);
			break;
			default:
			if(num1 != 0 && oper != '0' && num2 != 0)
			printf("Operador inv�lido!\n\n");
			else
			printf("Fechando calculadora...\n\n");	
		}
	}while(num1 != 0 && oper !=0 && num2 !=0);
	return 0;

}
