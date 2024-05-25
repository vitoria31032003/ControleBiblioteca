///////////////////////////////////////////////////////////
/// Universidade Federal do Rio Grande do Norte         ///
/// Centro de Ensino Superior do Seridó                 ///
/// Departamento de Computação e Tecnologia             ///
/// Disciplina: Programação                             ///
/// Professor: Flavius Gorgônio                         ///
/// Projeto: Sistema de Controle de Biblioteca          ///
/// Aluna: Vitória Geovanna de Assis Pereira            ///
///////////////////////////////////////////////////////////


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

#endif
