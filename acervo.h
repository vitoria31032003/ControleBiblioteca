///////////////////////////////////////////////////////////
/// Universidade Federal do Rio Grande do Norte         ///
/// Centro de Ensino Superior do Seridó                 ///
/// Departamento de Computação e Tecnologia             ///
/// Disciplina: Programação                             ///
/// Professor: Flavius Gorgônio                         ///
/// Projeto: Sistema de Controle de Biblioteca          ///
/// Aluna: Vitória Geovanna de Assis Pereira            ///
///////////////////////////////////////////////////////////


#ifndef ACERVO_H
#define ACERVO_H

typedef struct acervo Acervo;

struct acervo{
	
	char nome_titulo[51];
	
	char nome_autor[51];
	
	char isbn[20];
	
	int livros_disponiveis;
	
};

void tela_menu_acervo(void);
void cadastrar_livros(void);
void remover_livros(void);
void atualizar_livros(void);
void quantidade_livros(void);

#endif
