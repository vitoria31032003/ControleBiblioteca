///////////////////////////////////////////////////////////
/// Universidade Federal do Rio Grande do Norte         ///
/// Centro de Ensino Superior do Seridó                 ///
/// Departamento de Computação e Tecnologia             ///
/// Disciplina: Programação                             ///
/// Professor: Flavius Gorgônio                         ///
/// Projeto: Sistema de Controle de Biblioteca          ///
/// Aluna: Vitória Geovanna de Assis Pereira            ///
///////////////////////////////////////////////////////////

#include "funcionarios.h"
#include "utilidades.h"
#include "caixa.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ler_fone(char *fone) {
  int fone_val = 0;

  do {
    printf("Telefone: ");

    fgets(fone, 15, stdin);

    fone_val = val_fone(fone);

    if (!fone_val)

    {
      printf("Telefone inválido. Por favor, insira um telefone válido.\n");
    }
  } while (!fone_val);
}

void tela_menu_funcionario(void) {
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
    printf("***  = = = = = = = =  Menu Funcionario = = = = = = = = = ***\n");
    printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
    printf("***  =================================================== ***\n");
    printf("***                                                      ***\n");
    printf("***  1. Cadastrar um novo Funcionario                    ***\n");
    printf("***  2. Pesquisar dados do Funcionario                   ***\n");
    printf("***  3. Atualizar o cadastro de um Funcionario           ***\n");
    printf("***  4. Remover um Funcionario                           ***\n");
    printf("***  0. Voltar ao menu principal                         ***\n");
    printf("***                                                      ***\n");
    printf("***  Informe a opcao desejada:                           ***\n");
    printf("***                                                      ***\n");
    scanf("%c", &op);
    escolha_menu_funcionario(op);
  } while (op != '0');
}

Funcionario *cadastrarFuncionario(void) {
  Funcionario *funcionario;
  funcionario = (Funcionario *)malloc(sizeof(Funcionario));
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
  printf("***  = = = = Cadastrar um novo Funcionario = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  limparBufferEntrada();

  ler_nome_completo(funcionario->nome_completo);

  ler_cpf(funcionario->cpf);

  ler_data_nasc(funcionario->data_nasc);

  ler_fone(funcionario->fone);

  funcionario->status = 1;

  getchar();

  return funcionario;
}

void gravaFuncionario(Funcionario *funcionario) {
  FILE *fp;

  fp = fopen("funcionarios.bin", "ab");

  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo");
    getchar();
  }

  fwrite(funcionario, sizeof(Funcionario), 1, fp);

  fclose(fp);

  free(funcionario);
}

void exibeFuncionario(Funcionario *funcionario) {
  char situacao[20];

  if ((funcionario == NULL) || (funcionario->status == 0)) {
    printf("Funcionario não encontrado");
  } else {
    printf("Nome completo: %s\n", funcionario->nome_completo);
    printf("CPF: %s\n", funcionario->cpf);
    printf("Data de nascimento: %s\n", funcionario->data_nasc);
    printf("Telefone: %s\n", funcionario->fone);
    printf("Tecle <ENTER> para continuar\n");
  }
}

void pesquisarFuncionario(void) {
  FILE *fp;

  Funcionario *funcionario;

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
  printf("***  = = = = = Pesquisar dados do Funcionario  = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Informe o CPF do funcionario que deseja pesquisar:  ***\n");
  printf("***                                                      ***\n");
  ler_cpf(cpf);
  getchar();

  funcionario = (Funcionario *)malloc(sizeof(Funcionario));
  fp = fopen("funcionarios.bin", "rb");
  int encontrado = 0;

  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo");
  } else {
    while (fread(funcionario, sizeof(Funcionario), 1, fp) == 1) {
      if ((strcmp(funcionario->cpf, cpf) == 0) && (funcionario->status == 1)) {
        encontrado = 1;
        exibeFuncionario(funcionario);
        getchar();
      }
    }
    if (!encontrado) {
      printf("Funcionario não encontrado!");
      getchar();
    }
  }
  fclose(fp);
  free(funcionario);
}

void atualizarFuncionario(void) {
  char cpf[17];

  Funcionario *funcionario = (Funcionario *)malloc(sizeof(Funcionario));

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
  printf("***  = = = = = Atualizar dados do Funcionario  = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Informe o CPF do funcionario que deseja atualizar:  ***\n");
  ler_cpf(cpf);
  getchar();
  fp = fopen("funcionarios.dat", "r+b");

  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo");
    getchar();
  } else {
    while (fread(funcionario, sizeof(Funcionario), 1, fp) == 1) {
      if (strcmp(funcionario->cpf, cpf) == 0) {
        ler_nome_completo(funcionario->nome_completo);

        ler_cpf(funcionario->cpf);

        ler_data_nasc(funcionario->data_nasc);

        ler_fone(funcionario->fone);

        funcionario->status = 1;

        fseek(fp, (-1) * sizeof(Funcionario), SEEK_CUR);

        fwrite(funcionario, sizeof(Funcionario), 1, fp);

        variavel = 1;

        break;
      }
    }
  }
  if (!variavel) {
    printf("Funcionario não encontrado!");
  } else {
    printf("Funcionario atualizado com sucesso!");
  }
  fclose(fp);
  free(funcionario);
  getchar();
}

void removerFuncionario(void) {
  char cpf[17];

  Funcionario *funcionario = (Funcionario *)malloc(sizeof(Funcionario));

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
  printf("***  = = = = = Remover Funcionario = = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Informe o CPF do funcionario que deseja remover:    ***\n");
  ler_cpf(cpf);
  getchar();
  fp = fopen("funcionarios.dat", "r+b");

  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo\n");

    printf("Tecle <ENTRER> para voltar...\n");

    getchar();
  } else {
    while (fread(funcionario, sizeof(Funcionario), 1, fp) == 1) {
      if (strcmp(funcionario->cpf, cpf) == 0) {
        printf("Funcionario encontrado!\n");

        printf("\n");

        funcionario->status = 0;

        fseek(fp, (-1) * sizeof(Funcionario), SEEK_CUR);

        fwrite(funcionario, sizeof(Funcionario), 1, fp);

        aux = 1;

        break;
      }
    }
  }
  if (!aux) {
    printf("Funcionario não encontrado!");
  } else {
    printf("Funcionario removido com sucesso!");
  }
  fclose(fp);
  free(funcionario);
  getchar();
}


void escolha_menu_funcionario(char op) {
  Funcionario *funcionario;
  switch (op) {
  case '1':
    funcionario = cadastrarFuncionario();
    gravaFuncionario(funcionario);
    break;
  case '2':
    pesquisarFuncionario();
    getchar();
    break;
  case '3':
    atualizarFuncionario();
    getchar();
    break;
  case '4':
    removerFuncionario();
    getchar();
    break;
  default:

    printf("Informe uma opcao valida\n");
    break;
  }
}