///////////////////////////////////////////////////////////
/// Universidade Federal do Rio Grande do Norte         ///
/// Centro de Ensino Superior do Serid�                 ///
/// Departamento de Computa��o e Tecnologia             ///
/// Disciplina: Programa��o                             ///
/// Professor: Flavius Gorg�nio                         ///
/// Projeto: Sistema de Controle de Biblioteca          ///
/// Aluna: Vit�ria Geovanna de Assis Pereira            ///
///////////////////////////////////////////////////////////
#include <stdbool.h>

#ifndef UTILIDADES_H
#define UTILIDADES_H

bool val_senha(char *senha);
void recebe_senha(char *senha);

int val_nome(char *nome);

bool val_CPF(char *cpf);
int recebe_cpf(char *cpf);


int val_data(int dia, int mes, int ano);
int recebe_data(char *data);

bool val_fone(char *fone);
int recebe_fone(char *fone);

void limparBufferEntrada(void);


#endif
