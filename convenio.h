#pragma once
int cadastrarConvenio(cconvenio vetor[TAMANHO], int posicao) {

	cconvenio prov;
	cout << "Digite o CODIGO do CONVENIO a ser cadastrado : " << endl;
	cin >> prov.codigo;
	cout << "Digite o NOME do Convenio  : " << endl;
	cin >> prov.nome;
	cout << "Digite o PLANO  : " << endl;
	cin >> prov.plano;
	cout << "Digite a VALIDADE :" << endl;
	cin >> prov.validade;
	vetor[posicao] = prov;
	posicao++;
	return posicao;
}

void exibirConvenio(cconvenio vetor[TAMANHO], int i, int posicao) {
	if (i == posicao) {
		cout << "---------------------------------------------------------------------------------" << endl;
		return;
	}
	if (i == 0) {
		cout << "---------------------------------------------------------------------------------" << endl;
	}
	cout << "----------------------------------------------------------" << endl;
	cout << "Posicao :        " << i << endl;
	cout << "CODIGO        -> " << vetor[i].codigo << endl;
	cout << "NOME          -> " << vetor[i].nome << endl;
	cout << "PLANO         -> " << vetor[i].plano << endl;
	cout << "VALIDADE      -> " << vetor[i].validade << endl;
	cout << "----------------------------------------------------------" << endl;
	exibirConvenio(vetor, i + 1, posicao);

}

void alterarConvenio(cconvenio vetor[TAMANHO], int posicao) {
	cconvenio prov;

	cout << "Selecione a posicao do CONVENIO a ser alterado:" << endl;
	exibirConvenio(listaConvenio, 0, posicaoConvenio);
	cin >> posicao;
	cout << "Digite o CODIGO do CONVENIO a ser cadastrado : " << endl;
	cin >> prov.codigo;
	cout << "Digite o NOME do Convenio  : " << endl;
	cin >> prov.nome;
	cout << "Digite o PLANO  : " << endl;
	cin >> prov.plano;
	cout << "Digite a VALIDADE :" << endl;
	cin >> prov.validade;
	vetor[posicao] = prov;

}

int excluirConvenio(cconvenio vetor[TAMANHO], int posicao) {
	cconvenio prov;



	cout << "Selecione a posicao do CONVENIO a ser excluido :" << endl;
	exibirConvenio(listaConvenio, 0, posicaoConvenio);
	cin >> posicao;

	while (posicao != posicaoMedico) {
		vetor[posicao] = listaConvenio[posicao + 1];
		posicao++;

	}
	return posicao - 1;
}


void funcConvenio() {
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
			posicaoConvenio = cadastrarConvenio(listaConvenio, posicaoConvenio);

			break;

		case LISTAR:
			exibirConvenio(listaConvenio, 0, posicaoConvenio);
			break;

		case ALTERAR:
			alterarConvenio(listaConvenio, posicaoConvenio);
			break;


		case EXCLUIR:
			posicaoConvenio = excluirConvenio(listaConvenio, posicaoConvenio);
			break;

		case VOLTAR:
			opcao = sair();
		default:
			break;


		}


	} while (opcao > 0 && opcao <= 7);
}