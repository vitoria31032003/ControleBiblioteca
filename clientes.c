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
#include "clientes.h"



void tela_menu_clientes_usuarios(void){
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
	printf("************************************************************\n");
	printf("***  =======================================================\n");
	printf("***  = = = = = = = =  Menu Clientes/Usuarios = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("*** 1. Solicitar Cadastro                                ***\n");
	printf("*** 2. Solicitar Emprestimo                              ***\n");
	printf("*** 3. Solicitar Renovacao                               ***\n");   
	printf("*** 4. Alterar Dados Pessoais                            ***\n");
	printf("*** 0. Voltar ao menu principal                          ***\n");
	printf("***                                                      ***\n");
	printf("***  Informe a opcao desejada:                           ***\n");
	printf("***                                                      ***\n");
	scanf("%d", &op);
	switch(op)
	{
	case 1:
            solicitar_cadastro();
            break;
	case 2:
            solicitar_emprestimo();
            break;
	case 3:
            solicitar_renovacao();
            break;
	case 4:
            alterar_dados_pessoais();
            break;
	
	default:
		printf("Informe uma opcao valida");
		break;
}



void solicitar_cadastro(void)
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
	printf("***  = = = = = = = = Solicitar Cadastro  = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  Nome Completo:                                      ***\n");
	fgets(nome_completo, 51, stdin);
	printf("***  Telefone:                                           ***\n");
	fgets(telefone, sizeof(telefone), stdin);
	printf("***  Data de Nascimento:                                 ***\n");
	fgets(data, sizeof(data_nasc), stdin)
	printf("***  CPF:                                                ***\n");
	fgets(cpf, sizeof(cpf)-2, stdin);
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void solicitar_emprestimo(void){
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
	printf("***  = = = = = = = Solicitar Emprestimo  = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  Nome Completo:                                      ***\n");
	fgets(nome_completo, 51, stdin);
	printf("***  CPF:                                                ***\n");
	fgets(cpf, sizeof(cpf)-2, stdin);
	printf("***  ISBN:                                               ***\n");
	fgets(isbn, sizeof(isbn), stdin);
	printf("***  Data de retirada:                                   ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void solicitar_renovacao(void){
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
	printf("***  = = = = = = = Solicitar Renovcao  = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  Nome Completo:                                      ***\n");
	fgets(nome_completo, 51, stdin);
	printf("***  CPF:                                                ***\n");
	fgets(cpf, sizeof(cpf)-2, stdin);
	printf("***  ISBN:                                               ***\n");
	fgets(isbn, sizeof(isbn), stdin);
	printf("***  Data do vencimento:                                 ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void alterar_dados_pessoais(void){
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
	printf("***  = = = = = = = = Alterar Dados Pessoais  = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  Informe o CPF:                                      ***\n");
	fgets(cpf, sizeof(cpf)-2, stdin);
	printf("***  Nome Completo:                                      ***\n");
	fgets(nome_completo, 51, stdin);
	printf("***  Telefone:                                           ***\n");
	fgets(telefone, sizeof(telefone), stdin);
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}
