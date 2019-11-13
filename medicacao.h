#pragma once
int cadastrarMedicacao(cmedicacao vetor[TAMANHO], int posicao) {

	int resposta;
	cmedicacao prov;


	cout << "Selecione o  PACIENTE :" << endl;
	exibirPacientes(listaPaciente, 0, posicaoPaciente);
	cout << "Digite o NOME do paciente: " << endl;
	cin >> prov.codPaciente;
	exibirReceita(listaReceituario, 0, posicaoReceituario);
	cout << "Digite o Remedio da receita: " << endl;
	cin >> prov.codRemedio;
	cout << "Digite quantos DIAS dura o tratamento :" << endl;
	cin >> prov.dias;
	vetor[posicao] = prov;
	posicao++;
	return posicao;
}

void exibirMedicacao(cmedicacao vetor[TAMANHO], int i, int posicao) {
	if (i == posicao) {
		cout << "---------------------------------------------------------------------------------" << endl;
		return;
	}
	if (i == 0) {
		cout << "---------------------------------------------------------------------------------" << endl;
	}
	cout << "----------------------------------------------------------" << endl;
	cout << "Posicao : " << i << endl;


	cout << "NOME DO PACIENTE   ->" << vetor[i].codPaciente << endl;
	cout << "NOME DO REMEDIO    ->" << vetor[i].codRemedio << endl;
	cout << "DIAS DE TRATAMENTO ->" << vetor[i].dias << endl;


	cout << "----------------------------------------------------------" << endl;
	exibirMedicacao(vetor, i + 1, posicao);

}

void alterarMedicacao(cmedicacao vetor[TAMANHO], int posicao) {
	cmedicacao prov;

	cout << "Selecione a posicao da MEDICACAO a ser alterado:" << endl;
	exibirMedicacao(listaMedicacao, 0, posicaoMedicacao);
	cin >> posicao;
	cout << "Selecione o  PACIENTE :" << endl;
	exibirPacientes(listaPaciente, 0, posicaoPaciente);
	cout << "Digite o NOME do paciente: " << endl;
	cin >> prov.codPaciente;
	exibirReceita(listaReceituario, 0, posicaoReceituario);
	cout << "Digite o Remedio da receita: " << endl;
	cin >> prov.codRemedio;
	cout << "Digite quantos DIAS dura o tratamento :" << endl;
	cin >> prov.dias;

	vetor[posicao] = prov;

}

int excluirMedicacao(cmedicacao vetor[TAMANHO], int posicao) {
	cmedicacao prov;



	cout << "Selecione a posicao da MEDICACAO a ser excluido :" << endl;
	exibirMedicacao(listaMedicacao, 0, posicaoMedicacao);
	cin >> posicao;

	while (posicao != posicaoMedico) {
		vetor[posicao] = listaMedicacao[posicao + 1];
		posicao++;

	}
	return posicao - 1;
}

void funcMedicacao() {
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
			posicaoMedicacao = cadastrarMedicacao(listaMedicacao, posicaoMedicacao);
			break;

		case LISTAR:
			exibirMedicacao(listaMedicacao, 0, posicaoMedicacao);
			break;

		case ALTERAR:
			alterarMedicacao(listaMedicacao, posicaoMedicacao);
			break;


		case EXCLUIR:
			posicaoMedicacao = excluirMedicacao(listaMedicacao, posicaoMedicacao);
			break;

		case VOLTAR:
			opcao = sair();
		default:
			break;


		}


	} while (opcao > 0 && opcao <= 7);
}


