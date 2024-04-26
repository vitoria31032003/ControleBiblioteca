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
#include "utildades.h"


///////////////////////////
/// Validador de Senha  ///
//////////////////////////




////////////////////////////////////
/// Validador de Nome Completo  ///
//////////////////////////////////

// ESTE CODIGO VERIFICA SE A STRING RECEBE APENAS LETRAS E ESPA�OS (RETORNA 1) OU N�O(RETORNA 0)

int val_nome_completo(char *nome_completo)
{
  for (int i = 0; nome_completo[i] != '\0'; i++)
  {
    if( (!isalpha(nome_completo[i]) || isspace(nome_completo[i])) )
    {
      return 0;
    }
  }
  return 1;
  
}

/// VALIDACAO PARA NOME COMPLETO - AUTORIA VIT�RIA GEOVANNA // https://github.com/vitoria31032003







////////////////////////////
/// Validador de CPF\ID  ///
///////////////////////////

// ESTE CODIGO VERIFICA SE O N�MERO DO CPF � V�LIDO RECEBENDO 11 CARACTERES SE S�O TODOS N�MEROS E 

// CALCULA OS N�MEROS VERIFICADORES (RETORNA 1) OU N�O(RETORNA 0)

// E, VERIFICA O FORMATO DO CPF, VERIFICANDO SE EST� NO FORMATO (111.111.111-11) E SE OS CARACTERES S�O TODOS N�MEROS (RETORNA 1) OU N�O(RETORNA 0)

bool validaCPF(char *cpf) {
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
        return 0;
    }

    return 1;
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
/// VALIDACAO PARA CPF - AUTORIA VIT�RIA GEOVANNA COM AJUDA DO CHAT-GPT // https://github.com/vitoria31032003







////////////////////////////////////////
/// Validador de Data de Nascimento  ///
///////////////////////////////////////

/// ESTE CODIGO VERIFCIA SE O DIA � V�LIDO PARA UM M�S ESPEC�FICO, LEVANDO EM CONSIDERA��O 

/// OS ANOS BISSEXTOS DE FEVEREIRO (RETORNA 1) OU N�O(RETORNA 0)

/// E OUTRA PARTE DO CODIGO VERIFICA O FORMATO DA DATA, VERIFICANDO SE EST� NO FORMATO (DD/MM/AAAA) E SE OS CARACTERES S�O TODOS N�MEROS (RETORNA 1) OU N�O(RETORNA 0)

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

                    printf("Data inv�lida\n");

                    return 0;
   }
 }
}
/// VALIDACAO PARA DATA - AUTORIA VIT�RIA GEOVANNA COM AJUDA DO CHAT-GPT // https://github.com/vitoria31032003







///////////////////////////////////////
/// Validador de Numero de Telefone ///
///////////////////////////////////////

/// ESTE CODIGO VERIFICA SE A STRING RECEBE APENAS N�MEROS E SE POSSUI TAMANHO ESPEC�FICO(RETORNA 1) OU N�O(RETORNA 0) 

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
} /// VALIDA��O PARA CELULAR - AUTOR FLAVIUS GORG�NIO // GIT: https://github.com/flaviusgorgonio




/// ESTE CODIGO VERFICA SE A STRING CONT�M APENAS N�MEROS, UM PONTO DECIMAL SEGUIDO POR DUAS CASAS DECIMAIS E 

/// SE O TAMANHO DA STRING N�O EXCEDE(RETORNA 1) OU N�O (RETORNA 0)

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
} /// VALIDA��O PARA N�MEROS DO TIPO FLOAT - RENAN COSTA // GIT: https://github.com/RenanCDev




/// ESTE CODIGO VERIFICA SE A STRING CONT�M APENAS N�MEROS PERCORRENDO CADA CARACTERE SE FOR UM NUMERO, 

/// SE O TAMANHO DA STRING N�O EXCEDE(RETORNA 1) OU N�O (RETORNA 0) 

int valid_numeros_s(char* variavel) {
	
    int tam_variavel;
    
    tam_variavel = strlen(variavel);
    
    for (int i = 0; i < tam_variavel; i++) {
    	
        if (!valid_digt(variavel[i])) {
        	
            return 0; 
        } 
    }
    return 1; 
} // ADAPTADA POR RENAN COSTA // GIT: https://github.com/RenanCDev - VALIDA��O PARA CELULAR - AUTOR FLAVIUS GORG�NIO // GIT: https://github.com/flaviusgorgonio
