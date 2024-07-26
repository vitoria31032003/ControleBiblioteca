//////////////////////////////////////////////////////////
/// Universidade Federal do Rio Grande do Norte         ///
/// Centro de Ensino Superior do Seridó                 ///
/// Departamento de Computação e Tecnologia             ///
/// Disciplina: Programação                             ///
/// Professor: Flavius Gorgônio                         ///
/// Projeto: Sistema de Controle de Biblioteca          ///
/// Aluna: Vitória Geovanna de Assis Pereira            ///
///////////////////////////////////////////////////////////

#include "login.h"
#include "funcionarios.h"
#include "utilidades.h"
#include "acervo.h"
#include "caixa.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ler_senha(char *senha) {
  int senha_val = 0;

  do {
    printf("Senha: ");

    // fgets(senha, sizeof(senha), stdin); desabilitado
    scanf("%s", senha);
    // printf("/nSenha: <%s>/n", senha);

    senha_val = val_senha(senha);

    if (!senha_val)

    {
      printf("Tamanho da senha inválida. Por favor, insira uma senha válida "
             "com máximo "
             "com 20 características.\n");
    }
  } while (!senha_val);
}


void tela_menu_login(void) {
  char op;
  do {
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
    printf("***  = = = = = = = =  Menu Usuario = = = = = = = = = = = ***\n");
    printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
    printf("***  =================================================== ***\n");
    printf("***                                                      ***\n");
    printf("***  1. Cadastrar um novo Usuario                        ***\n");
    printf("***  2. Pesquisar dados do Usuario                       ***\n");
    printf("***  3. Atualizar o cadastro de um Usuario               ***\n");
    printf("***  4. Remover um Usuario                               ***\n");
    printf("***  0. Voltar ao menu principal                         ***\n");
    printf("***                                                      ***\n");
    printf("***  Informe a opcao desejada:                           ***\n");
    printf("***                                                      ***\n");
    scanf("%c", &op);
    escolha_menu_login(op);
  } while (op != '0');
}

Login *cadastrarUsuario(void) {
  Login *login;
  login = (Login *)malloc(sizeof(Login));
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
  printf("***  = = = = Cadastrar um novo Usuario = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  limparBufferEntrada();

  ler_nome_completo(login->nome_completo);

  ler_cpf(login->cpf);
  // pode ser o tamanho do cpf (14 contando com a pontuação e 11 sem contar)

  ler_data_nasc(login->data_nasc);
  // pegando a data como char e não convertendo para inteiro

  ler_senha(login->senha);

  login->status = 1;

  getchar();

  return login;
}

void gravaUsuario(Login *login) {
  FILE *fp;

  fp = fopen("login.bin", "ab");

  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo");
    getchar();
  }

  fwrite(login, sizeof(Login), 1, fp);

  fclose(fp);

  free(login);
}

void exibeUsuario(Login *login) {
  char situacao[20];

  if ((login == NULL) || (login->status == 0)) {
    printf("Usuário não encontrado");
  } else {
    printf("Nome completo: %s", login->nome_completo);
    printf("CPF: %s\n", login->cpf);
    printf("Data de nascimento: %s\n", login->data_nasc);
    printf("Tecle <ENTER> para continuar\n");
  }
}

void pesquisarUsuario(void) {
  FILE *fp;

  Login *login;

  char cpf[17];

  system("clear||cls");

  getchar();

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
  printf("***  = = = = = Pesquisar dados do Usuario  = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Informe o CPF do usuario que deseja pesquisar:      ***\n");
  printf("***                                                      ***\n");
  ler_cpf(cpf);
  getchar();

  login = (Login *)malloc(sizeof(Login));
  fp = fopen("login.bin", "rb");
  int encotrado = 0;

  if (fp == NULL) {

    printf("Ops! Ocorreu um erro na abertura do arquivo");

  } else {

    while (fread(login, sizeof(Login), 1, fp) == 1) {

      if ((strcmp(login->cpf, cpf) == 0) && (login->status == 1)) {

        encotrado = 1;
        exibeUsuario(login);
        getchar();
      }
    }
    if (!encotrado) {
      printf("Usuário não encontrado!");
      getchar();
    }
  }
  fclose(fp);
  free(login);
}

void atualizarUsuario(void) {
  char cpf[17];

  Login *login = (Login *)malloc(sizeof(Login));

  FILE *fp;

  int variavel = 0;

  system("clear||cls");

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
  printf("***  = = = = = Atualizar dados do Usuario  = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Informe o CPF do usuario que deseja atualizar:      ***\n");
  ler_cpf(cpf);
  getchar();

  fp = fopen("login.bin", "r+b");

  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo");
    getchar();
  } else {
    while (fread(login, sizeof(Login), 1, fp) == 1) {
      if (strcmp(login->cpf, cpf) == 0) {
        ler_nome_completo(login->nome_completo);

        ler_cpf(login->cpf);

        ler_data_nasc(login->data_nasc);

        ler_senha(login->senha);

        login->status = 1;

        fseek(fp, (-1) * sizeof(Login), SEEK_CUR);

        fwrite(login, sizeof(Login), 1, fp);

        variavel = 1;

        break;
      }
    }
  }
  if (!variavel) {
    printf("Usuário não encontrado!");
  } else {
    printf("Usuário atualizado com sucesso!");
  }
  fclose(fp);
  free(login);
  getchar();
}

void removerUsuario(void) {
  char cpf[17];

  Login *login = (Login *)malloc(sizeof(Login));

  FILE *fp;

  int aux = 0;

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
  printf("***  = = = = Remover Usuario = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Informe o CPF do usuario que deseja remover:        ***\n");
  ler_cpf(cpf);
  getchar();
  fp = fopen("login.bin", "rb");

  if (fp == NULL) {

    printf("Ops! Ocorreu um erro na abertura do arquivo\n");
    printf("Tecle <ENTRER> para voltar...\n");
    getchar();
  } else {

    while (fread(login, sizeof(Login), 1, fp) == 1) {

      if (strcmp(login->cpf, cpf) == 0) {

        printf("Usuário encontrado!\n");

        printf("\n");

        login->status = 0;

        fseek(fp, -sizeof(Login), SEEK_CUR);

        fwrite(login, sizeof(Login), 1, fp);

        aux = 1;

        break;
      }
    }
  }
  if (!aux) {
    printf("Usuário não encontrado!");
  } else {
    printf("Usuário removido com sucesso!");
  }
  fclose(fp);
  free(login);
  getchar();
}


void escolha_menu_login(char op) {
  Login *login;
  switch (op) {
  case '1':
    login = cadastrarUsuario();
    gravaUsuario(login);
    break;
  case '2':
    pesquisarUsuario();
    getchar();
    break;
  case '3':

    atualizarUsuario();
    getchar();
    break;
  case '4':
    removerUsuario();
    getchar();
    break;

  default:
    printf("Informe uma opcao valida\n");
    break;
  }
}
