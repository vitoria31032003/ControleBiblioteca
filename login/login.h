///////////////////////////////////////////////////////////
/// Universidade Federal do Rio Grande do Norte         ///
/// Centro de Ensino Superior do Seridó                 ///
/// Departamento de Computação e Tecnologia             ///
/// Disciplina: Programação                             ///
/// Professor: Flavius Gorgônio                         ///
/// Projeto: Sistema de Controle de Biblioteca          ///
/// Aluna: Vitória Geovanna de Assis Pereira            ///
///////////////////////////////////////////////////////////


typedef struct login Login;


struct login{
	
	char nome_completo[51];
	
	char cpf[17];
	
	char data_nasc[11];
	
	char senha[21];
	
	int status;

  Login* prox;

	
};

Login *cadastrarUsuario(void);
void gravaUsuario(Login *login);
void pesquisarUsuario(void);
void exibeUsuario(Login *login);
void atualizarCadastrado(void);
void removerUsuario(void);
void escolha_login(char);
void ler_nome_completo(char *);
void ler_cpf(char *cpf);
void ler_data_nasc(char *);
void ler_senha(char *senha);
void escolha_menu_login(char);