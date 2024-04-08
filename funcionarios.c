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
#include "funcionarios.h"



void tela_menu_funcionarios(void)
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
       case 0:
              tela_menu_principal();
              break;
	
       default:
           printf("Informe uma opcao valida");
           break;
	}
}



void cadastrar_cliente_usuario(void)
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
	printf("***  = = = = Cadastrar Clientes/Usuario  = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  Nome Completo:                                      ***\n");
	printf("***  Matricula (Apenas numero):                          ***\n");
	printf("***  Data de Nascimento (DD/MM/AAAA):                    ***\n");
	printf("***  Numero de Telefone:                                 ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void liberar_emprestimo(void)
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
	printf("***  = = = = = Liberar Emprestimo  = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  Matricula (Apenas numeros):                         ***\n");
	printf("***  ISBN:                                               ***\n");
	printf("***  Data do Empresimo:                                  ***\n");
	printf("***  Data da Devolucao:                                  ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void liberar_renovacao(void)
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
	printf("***  = = = = = Liberar Renovacao = = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  Matricula {Apenas numero):                          ***\n");
	printf("***  ISBN:                                               ***\n");
	printf("***  Data do Retorno:                                    ***\n");
	printf("***  Data do Vecimento:                                  ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void registar_devolucao(void)
{
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
	printf("***  Matricula {Apenas numero):                          ***\n");
	printf("***  ISBN:                                               ***\n");
	printf("***  Data do Retorno:                                    ***\n");
	printf("***  Data do Vecimento:                                  ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}
