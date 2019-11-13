
#include <iostream>
#include "stdafx.h"
#include "constantes.h"
#include "funcoes.h"
#include "medico.h"
#include "paciente.h"
#include "receita.h"
#include "convenio.h"
#include "consulta.h"
#include "medicacao.h"
#include "relatorio.h"
#include "dados.h"



int main()
{
	int opcao;
	posicaoMedico      = 0;
	posicaoPaciente    = 0;
	posicaoReceituario = 0;
	posicaoConvenio    = 0;
	posicaoConsulta    = 0;
	posicaoMedicacao   = 0;

	recuperaDados();
	do {
		exibirMenuPrincipal();
		cin >> opcao;
		if (opcao <= 0 || opcao > 8) {
			cout << "Opcao Invalida, redigite! " << endl;
			exibirMenuPrincipal();
			cin >> opcao;
		}

		switch (opcao) {
		case MEDICO:
			funcmedico();
			break;

		case PACIENTE:
			funcPaciente();
			break;

		case RECEITA:
			funcReceita();
			break;

		case CONVENIO:
			funcConvenio();
			break;

		case CONSULTA:
			funcConsultas();
			break;

		case MEDICACAO:
			funcMedicacao();
			break;

		case RELATORIO:
			gerarRelatorio(posicaoConsulta, posicaoMedicacao);
			break;

		case SAIR:
			opcao = sair();
			break;

		
		}

	} while (opcao > 0 && opcao <=8);
	gravarDados();
	return 0;
}
