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
#include "utildades.h"


///////////////////////////
/// Validador de Senha  ///
//////////////////////////
bool val_senha(char *senha){

  int tam = strlen(senha);

  if (tam >= 8 && tam <= 20){
    
    return 1;

  }

  else{

    return 0;

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
bool val_CPF(char *cpf) {
    int tam = strlen(cpf);
    int soma = 0;
    int d1 = 0;
    int d2 = 0;

    if (tam != 11) {
        return false;
    }

    for (int i = 0; i < 11; i++) {
        if (cpf[i] < '0' || cpf[i] > '9') {
            return false;
        }
    }

    for (int i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (10 - i);
    }
    d1 = 11 - (soma % 11);
    if (d1 == 10 || d1 == 11) {
        d1 = 0;
    }
    if (d1 != (cpf[9] - '0')) {
        return false;
    }

    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += (cpf[i] - '0') * (11 - i);
    }
    d2 = 11 - (soma % 11);
    if (d2 == 10 || d2 == 11) {
        d2 = 0;
    }
    if (d2 != (cpf[10] - '0')) {
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
int val_data(int dia, int mes, int ano) {
    if (ano < 0 || mes < 1 || mes > 12) {       
        return 0;
    }

    if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            if (dia < 1 || dia > 29) { 
                return 0;
            } 
        }
        else {
            if (dia < 1 || dia > 28) {
                return 0;
            }
        }
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia < 1 || dia > 30) {
            return 0;
        }
    } 
    else {
        if (dia < 1 || dia > 31) { 
            return 0;
        }    
    }

    return 1;
}

int recebe_data(char *data) {
    int i;
    int dia, mes, ano;

    if (strlen(data) == 10 && data[2] == '/' && data[5] == '/') {

        for (i = 0; i < 10; i++) {

            if ((i != 2) && (i != 5)) {

                if (!isdigit(data[i])) {

                    printf("Data invalida\n");

                    return 0;
                }
            }
        }

        
        dia = atoi(data);
        mes = atoi(data + 3);
        ano = atoi(data + 6);

        
        if (val_data(dia, mes, ano)) {
          printf("Data valida\n");
            return 1;
        }
        else {
            printf("Data invalida\n");
            return 0;
        }
    }
      return 1;
}
/// Autora: Vitoria Geovanna de Assis Pereira com ajuda CHAT-PT /// GIT: https://github.com/vitoria31032003



///////////////////////////////////////
/// Validador de Numero de Telefone ///
//////////////////////////////////////
int valid_numeros(char* variavel, char tam) {
    
    int tam_variavel;

    tam_variavel = strlen(variavel);

    if (tam_variavel != tam) {
        
        return 0; 

    }

    for (int i = 0; i < tam; i++) {

        if (!valid_digt(variavel[i])) {
            
            return 0; 
        } 
    }
    return 1; 
} // ADAPTADO POR RENAN COSTA // https://github.com/RenanCDev - VALIDAÇÃO PARA CELULAR - AUTOR FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


int valid_numeros_f(char* variavel, int tam) {

    int tam_variavel;

    tam_variavel = strlen(variavel);

    if (tam_variavel > tam) {

        return 0;

    }
    
    for (int i = 0; i < tam_variavel; i++) {

        if (!valid_digt(variavel[i])) {

            if ((variavel[i] == '.') && (i  == (tam_variavel - 3))){

                for (i++; i < tam_variavel; i++) {

                    if (!valid_digt(variavel[i])) {

                        return 0;

                    }

                    return 1;

                }
          
            } else {

                    return 0;
            }
        }
    } 
    return 0;
} // AUTOR - RENAN COSTA // GIT: https://github.com/RenanCDev

int valid_numeros_s(char* variavel) {
    
    int tam_variavel;
    
    tam_variavel = strlen(variavel);
    
    for (int i = 0; i < tam_variavel; i++) {
    
        if (!valid_digt(variavel[i])) {
    
            return 0; 
    
        } 
    
    }
    
    return 1; 
} // ADAPTADO POR RENAN COSTA // https://github.com/RenanCDev - VALIDAÇÃO PARA CELULAR - AUTOR FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio
