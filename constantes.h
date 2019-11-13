#pragma once
#define MEDICO                    1
#define PACIENTE                  2
#define RECEITA                   3
#define CONVENIO                  4
#define CONSULTA                  5
#define MEDICACAO                 6
#define RELATORIO                 7
#define SAIR                      8

#define CADASTRAR   1
#define LISTAR      2
#define ALTERAR     3
#define EXCLUIR     4
#define VOLTAR      5
#define TAMANHO     100


int posicaoMedico;

typedef struct cmedico {
	char codigo[30];
	char nome[50];
	char cpf[11];
	char especialidade[50];
};

cmedico listaMedico[TAMANHO];

int posicaoPaciente;

typedef struct cpaciente {
	char codigo[30];
	char nome[50];
	char cpf[11];
	char convenio[50];
	char sintomas[50];
};

cpaciente listaPaciente[TAMANHO];


int posicaoReceituario;

typedef struct creceituario {
	char codigo[30];
	char nomeRemedio[50];
	char dosagem[11];
	char intervalo[50];
};

creceituario listaReceituario[TAMANHO];


int posicaoConvenio;
typedef struct cconvenio {
	char codigo[30];
	char nome[50];
	char plano[50];
	char validade[50];
};

cconvenio listaConvenio[TAMANHO];


int posicaoConsulta;

typedef struct cconsulta {

	char codPaciente[50];
	char codMedico[50];
	char data[50];
};

cconsulta listaConsulta[TAMANHO];

int posicaoMedicacao;

typedef struct cmedicacao {
	char codPaciente[50];
	char codRemedio[50];
	char dias[50];
};

cmedicacao listaMedicacao[TAMANHO];
