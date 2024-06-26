///////////////////////////////////////////////////////////
/// Universidade Federal do Rio Grande do Norte         ///
/// Centro de Ensino Superior do Seridó                 ///
/// Departamento de Computação e Tecnologia             ///
/// Disciplina: Programação                             ///
/// Professor: Flavius Gorgônio                         ///
/// Projeto: Sistema de Controle de Biblioteca          ///
/// Aluna: Vitória Geovanna de Assis Pereira            ///
///////////////////////////////////////////////////////////


#ifndef FUNCIONARIOS_H
#define FUNCIONARIOS_H

typedef struct funcionarios Funcionarios;

struct funcionarios{
	
	char nome_completo[51];
	
	char cpf[17];
	
	char isbn[20];
	
	char data_nasc[11];
	
	char telefone[15];
	
	int status;
	
};

void tela_menu_funcionarios(void);
void cadastrar_cliente_usuario(void);
void liberar_emprestimo(void);
void liberar_renovacao(void);
void registar_devolucao(void);
    	
#endif
