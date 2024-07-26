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
#include "acervo.h"
#include "utilidades.h"

void ler_titulo(char *titulo)
{
  int titulo_val = 0;

  do {

    printf("Título do livro: ");

    fgets(titulo, 51, stdin);

    titulo_val = val_nome(titulo);

    if(!titulo_val)

    {
      printf("Título do livro inválido. Por favor, insira um título válido.\n");
    }
  }while(!titulo_val);
}

void ler_autor(char *autor)
{
  int autor_val = 0;  

  do {

    printf("Nome completo do autor: ");

    fgets(autor, 51, stdin);

    autor_val = val_nome(autor);

    if(!autor_val)

    {
      printf("Nome completo do autor inválido. Por favor, insira um nome completo do autor válido.\n");
    }
  }while(!autor_val);
}

void ler_editora(char *editora)
{
  int editora_val = 0;

  do {

    printf("Nome da editora: ");

    fgets(editora, 51, stdin);

    editora_val = val_nome(editora);

    if(!editora_val)

    {
      printf("Nome da editora inválido. Por favor, insira um nome da editora válido.\n");
    }
  }while(!editora_val); 
}

void ler_data_publicacao(char *data_publicacao)
{
  int data_publicacao_val = 0;

  do {

    printf("Data da publicação: ");

    // fgets(data_publicacao, 11, stdin);

    scanf("%s", data_publicacao);

    data_publicacao_val = recebe_data(data_publicacao);  

    if(!data_publicacao_val)

    {
      printf("Data da publicação inválida. Por favor, insira uma data de publicação válida");
    }
  }while (!data_publicacao_val);
}

void ler_isbn(char *isbn)
{
  int isbn_val = 0;

  do {

    printf("ISBN: ");

    fgets(isbn, 14, stdin);

    isbn_val = val_isbn(isbn);

    if(!isbn_val)
    {
      printf("Tamnho do ISBN inválido. Por favor, insira um ISBN válido com 13 dígitos.\n");
    }
  }while(!isbn_val);
}


void tela_menu_acervo(void)
{
 char op;
 do{
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
   printf("***  = = = = = = = =  Menu Acervo  = = = = = = = = = = = ***\n");
   printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
   printf("***  =================================================== ***\n");
   printf("***                                                      ***\n");
   printf("***  1. Cadastrar um novo Livro                          ***\n");
   printf("***  2. Pesquisar dados do Livro                         ***\n");
   printf("***  3. Atualizar o cadastro de um Livro                 ***\n");
   printf("***  4. Remover um Livro                                 ***\n");
   printf("***  0. Voltar ao menu principal                         ***\n");
   printf("***                                                      ***\n");
   printf("***  Informe a opcao desejada:                           ***\n");
   printf("***                                                      ***\n");
   scanf("%c", &op);
   escolha_menu_acervo(op);
 } while(op != '0');
}

Acervo *cadastrarLivro(void)
{
  Acervo *acervo;
  acervo = (Acervo *)malloc(sizeof(Acervo));
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
  printf("***  = = = = Cadastrar um novo Livro = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  limparBufferEntrada();

  ler_titulo(acervo->titulo);

  ler_autor(acervo->autor);

  ler_editora(acervo->editora);

  ler_data_publicacao(acervo->data_publicacao);

  ler_isbn(acervo->isbn);

  acervo->status = 1;

  getchar();

  return acervo;
}

void gravaLivro(Acervo *acervo)
{
  FILE *fp;

  fp = fopen("acervo.bin", "ab");

  if (fp == NULL)
    {
      printf("Ops! Ocorreu um erro na abertura do arquivo");
      getchar();
    }

  fwrite(acervo, sizeof(Acervo), 1, fp);

  fclose(fp);

  free(acervo);
}

void exibeLivro(Acervo *acervo)
{
  char situacao[20];

  if ((acervo == NULL) || (acervo->status == 0))
  {
    printf("Livro não encontrado");
  }
  else{
    printf("Título: %s\n", acervo->titulo);
    printf("Autor: %s\n", acervo->autor);
    printf("Editora: %s\n", acervo->editora);
    printf("Data de publicação: %s\n", acervo->data_publicacao);
    printf("ISBN: %s\n", acervo->isbn);
    printf("Tecle <ENTER> para continuar\n");
  }
}

void pesquisarLivro(void)
{
  FILE *fp;

  Acervo *acervo;

  char isbn[21];

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
  printf("***  = = = = = Pesquisar dados do Livro  = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Informe o ISBN do livro que deseja pesquisar:       ***\n");
  printf("***                                                      ***\n");
  ler_isbn(isbn);

  acervo = (Acervo *)malloc(sizeof(Acervo));
  fp = fopen("acervo.bin", "rb");
  int encontrado = 0;

  if (fp == NULL)
  {
    printf("Ops! Ocorreu um erro na abertura do arquivo");
  }
  else
  {
    while (fread(acervo, sizeof(Acervo), 1, fp) == 1)
    {
      if((strcmp(acervo->isbn, isbn) == 0) && (acervo->status == 1))
      {
        encontrado = 1;
        exibeLivro(acervo);
        getchar();
      }
    }
    if(!encontrado)
    {
      printf("Livro não encontrado!");
      getchar();
    }
  }
  fclose(fp);
  free(acervo);
}

void atualizarLivro(void)
{
  char isbn[21];

  Acervo *acervo = (Acervo *)malloc(sizeof(Acervo));

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
  printf("***  = = = = = Atualizar dados do Livro  = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Informe o ISBN do livro que deseja atualizar:       ***\n");
  ler_isbn(isbn);
  getchar();
  if (fp == NULL)
    {
      printf("Ops! Ocorreu um erro na abertura do arquivo");
      getchar();
    }
  else
  {
    while (fread(acervo, sizeof(Acervo), 1, fp) == 1) {

      if (strcmp(acervo->isbn, isbn) == 0)
      {
        ler_titulo(acervo->titulo);

        ler_autor(acervo->autor);

        ler_editora(acervo->editora);

        ler_data_publicacao(acervo->data_publicacao);

        ler_isbn(acervo->isbn);

        acervo->status = 1;

        fseek(fp, (-1) * sizeof(Acervo), SEEK_CUR);

        fwrite(acervo, sizeof(Acervo), 1, fp);

        variavel = 1;

        break;
      }
    }
  }
  if (!variavel)
  {
    printf("Livro não encontrado!");
  }

  else
  {
    printf("Livro atualizado com sucesso!");
  }
  fclose(fp);
  free(acervo);
  getchar();
}  

void removerLivro(void)
{
  char isbn[21];

  Acervo *acervo = (Acervo *)malloc(sizeof(Acervo));

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
  printf("***  = = = = Remover Livro = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Informe o ISBN do livro que deseja remover:         ***\n");
  ler_isbn(isbn);
  getchar();
  fp = fopen("acervo.bin", "rb");

  if (fp == NULL){

    printf("Ops! Ocorreu um erro na abertura do arquivo\n");
    printf("Tecle <ENTRER> para voltar...\n");
    getchar();
  } else {

    while (fread(acervo, sizeof(Acervo), 1, fp) == 1) {

      if (strcmp(acervo->isbn, isbn) == 0) {

        printf("Livro encontrado!\n");

        printf("\n");

        acervo->status = 0;

        fseek(fp, -sizeof(Acervo), SEEK_CUR);

        fwrite(acervo, sizeof(Acervo), 1, fp);

        aux = 1;

        break;
      }
    }
  }
  if (!aux){
    printf("Livro não encontrado!");
  }else{
    printf("Livro removido com sucesso!");
  }
  fclose(fp);
  free(acervo);
  getchar();
}

void escolha_menu_acervo(char op) {
  Acervo *acervo;
  switch (op) {
    case '1':
      acervo = cadastrarLivro();
      gravaLivro(acervo);
      break;
    case '2':
      pesquisarLivro();
      getchar();
      break;
    case '3':
      atualizarLivro();
      getchar();
      break;
    case '4':
      removerLivro();
      getchar();
      break;
    default:
      printf("Informe uma opcao valida");
      break;