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
#include "login.h"
#include "funcionarios.h"
#include "clientes.h"
#include "acervo.h"



void tela_menu_principal(void)
{
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
