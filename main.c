#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct texto{
	
	int inicio;
	char nome [100];
	char vacina [100];
};
struct texto2{
	
	int inicio2;
	char nome [100];
	char vacina [100];
};
struct numeros{
	
	int numeros;
	int codigo[100];
	char cpf[100];
	char cpfDois[100];
	char numeroLote[100];
	int data [100];
};
struct numeros2{
	
	int numeros2;
	int codigo[100];
	char cpf[100];
	char cpfDois[100];
	char numeroLote[100];
	int data [100];
};
int menu;
void main(){
	
	setlocale(LC_ALL,"Portuguese");
	struct texto c1;
	c1.inicio=1;
	struct numeros n1;
	n1.numeros=1;
	struct texto2 c2;
	c2.inicio2=1;
	struct numeros2 n2;
	n2.numeros2 = 1;
	printf("=====================================================\n");
	printf("Bem vindo a ferramenta para cadastro de vacinas!\n");
	printf("=====================================================\n");
	
	do{
		printf("1. Cadastrar Vacina:\n");
		printf("2. Listar Aplica��es:\n");
		printf("3. Consultar por CPF:\n");
		printf("4. Sair:\n");
		scanf("%d", &menu);
		system("cls");
		switch(menu){
			case 1:
			
				
				printf("Nome:\n");
				scanf("%s", &c1.nome);
				fflush(stdin);
				printf("CPF:\n");
				scanf("%s", &n1.cpf);
				gets(n1.cpfDois);
				fflush(stdin);
				printf("Vacina:\n");
				scanf("%s", &c1.vacina);
				fflush(stdin);
				printf("Data:\n");
				scanf("%s", &n1.data);
				fflush(stdin);
				printf("Numero do lote:\n");
				scanf("%s", &n1.numeroLote);
				fflush(stdin);
				
				system("cls");
				printf("Nome:\n");
				scanf("%s", &c2.nome);
				fflush(stdin);
				printf("CPF:\n");
				scanf("%s", &n2.cpf);
				gets(n2.cpfDois);
				fflush(stdin);
				printf("Vacina:\n");
				scanf("%s", &c2.vacina);
				fflush(stdin);
				printf("Data:\n");
				scanf("%s", &n2.data);
				fflush(stdin);
				printf("Numero do lote:\n");
				scanf("%s", &n2.numeroLote);
				fflush(stdin);
			
				break;
				case 2:
					
					printf("===================================\n");
				    printf("Codigo:%d\n", n1.codigo);
					printf("Nome:%s\n", c1.nome);
					printf("CPF:%s\n", n1.cpf);
					printf("Vacina:%s\n", c1.vacina);
					printf("Data:%s\n", n1.data);
					printf("N�mero do lote:%s\n", n1.numeroLote);
					printf("===================================\n");
						fflush(stdin);	
					printf("===================================\n");
				    printf("Codigo:%d\n", n2.codigo);
					printf("Nome:%s\n", c2.nome);
					printf("CPF:%s\n", n2.cpf);
					printf("Vacina:%s\n", c2.vacina);
					printf("Data:%s\n", n2.data);
					printf("N�mero do lote:%s\n", n2.numeroLote);
					printf("===================================\n");
					fflush(stdin);
					system("pause");
					system("cls");
				    
				    break;
				    case 3:
				    
				    	printf("Consultando CPF...\n");
				    	gets(n1.cpf == n1.cpfDois);
				    	
				    
				    	if(n1.cpfDois == n1.cpf){
				    		printf("CPF v�lido!\n");
						 }else{
						 
						
						printf("CPF inv�lido!\n");
						
				    	
				}
				printf("Consultando CPF...\n");
				        gets(n2.cpf == n2.cpfDois);
			
				    	
				    
				    	if(n2.cpfDois == n2.cpf){
				    		printf("CPF v�lido!\n");
						}else{
						
						printf("CPF inv�lido!\n");
				    	
				}
					system("pause");
					system("cls");
					
						break;
						case 4:
							printf("Encerrando o programa!");
							return 0;
							break;
					
			    default:
				printf("Comando inv�lido!\n");
				break;
		}
	}while (menu);
}
