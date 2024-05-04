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
#include "biblioteca.h"



void tela_menu_principal(void){
	int op = 100;
	system("clear||cls");
	printf("\n");
	printf("***************************************************************\n");
	printf("***   Universidade Federal do Rio Grande do Norte           ***\n");
	printf("***   Centro de Ensino Superior do Serido                   ***\n");
	printf("***   Departamento de Computacao e Tecnologia               ***\n");
	printf("***   Disciplina: Programacao                               ***\n");
	printf("***   Professor: Flavius Gorgonio                           ***\n");
	printf("***   Projeto: Sistema de Controle de Biblioteca            ***\n");
	printf("***   Aluna: Vitoria Geovanna de Assis Pereira              ***\n");
	printf("***                                                         ***\n");
	printf("***************************************************************\n");
	printf("***                                                         ***\n");
	printf("***  = = = Sistema Controle de Biblioteca = = =             ***\n");
	printf("***                                                         ***\n");
	printf("***  1. Modulo Login                                        ***\n");
	printf("***  2. Modulo Funcionarios                                 ***\n");
	printf("***  3. Modulo Clientes/Usuarios                            ***\n");
	printf("***  4. Modulo Acervo                                       ***\n");
	printf("***  0. Sair                                                ***\n");
	printf("***                                                         ***\n");
	printf("***  Informe a opcao desejada:                              ***\n");
	printf("***                                                         ***\n");
	scanf("%d", &op);
	getchar();
	switch(op)
	{
	case 1:
		tela_menu_login();
		break;
	case 2:
		tela_menu_funcionarios();
		break;
	case 3:
		tela_menu_clientes_usuarios();
		break;
	case 4:
		tela_menu_acervo();
		break;
	case 0:
		printf("Saindo");
		break;

	default:
		printf("Informe uma opcao valida");
		break;
	}
}


void tela_menu_login(void){
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
	printf("***  1. Entrar no sistema como administrador             ***\n");
	printf("***  2. Entrar no sistema como funcionario               ***\n");
	printf("***  3. Entrar no sistema como cliente/usuario           ***\n");
	printf("***  0. Voltar ao menu principal                         ***\n");
	printf("***                                                      ***\n");
	printf("***  Informe a opcao desejada:                           ***\n");
	printf("***                                                      ***\n");
	scanf("%d", &op);
	switch(op)
	{
	case 1:
		entrar_como_administrador();
		break;
	case 2:
		entrar_como_funcionario();
		break;
	case 3:
		entrar_como_cliente_usuario();
		break;
	
	default:
		printf("Informe uma opcao valida");
		break;
	}
}



void entrar_como_administrador(void){
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
	printf("***  = = = = Entrar como Administrador = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  CPF do Administrador:                               ***\n");
	printf("***  Senha:                                              ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void entrar_como_funcionario(void){
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
	printf("***  = = = = Entrar como Funcionario = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  CPF do Funcionario:                                 ***\n");
	printf("***  Senha:                                              ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void entrar_como_cliente_usuario(void){
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
	printf("***  = = = = Entrar como Clientes/Usuario  = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  CPF do Cliente:                                     ***\n");
	printf("***  Senha:                                              ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void tela_menu_funcionarios(void){
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
	printf("***  = = = = = = = =  Menu Funcionarios  = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  1. Cadastrar Clientes/Usuarios                      ***\n");
	printf("***  2. Liberar o Emprestimos de Livros                  ***\n");
	printf("***  3. Liberar a Renovacao de Livros                    ***\n");
	printf("***  4. Registar a Devolucao de Livros                   ***\n");
	printf("***  0. Voltar ao menu principal                         ***\n");
	printf("***                                                      ***\n");
	printf("***  Informe a opcao desejada:                           ***\n");
	printf("***                                                      ***\n");
	scanf("%d", &op);
	switch(op)
	{
	case 1:
	    cadastrar_cliente_usuario();
	    break;
	case 2:
	    liberar_emprestimo();
	    break;
	case 3:
	    liberar_renovacao();
	    break;
	case 4:
	    registar_devolucao();
	    break;
	
	default:
	    printf("Informe uma opcao valida");
	    break;
	}
}



void cadastrar_cliente_usuario(void){
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
	printf("***  = = = = Cadastrar Clientes/Usuario  = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  Nome Completo:                                      ***\n");
	printf("***  CPF:                                                ***\n");
	printf("***  Data de Nascimento (DD/MM/AAAA):                    ***\n");
	printf("***  Numero de Telefone:                                 ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void liberar_emprestimo(void){
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
	printf("***  = = = = = Liberar Emprestimo  = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  CPF:                                                ***\n");
	printf("***  ISBN:                                               ***\n");
	printf("***  Data do Empresimo:                                  ***\n");
	printf("***  Data da Devolucao:                                  ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void liberar_renovacao(void){
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
	printf("***  = = = = = Liberar Renovacao = = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  CPF:                                                ***\n");
	printf("***  ISBN:                                               ***\n");
	printf("***  Data do Retorno:                                    ***\n");
	printf("***  Data do Vecimento:                                  ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void registar_devolucao(void){
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
	printf("***  = = = = = = = =  Resgitar Devolucao = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  CPF:                                                ***\n");
	printf("***  ISBN:                                               ***\n");
	printf("***  Data do Retorno:                                    ***\n");
	printf("***  Data do Vecimento:                                  ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}


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
	printf("***  =================================================== ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = =  Menu Clientes/Usuarios = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  1. Solicitar Cadastro                               ***\n");
	printf("***  2. Solicitar Emprestimo                             ***\n");
	printf("***  3. Solicitar Renovacao                              ***\n");
	printf("***  4. Alterar Dados Pessoais                           ***\n");
	printf("***  0. Voltar ao menu principal                         ***\n");
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
 }



void solicitar_cadastro(void){
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
	printf("***  Telefone:                                           ***\n");
	printf("***  Data de Nascimento:                                 ***\n");
	printf("***  CPF:                                                ***\n");
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
	printf("***  CPF:                                                ***\n");
	printf("***  ISBN:                                               ***\n");
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
	printf("***  CPF:                                                ***\n");
	printf("***  ISBN:                                               ***\n");
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
	printf("***  Nome Completo:                                      ***\n");
	printf("***  Telefone:                                           ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");

}



void tela_menu_acervo(void){
	int op = 100;
	system("clear||cls");
	printf("\n");
	printf("************************************************************\n");
	printf("***                                                      ***\n");
	printf("***  =================================================== ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("*** ==================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  =================================================== ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = Menu Acervo = = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
	printf("***                                                      ***\n");
	printf("***  1. Cadastrar Livros                                 ***\n");
	printf("***  2. Remover Livros                                   ***\n");
	printf("***  3. Atualizar Livros                                 ***\n");
	printf("***  4. Quantidade de Livros Disponiveis                 ***\n");
	printf("***  0. Voltar ao menu principal                         ***\n");
	printf("***                                                      ***\n");
	printf("***  Informe a opcao desejada:                           ***\n");
	printf("***                                                      ***\n");
	scanf("%d", &op);
	switch(op)
	{
	case 1:
		cadastrar_livros();
		break;
	case 2:
		remover_livros();
		break;
	case 3:
		atualizar_livros();
		break;
	case 4:
		quantidade_livros();
		break;
	
	default:
		printf("Informe uma opcao valida");
		break;
	}
}



void cadastrar_livros(void){
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
	printf("***  = = = = Cadastrar Livros  = = = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  Titulo:                                             ***\n");
	printf("***  ISBN:                                               ***\n");
	printf("***  Autor:                                              ***\n");
	printf("***  Livros Disponiveis:                                 ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void remover_livros(void){
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
	printf("***  = = = = = Remover Livros  = = = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  ISBN:                                               ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void atualizar_livros(void){
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
	printf("***  = = = = = Atualizar Livros  = = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  Informe ISBN:                                       ***\n");
	printf("***  Titulo:                                             ***\n");
	printf("***  Autor:                                              ***\n");
	printf("***  Livros Disponiveis:                                 ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void quantidade_livros(void){
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
	printf("***  = = = = = Quantidade de Livros Disponiveis  = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  ISBN:                                               ***\n");
	printf("***  Titulo:                                             ***\n");
	printf("***  Autor:                                              ***\n");
	printf("***  Livros Disponiveis:                                 ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}
