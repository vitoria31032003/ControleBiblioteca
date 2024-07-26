#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "relatorios.h"
#include "login.h"
#include "funcionarios.h"
#include "acervo.h"
#include "utilidades.h"
#include "caixa.h"

void escolha_menu_relatorios(char op)
{
  switch(op)
  {
    case '1':
      relatorioUsuario();
      break;
    case '2':
      relatorioFuncionario();
      break;
    case '3':
      relatorioAcervo();
      break;

    default:
      printf("Informe uma opcao valida\n");
      break;
  }
}

void tela_menu_relatorio(void)
{
  char op;

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
  printf("***  = = = = = = = = = Relatorio = = = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  1. Relatorio de usuarios                            ***\n");
  printf("***  2. Relatorio de fucionarios                         ***\n");
  printf("***  3. Relatorio de livros                              ***\n");
  printf("***  0. Voltar ao menu principal                         ***\n");
  printf("***                                                      ***\n");

  op = input();

  escolha_menu_relatorios(op);
}

void relatorioUsuario(void)
{
  char op;

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
  printf("***  = = = = = = = = = Usuario = = = = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  1. Listagem por cadastrados                         ***\n");
  printf("***  0. Voltar ao menu principal                         ***\n");
  printf("***                                                      ***\n");
  op = input();
  escolha_usuario(op);
}

void listar_usuarios(void)
{
  getchar();
  
  FILE *fp;

  Login *login;

  int i = 0;

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
  printf("***  = = = = = = = = = Listagem  = = = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");

  login = (Login *)malloc(sizeof(Login));

  fp = fopen("login.bin", "rb");

  if (fp == NULL)
  {
    printf("Ops! Voce nao possui cadastro, por favor cadastre para depois listar!\n");
  }
  else
  {
    while (fread(login, sizeof(Login), 1, fp))
    {
      if (login->status != '0')
      {
        exibeUsuario(login);
        i++;
      }
    }
  }

  if (i > 0)
  {
    printf("Total de usuarios cadastrados: %d\n", i);
  }
  else
  {
    printf("Você não possui usuario cadastrado!\n");
  }

  getchar();
  free(login);
}




void escolha_usuario(char op)
{
  switch (op)
  {
    case '1':
      listar_usuarios();
      break;
    default:
      printf("Informe uma opcao valida\n");
      break;
  }
}


void relatorioFuncionario(void)
{
  char op;

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
  printf("***  = = = = = = = = = Funcionario = = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  1. Listagem por cadastrados                         ***\n");
  printf("***  2. Listagem por cpf                                 ***\n");
  printf("***  0. Voltar ao menu principal                         ***\n");
  printf("***                                                      ***\n");
  op = input();
  escolha_funcionario(op);
}

void listar_funcionario(void)
{
  FILE *fp;

  Funcionario *funcionario;

  int i = 0;

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
  printf("***  = = = = = = = = = Listagem  = = = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");

  funcionario = (Funcionario *)malloc(sizeof(Funcionario));

  fp = fopen("funcionarios.dat", "rb");

  if (fp == NULL)
  {
    printf("Ops! Voce nao possui cadastro, por favor cadastre para depois listar!\n");
  }
  else
  {
    while (fread(funcionario, sizeof(Funcionario), 1, fp))
    {
      if (funcionario->status == '1')
      {
        exibeFuncionario(funcionario);
        i++;
      }
    }
    fclose(fp);
  }

  if (i > 0)
  {
     printf("Total de funcionarios cadastrados: %d\n", i);
  }
  else
  {
    printf("Você não possui funcionario cadastrado!\n");
  }

  getchar();
  free(funcionario);
}

void listar_cpf(void)
{
  FILE *fp;

  Funcionario *funcionario;

  char cpf[17];

  int i = 0;

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
  printf("***  = = = = = = = = =  Listagem por cpf = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");

  funcionario = (Funcionario *)malloc(sizeof(Funcionario));

  fp = fopen("funcionarios.dat", "rb");

  printf("Informe o CPF para ser buscado: ");

  scanf(" %[0-9]", cpf);

  if (fp == NULL)
  {
    printf("Ops! Nao foi possivel fazer a listagem, por favor cadastre primeiro para depois listar!\n");
  }
  else
  {
    while (fread(funcionario, sizeof(Funcionario), 1, fp))
    {
      if (strcmp(funcionario->cpf, cpf) == 0 && funcionario->status != '1')
      {
        exibeFuncionario(funcionario);
        i++;
      }
    }
    fclose(fp);
  }

  if (i > 0)
  {
    printf("Total de funcionarios cadastrados com esse: %d\n", i);
  }
  else
  {
    printf("Nao foi encontrado nenhum funcionario com esse CPF!\n");
  }

  getchar();
  free(funcionario);
}

void escolha_funcionario(char op)
{
  switch (op)
  {
    case '1':
      listar_funcionario();
      break;
    case '2':
      listar_cpf();
      break;

    default:
      printf("Informe uma opcao valida\n");
      break;
  }
}

void relatorioAcervo(void)
{
  char op;

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
  printf("***  = = = = = = = = = Acervo  = = = = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  1. Listagem por cadastrados                         ***\n");
  printf("***  2. Listagem por ordem alfabetica                    ***\n");
  printf("***  0. Voltar ao menu principal                         ***\n");
  printf("***                                                      ***\n");
  op = input();
  escolha_acervo(op);
}

void listar_acervo(void)
{
  FILE *fp;

  Acervo *acervo;

  int i = 0;

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
  printf("***  = = = = = = = = = Listagem  = = = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");

  acervo = (Acervo *)malloc(sizeof(Acervo));

  fp = fopen("acervo.dat", "rb");

  if (fp == NULL)
  {
    printf("Ops! Livro nao possui cadastro, por favor cadastre o livro para depois listar!\n");
  }
  else
  {
    while (fread(acervo, sizeof(Acervo), 1, fp))
    {
      if (acervo->status == '1')
      {
        exibeLivro(acervo);
        i++;
      }
    }
    fclose(fp);
  }

  if (i > 0)
  {
     printf("Total de livros cadastrados: %d\n", i);
  }
  else
  {
    printf("Você não possui livro cadastrado!\n");
  }

  getchar();
  free(acervo);
}


void listar_acervo_alfabetico(void)
{
  FILE *fp;

  Acervo *acervo;

  Acervo *lista;

  Acervo *novo;

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
  printf("***  = = = = = Listagem alfabética de livros = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");

  fp = fopen("livros.dat", "rb");

  if (fp == NULL)
  {
    printf("Ops! Não foi possível fazer a listagem. Por favor, cadastre primeiro para depois listar!\n");
  }

  else
  {
    lista = NULL;

    acervo = (Acervo *)malloc(sizeof(Acervo));

    while (fread(acervo, sizeof(Acervo), 1, fp))
    {
      if (acervo->status != '1')
      {
        novo = (Acervo *)malloc(sizeof(Acervo));

        strcpy(novo->titulo, acervo->titulo);

        strcpy(novo->autor, acervo->autor);

        strcpy(novo->editora, acervo->editora);

        strcpy(novo->data_publicacao, acervo->data_publicacao);

        novo->status = acervo->status;
      }

      if (lista == NULL)
      {
        lista = novo;

        novo->prox = NULL;
      }

      else if (strcmp(novo->titulo, lista->titulo) < 0)
      {
        novo->prox = lista;

        lista = novo;
      }

      else
      {
        Acervo *anterior = lista;

        Acervo *atual = lista->prox;
 
        while ((atual != NULL) && strcmp(atual->titulo, novo->titulo) < 0)
        {
          anterior = atual;

          atual = atual->prox;
        }

        novo->prox = atual;

        anterior->prox = novo;
      }
    }
  }

  free(acervo);

  novo = lista;

  while (novo != NULL)
  {
    lista = lista->prox;

    free(novo);

    novo = lista;
  }

  fclose(fp);
  
}


void escolha_acervo(char op)
{
  switch (op)
  {
    case '1':
      listar_acervo();
      break;
    case '2':
      listar_acervo_alfabetico();
      break;

    default:
      printf("Informe uma opcao valida\n");
      break;
  }
}