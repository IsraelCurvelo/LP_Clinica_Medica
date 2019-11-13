#pragma once
int cadastrarPaciente(cpaciente vetor[TAMANHO], int posicao) {

	cpaciente prov;
	cout << "Digite o CODIGO do paciente a ser cadastrado : " << endl;
	cin >> prov.codigo;
	cout << "Digite o NOME do Paciente  : " << endl;
	cin >> prov.nome;
	cout << "Digite o CPF : " << endl;
	cin >> prov.cpf;
	cout << "Digite os sintomas  : " << endl;
	cin >> prov.sintomas;
	cout << "Digite o CONVENIO do paciente :" << endl;
	cin >> prov.convenio;
	vetor[posicao] = prov;
	posicao++;
	return posicao;
}

void exibirPacientes(cpaciente vetor[TAMANHO], int i, int posicao) {
	if (i == posicao) {
		cout << "---------------------------------------------------------------------------------" << endl;
		return;
	}
	if (i == 0) {
		cout << "---------------------------------------------------------------------------------" << endl;
	}
	cout << "----------------------------------------------------------" << endl;
	cout << "Posicao : " << i << endl;
	cout << "CODIGO        -> " << vetor[i].codigo << endl;
	cout << "NOME          -> " << vetor[i].nome << endl;
	cout << "CPF           -> " << vetor[i].cpf << endl;
	cout << "CONVENIO      -> " << vetor[i].convenio << endl;
	cout << "SINTOMAS      -> " << vetor[i].sintomas << endl;
	cout << "----------------------------------------------------------" << endl;
	exibirPacientes(vetor, i + 1, posicao);

}

void alterarPaciente(cpaciente vetor[TAMANHO], int posicao) {
	cpaciente prov;

	cout << "Selecione a posicao do PACIENTE a ser alterado:" << endl;
	exibirPacientes(listaPaciente, 0, posicaoPaciente);
	cin >> posicao;
	cout << "Digite o CODIGO do paciente a ser alterado : " << endl;
	cin >> prov.codigo;
	cout << "Digite o NOME do Paciente  : " << endl;
	cin >> prov.nome;
	cout << "Digite o CPF : " << endl;
	cin >> prov.cpf;
	cout << "Digite os sintomas  : " << endl;
	cin >> prov.sintomas;
	cout << "Digite o CONVENIO do paciente :" << endl;
	cin >> prov.convenio;
	vetor[posicao] = prov;

}

int excluirPaciente(cpaciente vetor[TAMANHO], int posicao) {
	cpaciente prov;



	cout << "Selecione a posicao do PACIENTE a ser excluido :" << endl;
	exibirPacientes(listaPaciente, 0, posicaoPaciente);
	cin >> posicao;

	while (posicao != posicaoMedico) {
		vetor[posicao] = listaPaciente[posicao + 1];
		posicao++;

	}
	return posicao - 1;
}

void funcPaciente() {
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
			posicaoPaciente = cadastrarPaciente(listaPaciente, posicaoPaciente);

			break;

		case LISTAR:
			exibirPacientes(listaPaciente, 0, posicaoPaciente);
			break;

		case ALTERAR:

			alterarPaciente(listaPaciente, posicaoPaciente);

			break;


		case EXCLUIR:
			posicaoPaciente = excluirPaciente(listaPaciente, posicaoPaciente);
			break;

		case VOLTAR:
			opcao = sair();
		default:
			break;


		}


	} while (opcao > 0 && opcao <= 7);
}