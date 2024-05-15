///////////////////////////////////////////////////////////
/// Universidade Federal do Rio Grande do Norte         ///
/// Centro de Ensino Superior do Seridó                 ///
/// Departamento de Computação e Tecnologia             ///
/// Disciplina: Programação                             ///
/// Professor: Flavius Gorgônio                         ///
/// Projeto: Sistema de Controle de Biblioteca          ///
/// Aluna: Vitória Geovanna de Assis Pereira            ///
///////////////////////////////////////////////////////////


#ifndef LOGIN_H
#define LOGIN_H

typedef struct login Login;

struct login{
	
	char cpf[17];
	
	char senha[20];
	
	int status;
	
};

void tela_menu_login(void);
void entrar_como_administrador(void);
void entrar_como_funcionario(void);
void entrar_como_cliente_usuario(void);
#endif
