/////////////////////////////////////////////////////////
///   Universidade Federal do Rio Grande do Norte     ///
///   Centro de Ensino Superior do Seridó             ///
///   Departamento de Computação e Tecnologia         ///
///   Disciplina: Programação                         ///
///   Professor: Flavius Gorgônio                     ///
///   Projeto: Sistema de Controle de Biblioteca      ///
///   Aluna: Vitória Geovanna de Assis Pereira        ///
/////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>



void tela_menu_principal(void);
void tela_menu_sobre(void);
void tela_desenvolvedora(void);
void tela_menu_login(void);
void tela_menu_funcionarios(void);
void tela_menu_estoque(void);
void entrar_como_administrador(void);
void entrar_como_funcionario(void);
void entrar_como_cliente_usuario(void);
void cadastrar_cliente_usuario(void);
void cadastrar_livros(void);
void liberar_emprestimo(void);
void liberar_renovacao(void);
void remover_livros(void);
void atualizar_livros(void);
void visualizar_livros(void);


int main(void){
  tela_menu_principal();
  tela_menu_sobre();
  tela_desenvolvedora();
  tela_menu_login();
  tela_menu_funcionarios();
  tela_menu_estoque();
  entrar_como_administrador();
  entrar_como_funcionario();
  entrar_como_cliente_usuario();
  cadastrar_cliente_usuario();
  cadastrar_livros();
  liberar_emprestimo();
  liberar_renovacao();
  remover_livros();
  atualizar_livros();
  visualizar_livros();
  return 0;
}



void tela_menu_principal(void){
    char op;
    system("clear||cls");
    printf("\n");
    printf("***************************************************************\n");
    printf("***   Universidade Federal do Rio Grande do Norte           ***\n");
    printf("***   Centro de Ensino Superior do Serido                   ***\n");
    printf("***   Departamento de Computacao e Tecnologia               ***\n");
    printf("***   Disciplina: Programacao                               ***\n");
    printf("***   Professor: Flavius Gorgonio                           ***\n");
    printf("***   Projeto: Sistema de Controle de Biblioteca            ***\n");
    printf("***   Aluna: Vitoria Geovanna de Assis Pereira              ***\n");
    printf("***                                                         ***\n");    
    printf("***************************************************************\n");
    printf("***                                                         ***\n");
    printf("***  = = = Sistema Controle de Biblioteca = = =             ***\n");
    printf("***                                                         ***\n");
    printf("***  1. Modulo Login                                        ***\n");
    printf("***  2. Modulo Funcioarios                                  ***\n");
    printf("***  3. Modulo Clientes/Usuarios                            ***\n");
    printf("***  4. Modulo Estoque                                      ***\n");
    printf("***  0. Sair                                                ***\n");
    printf("***                                                         ***\n");
    printf("***  Informe a opcao desejada:                              ***\n");
    printf("***                                                         ***\n");
    scanf("%c", &op);
    getchar();
    printf("///                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Pressione <ENTER> para continuar...\n");
    getchar();
}



void tela_menu_sobre(void){
   system("clear||cls");
   printf("\n");
   printf("**************************************************************\n");
   printf("***   Universidade Federal do Rio Grande do Norte          ***\n");
   printf("***   Centro de Ensino Superior do Serido                  ***\n");
   printf("***   Departamento de Computacao e Tecnologia              ***\n");
   printf("***   Disciplina: Programacao                              ***\n");
   printf("***   Professor: Flavius Gorgonio                          ***\n");
   printf("***   Projeto: Sistema de Controle de Biblioteca           ***\n");
   printf("***   Aluna: Vitoria Geovanna de Assis Pereira             ***\n");
   printf("***                                                        ***\n");    
   printf("**************************************************************\n");
   printf("***                                                        ***\n");
   printf("***   = = = Sistema Controle de Biblioteca = = =           ***\n");
   printf("***                                                        ***\n");
   printf("***   Programa utilizado na disciplina DC1106-Programacao, ***\n");
   printf("***   para fins avaliativo e aprendizado. O programa tem   ***\n");
   printf("***   os principais modulos e funcionalidades que o tema   ***\n");
   printf("***   deve ter.                                            ***\n");
   printf("***                                                        ***\n");
   printf("///                                                        ///\n");
   printf("//////////////////////////////////////////////////////////////\n");
   printf("\n");
   printf("\t Pressione <ENTER> para continuar...\n");
   getchar();
}



void tela_desenvolvedora(void){
  system("clear||cls");
  printf("\n");
  printf("**************************************************************\n");
  printf("***   Universidade Federal do Rio Grande do Norte          ***\n");
  printf("***   Centro de Ensino Superior do Serido                  ***\n");
  printf("***   Departamento de Computacao e Tecnologia              ***\n");
  printf("***   Disciplina: Programacao                              ***\n");
  printf("***   Professor: Flavius Gorgonio                          ***\n");
  printf("***   Projeto: Sistema de Controle de Biblioteca           ***\n");
  printf("***   Aluna: Vitoria Geovanna de Assis Pereira             ***\n");
  printf("***                                                        ***\n");    
  printf("**************************************************************\n");
  printf("***                                                        ***\n");
  printf("***   = = = Sistema Controle de Biblioteca = = =           ***\n");
  printf("***                                                        ***\n");
  printf("***   Este projeto foi desenvolvido por:                   ***\n");
  printf("***   Vitoria Geovanna de Assis Pereira                    ***\n");
  printf("***   Git: https://github.com/vitoria31032003              ***\n");
  printf("***   Rede social: @vitoriageovanna18                      ***\n");
  printf("\n");
  printf("\t Pressione <ENTER> para continuar...\n");
  getchar();

}



void tela_menu_login(void){
   char op;
   system("clear||cls");
   printf("\n");
   printf("************************************************************\n");
   printf("***                                                      ***\n");
   printf("***  =================================================== ***\n");
   printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
   printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
   printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
   printf("***  =================================================== ***\n");
   printf("************************************************************\n");
   printf("***                                                      ***\n");
   printf("***  =================================================== ***\n");
   printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
   printf("***  = = = = = = = =  Menu Login = = = = = = = = = = = = ***\n");
   printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
   printf("***  =================================================== ***\n");
   printf("***                                                      ***\n");
   printf("***  1. Entrar no sistema como administrador             ***\n");
   printf("***  2. Entrar no sistema como funcionario               ***\n"); 
   printf("***  3. Entrar no sistema como cliente/usuario           ***\n");
   printf("***  0. Voltar ao menu principal                         ***\n");
   printf("***                                                      ***\n");
   printf("***  Informe a opcao desejada:                           ***\n");
   printf("***                                                      ***\n");
   scanf("%c", &op);
   getchar();
   printf("///                                                      ///\n");
   printf("////////////////////////////////////////////////////////////\n");
   printf("\n");
   printf("\t\t\t>>> Pressione <ENTER> para continuar...\n");
   getchar();
}



void entrar_como_administrador(void){
  system("clear||cls");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = Entrar como Administrador = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Nome do Usuario:                                    ***\n");
  printf("***  Senha:                                              ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
}



void entrar_como_funcionario(void){
  system("clear||cls");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = Entrar como Funcionario = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Nome do Usuario:                                    ***\n");
  printf("***  Senha:                                              ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
}



void entrar_como_cliente_usuario(void){
  system("clear||cls");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = Entrar como Clientes/Usuario  = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Nome do Usuario:                                    ***\n");
  printf("***  Senha:                                              ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
}



void tela_menu_funcionarios(void){
   char op;
   system("clear||cls");
   printf("\n");
   printf("************************************************************\n");
   printf("***                                                      ***\n");
   printf("***  =================================================== ***\n");
   printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
   printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
   printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
   printf("***  =================================================== ***\n");
   printf("************************************************************\n");
   printf("***                                                      ***\n");
   printf("***  =================================================== ***\n");
   printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
   printf("***  = = = = = = = =  Menu Funcionarios  = = = = = = = = ***\n");
   printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
   printf("***  =================================================== ***\n");	
   printf("***                                                      ***\n");
   printf("***  1. Cadastrar Clientes/Usuarios                      ***\n");	
   printf("***  2. Liberar o Emprestimos de Livros                  ***\n");
   printf("***  3. Liberar a Renovacao de Livros                    ***\n");
   printf("***  0. Voltar ao menu principal                         ***\n");
   printf("***                                                      ***\n");
   printf("***  Informe a opcao desejada:                           ***\n");
   printf("***                                                      ***\n");
   scanf("%c", &op);
   getchar();
   printf("///                                                      ///\n");
   printf("////////////////////////////////////////////////////////////\n");
   printf("\n");
   printf("\t\t\t>>> Pressione <ENTER> para continuar...\n");
   getchar();
}


void cadastrar_cliente_usuario(void){
  system("clear||cls");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = Cadastrar Clientes/Usuario  = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Nome Completo:                                      ***\n");
  printf("***  Matricula (Apenas numero):                          ***\n");
  printf("***  Data de Nascimento (DD/MM/AAAA):                    ***\n");
  printf("***  Numero de Telefone:                                 ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
}



void liberar_emprestimo(void){
  system("clear||cls");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = = Liberar Emprestimo  = = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Matricula (Apenas numeros):                         ***\n");
  printf("***  ISBN:                                               ***\n");
  printf("***  Data do Empresimo:                                  ***\n");
  printf("***  Data da Devolucao:                                  ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
}


void liberar_renovacao(void){
  system("clear||cls");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = = Liberar Renovacao = = = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Nome do Usuario:                                    ***\n");
  printf("***  ISBN:                                               ***\n");
  printf("***  Data do Vecimento:                                  ***\n");
  printf("***  Data do Retorno:                                    ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
}


void tela_menu_estoque(void){
   char op;
   system("clear||cls");
   printf("\n");
   printf("************************************************************\n");
   printf("***                                                      ***\n");
   printf("***  =================================================== ***\n");
   printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
   printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
   printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
   printf("***  =================================================== ***\n");
   printf("************************************************************\n");
   printf("***                                                      ***\n");
   printf("***  =================================================== ***\n");
   printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
   printf("***  = = = = = = = =  Estoque = = = = = = =  = = = = = = ***\n");
   printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
   printf("***  =================================================== ***\n");	
   printf("***                                                      ***\n");
   printf("***  1. Cadastrar Livros                                 ***\n");
   printf("***  2. Remover Livros                                   ***\n");
   printf("***  3. Atualizar Livros                                 ***\n");
   printf("***  4. Visualizar Livros Disponiveis                    ***\n");	
   printf("***  0. Voltar ao menu principal                         ***\n");
   printf("***                                                      ***\n");
   printf("***  Informe a opcao desejada:                           ***\n");
   printf("***                                                      ***\n");
   scanf("%c", &op);
   getchar();
   printf("///                                                      ///\n");
   printf("////////////////////////////////////////////////////////////\n");
   printf("\n");
   printf("\t\t\t>>> Pressione <ENTER> para continuar...\n");
   getchar();
}



void cadastrar_livros(void){
  system("clear||cls");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = Cadastrar Livros  = = = = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Titulo:                                             ***\n");
  printf("***  ISBN:                                               ***\n");
  printf("***  Autor:                                              ***\n");
  printf("***  Livros Disponiveis:                                 ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
}



void remover_livros(void){
  system("clear||cls");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = = Remover Livros  = = = = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  ISBN:                                               ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
}


void atualizar_livros(void){
  system("clear||cls");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = = Atualizar Livros  = = = = = = = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  Informe ISBN:                                       ***\n");
  printf("***  Titulo:                                             ***\n");
  printf("***  Autor:                                              ***\n");
  printf("***  Livros Disponiveis:                                 ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
}


void visualizar_livros(void){
  system("clear||cls");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = Sistema de Controle de Biblioteca = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
  printf("***                                                      ***\n");
  printf("***  =================================================== ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  = = = = = Visualizar Livros Disponiveis = = = = = = ***\n");
  printf("***  = = = = = = = = = = = = = = = = = = = = = = = = = = ***\n");
  printf("***  =================================================== ***\n");
  printf("***                                                      ***\n");
  printf("***  ISBN:                                               ***\n");
  printf("***  Titulo:                                             ***\n");
  printf("***  Autor:                                              ***\n");
  printf("***  Livros Disponiveis:                                 ***\n");
  printf("***                                                      ***\n");
  printf("************************************************************\n");
}
