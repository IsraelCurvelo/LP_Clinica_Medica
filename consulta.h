#pragma once
int cadastrarConsulta(cconsulta vetor[TAMANHO], int posicao) {

	cconsulta prov;

	cout << "Selecione o MEDICO disponivel para consulta :" << endl;
	exibirMedicos(listaMedico, 0, posicaoMedico);
	cout << "Digite o NOME  do Medico : " << endl;
	cin >> prov.codMedico;
	cout << "Selecione o  PACIENTE :" << endl;
	exibirPacientes(listaPaciente, 0, posicaoPaciente);
	cout << "Digite o NOME do paciente: " << endl;
	cin >> prov.codPaciente;
	cout << "Digite a DATA e HORARIO da consulta : " << endl;
	cin >> prov.data;

	vetor[posicao] = prov;
	posicao++;
	return posicao;
}


void exibirConsultas(cconsulta vetor[TAMANHO], int i, int posicao) {
	if (i == posicao) {
		cout << "---------------------------------------------------------------------------------" << endl;
		return;
	}
	if (i == 0) {
		cout << "---------------------------------------------------------------------------------" << endl;
	}
	cout << "----------------------------------------------------------" << endl;
	cout << "Posicao : " << i << endl;

	cout << "NOME DO MEDICO   -> " << vetor[i].codMedico   << endl;
	cout << "NOME DO PACIENTE -> " << vetor[i].codPaciente << endl;
	cout << "DATA CONSULTA    -> " << vetor[i].data        << endl;

	cout << "----------------------------------------------------------" << endl;
	exibirConsultas(vetor, i + 1, posicao);

}

void alterarConsulta(cconsulta vetor[TAMANHO], int posicao) {
	cconsulta prov;

	cout << "Selecione a posicao da CONSULTA a ser alterado:" << endl;
	exibirConsultas(listaConsulta, 0, posicaoConsulta);
	cin >> posicao;
	cout << "Selecione o MEDICO disponivel para consulta :" << endl;
	exibirMedicos(listaMedico, 0, posicaoMedico);
	cout << "Digite o NOME  do Medico : " << endl;
	cin >> prov.codMedico;
	cout << "Selecione o  PACIENTE :" << endl;
	exibirPacientes(listaPaciente, 0, posicaoPaciente);
	cout << "Digite o NOME do paciente: " << endl;
	cin >> prov.codPaciente;
	cout << "Digite a DATA e HORARIO da consulta : " << endl;
	cin >> prov.data;

	vetor[posicao] = prov;
}


int excluirConsulta(cconsulta vetor[TAMANHO], int posicao) {
	cconsulta prov;



	cout << "Selecione a posicao da CONSULTA a ser excluido :" << endl;
	exibirConsultas(listaConsulta, 0, posicaoConsulta);
	cin >> posicao;

	while (posicao != posicaoMedico) {
		vetor[posicao] = listaConsulta[posicao + 1];
		posicao++;

	}
	return posicao - 1;
}

void funcConsultas() {
	int opcao;

	do {
		exibirOpcoes();
		cin >> opcao;
		if (opcao < 0 || opcao > 5) {
			cout << "Opcao Invalida, redigite! " << endl;
			cin >> opcao;
		}

		switch (opcao) {
		case CADASTRAR:
			posicaoConsulta = cadastrarConsulta(listaConsulta, posicaoConsulta);
			break;

		case LISTAR:
			exibirConsultas(listaConsulta, 0, posicaoConsulta);
			break;

		case ALTERAR:
			alterarConsulta(listaConsulta, posicaoConsulta);
			break;


		case EXCLUIR:
			posicaoConsulta = excluirConsulta(listaConsulta, posicaoConsulta);
			break;

		case VOLTAR:
			opcao = sair();
		default:
			break;


		}


	} while (opcao > 0 && opcao <= 7);
}


