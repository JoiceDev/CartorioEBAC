#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das strings

int registrar() //função responsável por cadastrar os usuários no sistema
{
			//início da criação de variáveis/string
			char arquivo[40];
			char cpf[40];
			char nome[40];
			char sobrenome[40];
			char cargo[40];
			//final da criação de variáveis/string
			
			printf("Digite o CPF a ser cadastrado: "); //coletando informação do usuário
			scanf("%s", cpf); //%s referente às strings/salvar 
			
			strcpy(arquivo, cpf); //copiar os valores das strings
			FILE *file; //cria o arquivo
		    
			file = fopen(arquivo, "w"); //cria o arquivo
			fprintf(file,"CPF: ");
			fprintf(file,cpf); //salva o valor da variável
			fclose(file); //fecha o arquivo
			
			file = fopen(arquivo, "a");
			fprintf(file,"\nNome: ");
			fclose(file);
			
			printf("Digite o nome a ser cadastrado: ");
			scanf("%s",nome);
			
			file = fopen(arquivo, "a");
			fprintf(file,nome);
			fclose(file);
			
			file = fopen(arquivo, "a");
			fprintf(file,"\nSobrenome: ");
			fclose(file);
			
			printf("Digite o sobrenome a ser cadastrado: ");
			scanf("%s", sobrenome);
			
			file = fopen(arquivo,"a");
			fprintf(file,sobrenome);
			fclose(file);
			
			file = fopen(arquivo, "a");
			fprintf(file,"\nCargo:");
			fclose(file);
			
			printf("Digite o cargo a ser cadastrado: ");
			scanf("%s",cargo);
			
			file - fopen(arquivo, "a");
			fprintf(file,cargo);
			fprintf(file,"\n\n");
			fclose(file);
			
			system("pause");
			
}

int consultar()
{
			setlocale(LC_ALL, "Portuguese");
			
			char cpf[40];
			char conteudo[200];
			
			printf("Digite o CPF a ser consultado: ");
			scanf("%s",cpf);
			
			FILE *file; 
			file = fopen(cpf,"r");
			
			if(file == 	NULL) 
			{
				printf("Não foi possível abrir o arquivo, não localizado!.\n");
			}
			
			printf("\nEssas são as informações do usuário: \n\n");
				
			while(fgets(conteudo, 200, file) != NULL)
			
			{
				printf("%s", conteudo);
			}
			
			system("pause");
			
		
}

int deletar()
{
			char cpf[40];
			
			printf("Digite o CPF do usuário a ser deletado: ");
			scanf("%s", cpf);
			
			remove(cpf);
			
			FILE *file;
			file = fopen(cpf, "r");
			
			if(file == NULL)
			{
				printf("O usuário não se enconta no sistema.\n");
				system("pause");
			}
}


int main ()
{
	int opcao=0; //definindo variáveis
	int x=1;


	for(x=1;x=1;)
	{
	
		system("cls");
		
		setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
	
		printf("### Cartório da EBAC ###\n\n"); //início do menu
		printf("Escolha a opção desejada no menu:\n\n");
		printf("\t1- Registrar nomes\n");
		printf("\t2- Consultar nomes\n");
		printf("\t3- Deletar nomes \n");
		printf("\t4- Sair do sistema \n\n"); 
		printf("Opção:"); //fim do menu
	
		scanf("%d", &opcao); //armazenar a escolha do usuário
	
		system("cls"); //responsável por limpar a tela
		
		switch(opcao) //início da seleção do menu
		{
			case 1: 
			registrar(); //chamada de funções 
			break;
			
			case 2: 
			consultar(); //chamada de funções
			break;
			
			case 3: 
			deletar(); //chamada de funções
			break;
			
			case 4:
			printf("Obrigado por utilizar o sistema!\n");
			return 0;
			break;
			
			
			default: 
			printf("Opção indisponível!\n");
			system("pause");
			break;
			
		} //fim da seleção
	
		
}
}
