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
void tela_menu_cliente_usuario(void);
void tela_menu_estoque(void);


int main(void){
  tela_menu_principal();
  tela_menu_sobre();
  tela_desenvolvedora();
  tela_menu_login();
  tela_menu_funcionarios();
  tela_menu_cliente_usuario();
  tela_menu_estoque();
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
    printf("***                                                       	***\n");    
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
  printf("***   Vitoria Geovanna de Assis Pereira	             ***\n");
  printf("***   Git: https://github.com/vitoria31032003              ***\n");
  printf("***   Rede social: @vitoriageovanna18                      ***\n");
  printf("\n");
  printf("\t Pressione <ENTER> para continuar...\n");
  getchar();

}
