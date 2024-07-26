///////////////////////////////////////////////////////////
/// Universidade Federal do Rio Grande do Norte         ///
/// Centro de Ensino Superior do Seridó                 ///
/// Departamento de Computação e Tecnologia             ///
/// Disciplina: Programação                             ///
/// Professor: Flavius Gorgônio                         ///
/// Projeto: Sistema de Controle de Biblioteca          ///
/// Aluna: Vitória Geovanna de Assis Pereira            ///
///////////////////////////////////////////////////////////

#ifndef FUNCIOARIOS_H
#define FUNCIOARIOS_H

typedef struct funcionario Funcionario;


struct funcionario{

  char nome_completo[51];

  char cpf[17];

  char data_nasc[11];

  char fone[15];

  int status;

  Funcionario *prox;


};

Funcionario *cadastrarFuncionario(void);
void gravaFuncionario(Funcionario *funcionario);
void pesquisarFuncionario(void);
void exibeFuncionario(Funcionario *funcionario);
void atualizarFuncionario(void);
void removerFuncionario(void);
void escolha_menu_funcionario(char);

#endif