///////////////////////////////////////////////////////////
/// Universidade Federal do Rio Grande do Norte         ///
/// Centro de Ensino Superior do Seridó                 ///
/// Departamento de Computação e Tecnologia             ///
/// Disciplina: Programação                             ///
/// Professor: Flavius Gorgônio                         ///
/// Projeto: Sistema de Controle de Biblioteca          ///
/// Aluna: Vitória Geovanna de Assis Pereira            ///
///////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "login.h"



void tela_menu_login(void)
{
	int op = 100;
	system("clear||cls");
	printf("\n");
	printf("************************************************************\n");
	printf("***                                                      ***\n");
	printf("***  =================================================== ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("************************************************************\n");
	printf("***                                                      ***\n");
	printf("***  =================================================== ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = =  Menu Login = = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  1. Fazer Login                                      ***\n");
	printf("***  2. Cadastrar novo Usuario                           ***\n");
	printf("***  3. Alterar Senha                                    ***\n");
	printf("***  4. Remover Usuario                                  ***\n");
	printf("***  0. Voltar ao menu principal                         ***\n");
	printf("***                                                      ***\n");
	printf("***  Informe a opcao desejada:                           ***\n");
	printf("***                                                      ***\n");
	scanf("%d", &op);
	switch(op)
	{
	case 1:
		fazer_login();
		break;
	case 2:
		cadastrar_novo_usuario();
		break;
	case 3:
		alterar_senha();
		break;
	case 4:
		remover_usuario();
		break;
	
	default:
		printf("Informe uma opcao valida");
		break;
	}
}



void fazer_login(void)
{
	system("clear||cls");
	printf("************************************************************\n");
	printf("***                                                      ***\n");
	printf("***  =================================================== ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
	printf("***                                                      ***\n");
	printf("***  =================================================== ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  = = = = Fazer Login = = = = = = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  CPF:                                                ***\n");
	printf("***  Senha:                                              ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void cadastrar_novo_usuario(void)
{
	system("clear||cls");
	printf("************************************************************\n");
	printf("***                                                      ***\n");
	printf("***  =================================================== ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
	printf("***                                                      ***\n");
	printf("***  =================================================== ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  = = = = Cadastrar Novo Usuario  = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  Nome Completo:                                      ***\n");
	printf("***  CPF:                                                ***\n");
	printf("***  Data nascimento:                                    ***\n");
	printf("***  Senha:                                              ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void alterar_senha(void)
{
	system("clear||cls");
	printf("************************************************************\n");
	printf("***                                                      ***\n");
	printf("***  =================================================== ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
	printf("***                                                      ***\n");
	printf("***  =================================================== ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  = = = = Alterar Senha = = = = = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  Informe o CPF:                                      ***\n");
	printf("***  Nova senha:                                         ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void remover_usuario(void)
{
	system("clear||cls");
	printf("************************************************************\n");
	printf("***                                                      ***\n");
	printf("***  =================================================== ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
	printf("***                                                      ***\n");
	printf("***  =================================================== ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  = = = = Remover Ususario  = = = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  Informe o CPF:                                      ***\n");
    printf("***                                                      ***\n");
	printf("************************************************************\n");
}
