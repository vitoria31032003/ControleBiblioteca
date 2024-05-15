///////////////////////////////////////////////////////////
/// Universidade Federal do Rio Grande do Norte         ///
/// Centro de Ensino Superior do Seridó                 ///
/// Departamento de Computação e Tecnologia             ///
/// Disciplina: Programação                             ///
/// Professor: Flavius Gorgônio                         ///
/// Projeto: Sistema de Controle de Biblioteca          ///
/// Aluna: Vitória Geovanna de Assis Pereira            ///
///////////////////////////////////////////////////////////


#ifndef CLIENTES_H
#define CLIENTES_H

typedef struct clintes Clientes;

struct clientes{
	
	char nome_completo[51];
	
	char cpf[17];
	
	char telefone[12];
	
	char data_nasc[11];
	
	int status;
	
};

void tela_menu_clientes_usuarios(void);
void solicitar_cadastro(void);
void solicitar_emprestimo(void);
void solicitar_renovacao(void);
void alterar_dados_pessoais(void);

#endif
