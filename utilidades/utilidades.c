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
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include "utilidades.h"


////////////////////////
/// Função de input  ///
////////////////////////
char input(void)
{
  char op;

  printf("Informe uma opcao: ");

  scanf("%c", &op);

  getchar();

  return op;
}

///////////////////////////
/// Validador de Senha  ///
//////////////////////////
bool val_senha(char *senha)
{

  int tam = strlen(senha);

  if (tam >= 8 && tam <= 20)
  {

    return 1;

  }

  else
  {

    return 0;

  }
}

void recebe_senha(char *senha_struct)
{

    int val = 0;

    char senha[21]; 

    while (val != 1)
    {

        if(val_senha(senha))
        {
            strcpy(senha_struct, senha);

            val = 1;
        }

        else

        {

            printf("Senha invalida. Tente novamente.\n");

        }
    }
}
/// Autora: Vitoria Geovanna de Assis Pereira /// GIT: https://github.com/vitoria31032003




//////////////////////////
/// Validador de Nome  ///
//////////////////////////
int val_nome(char *nome)
{
  for (int i = 0; nome[i] != '\0'; i++)
  {
    if( !(isalpha(nome[i]) || isspace(nome[i])) )
    {
      return 0;
    }
  }
  return 1;

}
/// Autora: Vitoria Geovanna de Assis Pereira /// GIT: https://github.com/vitoria31032003



////////////////////////////
/// Validador de CPF\ID  ///
///////////////////////////
bool val_CPF(char *cpf)
{
  int tam = strlen(cpf);
  int soma = 0;
  int d1 = 0;
  int d2 = 0; 

  if (tam != 11)
  {
    return false;
  }

  for (int i = 0; i < 11; i++)
  {
    if (cpf[i] < '0' || cpf[i] > '9')
    {
      return false;
    }
  }

  for (int i = 0; i < 9; i++)
  {
    soma += (cpf[i] - '0') * (10 - i);
  }
  d1 = 11 - (soma % 11);
  if (d1 == 10 || d1 == 11)
  {
    d1 = 0;
  }
  if (d1 != (cpf[9] - '0'))
  {
    return false;
  }

  soma = 0;
  for (int i = 0; i < 10; i++)
  {
    soma += (cpf[i] - '0') * (11 - i);
  }
  d2 = 11 - (soma % 11);
  if (d2 == 10 || d2 == 11)
  {
    d2 = 0;
  }
  if (d2 != (cpf[10] - '0'))
  {
    return false;
  }

  return true;
}

int recebe_cpf(char *cpf)
{
  int i;

  if((strlen(cpf) == 14) && ((cpf[3] == '.') && (cpf[7] == '.') && (cpf[11] == '-')))
  {

    for (i = 0; i < 14; i++)
    {
      if ((i != 3) && (i != 7) && (i != 11))
      {
        if(!isdigit(cpf[i]))
        {
          printf("invalido\n");
          return 0;
        }
      }
    }

  }
  return 1;
}
/// Autora: Vitoria Geovanna de Assis Pereira com ajuda CHAT-PT /// GIT: https://github.com/vitoria31032003


////////////////////////////////////////
/// Validador de Data de Nascimento  ///
////////////////////////////////////////
int val_data(int dia, int mes, int ano)
{

  if (ano < 0 || mes < 1 || mes > 12)
  {
    return 0;
  }

  if (mes == 2)
  {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
      if (dia < 1 || dia > 29)
      {
        return 0;
      }
    }
    else
    {
      if (dia < 1 || dia > 28)
      {
        return 0;
      }
    }
  }
  else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
  {
    if (dia < 1 || dia > 30)
    {
      return 0;
    }
  }
  else
  {
    if (dia < 1 || dia > 31)
    {
      return 0;
    }
  }

  return 1;
}



int recebe_data(char *data) {
        int i;
        char data_aux[30], dia[3], mes[3], ano[5];

        if (strlen(data) == 10 && data[2] == '/' && data[5] == '/') {

                for (i = 0; i < 10; i++) {

                        if ((i != 2) && (i != 5)) {

                                if (!isdigit(data[i])) {

                                        printf("Data inválida\n");

                                        return 0;
                                }
                        }
                }

                char* aux = strtok(data, "/");

                if(aux != NULL)

                    strcpy(dia, aux);

                aux = strtok(NULL, "/");

                if(aux != NULL)

                    strcpy(mes, aux);

                aux = strtok(NULL, "/");    

                if(aux != NULL)

                    strcpy(ano, aux);

                int dia_int = atoi(dia);

                int mes_int = atoi(mes);

                int ano_int = atoi(ano);

                if (val_data(dia_int, mes_int, ano_int)) {

                    printf("Data válida\n");

                    return 1;
                }
                else {

                        return 0;
                }
        }
            return 1;
}
/// Autora: Vitoria Geovanna de Assis Pereira com ajuda CHAT-PT /// GIT: https://github.com/vitoria31032003



///////////////////////////////////////
/// Validador de Numero de Telefone ///
//////////////////////////////////////
bool val_fone(char *fone) {

    int i;

    if ((strlen(fone) == 14) && ((fone[0] != '(') && fone[3] != ')' && fone[9] != '-')) {

        return false;

    }

    for (i = 0; i < 14; i++) {

        if ((i != 0) && (i != 3) && (i != 9)) {

            if (!isdigit(fone[i])) {

                printf("Invlido\n");

                return false;
            }
        }
    }

    return true;
}

int recebe_fone(char *fone) {

    int controle = 0;

    while (controle == 0) {

        if (val_fone(fone)) {

            controle = 1;

        } else {

            printf("Numero de telefone invalido. Tente novamente.\n");

        }
    }

    return 1;
}
/// Autora: Vitoria Geovanna de Assis Pereira com ajuda CHAT-PT /// GIT: https://github.com/vitoria31032003


/////////////////////////
/// Validador do ISBN ///
////////////////////////
bool val_isbn(char *isbn)
{
  int i;

  if (strlen(isbn) != 13)
  {
    printf("O ISBN deve conter exatamente 13 dígitos.\n");

    return false;
  }

  for (i = 0; i < 13; i++)
  {
    if (!isdigit(isbn[i]))
    {
      printf("O ISBN deve conter apenas dígitos.\n");
      return false;
    }
  }
  return true;
}

int recebe_isbn(char *isbn)
{
  int controle = 0;

  while (controle == 0){
    // printf("Digite o ISBN: ");

    // fgets(isbn, 14, stdin);

    if (val_isbn(isbn)) {

      controle = 1;

    }else {

      printf("ISBN inválido. Tente novamente.\n");


    }
  }
  return 1;
}


////////////////////////
/// Limpar o Buffer ///
//////////////////////
void limparBufferEntrada() {

  int c;

  while ((c = getchar()) != '\n' && c != EOF);
}
