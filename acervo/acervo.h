///////////////////////////////////////////////////////////
/// Universidade Federal do Rio Grande do Norte         ///
/// Centro de Ensino Superior do Serid�                 ///
/// Departamento de Computa��o e Tecnologia             ///
/// Disciplina: Programa��o                             ///
/// Professor: Flavius Gorg�nio                         ///
/// Projeto: Sistema de Controle de Biblioteca          ///
/// Aluna: Vit�ria Geovanna de Assis Pereira            ///
///////////////////////////////////////////////////////////


typedef struct acervo Acervo;


struct acervo{

  char titulo[51];

  char autor[51];

  char editora[51];

  char data_publicacao[11];

  char isbn[16];

  int status;

  Acervo *prox;
};

Acervo *cadastrarLivro(void);
void gravaLivro(Acervo *acervo);
void pesquisarLivro(void);
void exibeLivro(Acervo *acervo);
void atualizarLivro(void);
void removerLivro(void);
void escolha_menu_acervo(char);