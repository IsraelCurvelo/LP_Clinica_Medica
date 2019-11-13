#pragma once
int cadastrarMedico(cmedico vetor[TAMANHO], int posicao) {

	cmedico prov;
	cout << "Digite o CODIGO do Medico a ser cadastrado : " << endl;
	cin >> prov.codigo;
	cout << "Digite o NOME do Medico  : " << endl;
	cin >> prov.nome;
	cout << "Digite o CPF : " << endl;
	cin >> prov.cpf;
	cout << "Digite a ESPECIALIDADE  : " << endl;
	cin >> prov.especialidade;

	vetor[posicao] = prov;
	posicao++;
	return posicao;
}

void exibirMedicos(cmedico vetor[TAMANHO], int i, int posicao) {
	if (i == posicao) {
		cout << "---------------------------------------------------------------------------------" << endl;
		return;
	}
	if (i == 0) {
		cout << "---------------------------------------------------------------------------------" << endl;
	}
	cout << "----------------------------------------------------------" << endl;
	cout << "Posicao : " << i << endl;
	cout << "CODIGO        -> " << vetor[i].codigo        << endl;
	cout << "NOME          -> " << vetor[i].nome          << endl;
	cout << "CPF           -> " << vetor[i].cpf           << endl;
	cout << "ESPECIALIDADE -> " << vetor[i].especialidade << endl;
	cout << "----------------------------------------------------------" << endl;
	exibirMedicos(vetor, i + 1, posicao);

}

void alterarMedico(cmedico vetor[TAMANHO], int posicao) {
	cmedico prov;

	cout << "Selecione a posicao do MEDICO a ser alterado:" << endl;
	exibirMedicos(listaMedico, 0, posicaoMedico);
	cin >> posicao;
	cout << "Digite o CODIGO do Medico a ser cadastrado : " << endl;
	cin >> prov.codigo;
	cout << "Digite o NOME do Medico  : " << endl;
	cin >> prov.nome;
	cout << "Digite o CPF : " << endl;
	cin >> prov.cpf;
	cout << "Digite a ESPECIALIDADE  : " << endl;
	cin >> prov.especialidade;

	vetor[posicao] = prov;

}

int excluirMedico(cmedico vetor[TAMANHO], int posicao) {
	cmedico prov;



	cout << "Selecione a posicao do MEDICO a ser excluido :" << endl;
	exibirMedicos(listaMedico, 0, posicaoMedico);
	cin >> posicao;

	while (posicao != posicaoMedico) {
		vetor[posicao] = listaMedico[posicao + 1];
		posicao++;

	}
	return posicao - 1;
}



void funcmedico() {
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
			posicaoMedico = cadastrarMedico(listaMedico, posicaoMedico);
			break;

		case LISTAR:
			exibirMedicos(listaMedico, 0, posicaoMedico);
			break;

		case ALTERAR:
			alterarMedico(listaMedico, posicaoMedico);
			break;


		case EXCLUIR:
			posicaoMedico = excluirMedico(listaMedico, posicaoMedico);
			break;

		case VOLTAR:
			opcao = sair();
		default:
			break;


		}


	} while (opcao > 0 && opcao <= 7);
}

