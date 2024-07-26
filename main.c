#include "main.h"
#include "acervo.h"
#include "funcionarios.h"
#include "login.h"
#include "utilidades.h"
#include <stdio.h>
#include <stdlib.h>
#include "relatorios.h"

void tela_menu_sobre(void) {
  char enter;
  system("clear||cls");
  printf("**************************************************************\n");
  printf("***   Universidade Federal do Rio Grande do Norte          ***\n");
  printf("***   Centro de Ensino Superior do Serido                  ***\n");
  printf("***   Departamento de Computacao e Tecnologia              ***\n");
  printf("***   Disciplina: Programacao                              ***\n");
  printf("***   Professor: Flavius Gorgonio                          ***\n");
  printf("***   Projeto: Sistema de Controle de Biblioteca           ***\n");
  printf("***   Aluna: Vitoria Geovanna de Assis Pereira             ***\n");
  printf("***                                                   	   ***\n");
  printf("**************************************************************\n");
  printf("***                                                        ***\n");
  printf("***   = = = Sistema Controle de Biblioteca = = =           ***\n");
  printf("***                                                        ***\n");
  printf("***   Programa utilizado na disciplina DC1106-Programacao, ***\n");
  printf("***   Este programa permite gerenciar o acervo de livros,  ***\n");
  printf("***   Ele inclui os principais modulos e funcionalidades   ***\n");
  printf("***   como cadastrar, atualizar, verificar quantidade de   ***\n");
  printf("***   livros disponiveis e entre outras funcionalidades.   ***\n");
  printf("***                                                        ***\n");
  printf("**************************************************************\n");
  printf("Tecle <ENTRER> para voltar...\n");
  scanf("%c", &enter);
}

char tela_menu_principal(void) {
  char opcao;

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
  printf("***  = = = = = = = =  Menu Principal = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  1. Modulo Usuario                                   ***\n");
  printf("***  2. Modulo Funcionario                               ***\n");
  printf("***  3. Modulo Acervo                                    ***\n");
  printf("***  4. Modulo Relatorio                                 ***\n");
  printf("***  0. Encerrar este sistema                            ***\n");
  scanf("%c", &opcao);
  getchar();
  return opcao;
}

int main() {
  char opcao = ' ';
  do {
    tela_menu_sobre();

    opcao = tela_menu_principal();

    switch (opcao) {
    case '1':
      tela_menu_login();
      getchar();
      break;
    case '2':
      tela_menu_funcionario();
      break;
    case '3':
      tela_menu_acervo();
      break;
    case '4':
      tela_menu_relatorio();
      break;
    case '0':
      printf("Encerrando este sistema...");
      break;

    default:
      printf("Informe uma valida");
      break;
    }
  } while (opcao != '0');
  return 0;
}