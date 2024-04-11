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
#include "acervo.h"



void tela_menu_acervo(void)
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
	printf("***  = = = = = = = = Menu Acervo = = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
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
		
   case 0:
       tela_menu_principal();
       break;
      
    default:
        printf("Informe uma opcao valida");
        break;
	}
}



void cadastrar_livros(void)
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



void remover_livros(void)
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
	printf("***  = = = = = Remover Livros  = = = = = = = = = = = = = ***\n");
	printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
	printf("***  =================================================== ***\n");
	printf("***                                                      ***\n");
	printf("***  ISBN:                                               ***\n");
	printf("***                                                      ***\n");
	printf("************************************************************\n");
}



void atualizar_livros(void)
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



void quantidade_livros(void)
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
