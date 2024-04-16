///////////////////////////////////////////////////////////
/// Universidade Federal do Rio Grande do Norte         ///
/// Centro de Ensino Superior do Seridó                 ///
/// Departamento de Computação e Tecnologia             ///
/// Disciplina: Programação                             ///
/// Professor: Flavius Gorgônio                         ///
/// Projeto: Sistema de Controle de Biblioteca          ///
/// Aluna: Vitória Geovanna de Assis Pereira            ///
///////////////////////////////////////////////////////////


#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

void tela_menu_principal(void);

void tela_menu_login(void);
void entrar_como_administrador(void);
void entrar_como_funcionario(void);
void entrar_como_cliente_usuario(void);

void tela_menu_funcionarios(void);
void cadastrar_cliente_usuario(void);
void liberar_emprestimo(void);
void liberar_renovacao(void);
void registar_devolucao(void);

void tela_menu_clientes_usuarios(void);
void solicitar_cadastro(void);
void solicitar_emprestimo(void);
void solicitar_renovacao(void);
void alterar_dados_pessoais(void);

void tela_menu_acervo(void);
void cadastrar_livros(void);
void remover_livros(void);
void atualizar_livros(void);
void quantidade_livros(void);

#endif
