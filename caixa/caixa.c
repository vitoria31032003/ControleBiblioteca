#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "caixa.h"

void ler_cpf(char *cpf) {
  int Cpf_val = 0;

  do {
    printf("CPF: ");

    // fgets(cpf, sizeof(cpf), stdin);
    scanf("%s", cpf);
    getchar();

    Cpf_val = val_CPF(cpf);

    if (!Cpf_val) {
      printf("CPF inválido. Por favor, insira apenas digitos\n");
    }
  } while (!Cpf_val);
}

void ler_nome_completo(char *nome_completo) {
  int nome_completo_val = 0;

  do {
    printf("Nome completo: ");

    fgets(nome_completo, 51, stdin);

    nome_completo_val = val_nome(nome_completo);

    if (!nome_completo_val)

    {
      printf("Nome inválido. Por favor, insira um nome válido.\n");
    }
  } while (!nome_completo_val);
}

void ler_data_nasc(char *data_nasc) {
  int data_val = 0;

  do {
    printf("Data de nascimento: ");

    // fgets(data_nasc, sizeof(data_nasc), stdin);
    scanf("%s", data_nasc);
    getchar();
    // printf("\n data: <%s>\n", data_nasc);

    data_val = recebe_data(data_nasc);
    // data_val = 1;

    if (!data_val)

    {
      printf("Data inválida. Por favor, insira uma data válida.\n");
    }
  } while (!data_val);
}
