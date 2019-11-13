#pragma once
int cadastrarReceita(creceituario vetor[TAMANHO], int posicao) {

	creceituario prov;
	cout << "Digite o CODIGO do remedio a ser cadastrado : " << endl;
	cin >> prov.codigo;
	cout << "Digite o NOME do Remedio  : " << endl;
	cin >> prov.nomeRemedio;
	cout << "Digite a DOSAGEM : " << endl;
	cin >> prov.dosagem;
	cout << "Digite o INTERVALO de horas  : " << endl;
	cin >> prov.intervalo;
	vetor[posicao] = prov;
	posicao++;
	return posicao;
}

void exibirReceita(creceituario vetor[TAMANHO], int i, int posicao) {
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
	cout << "NOME          -> " << vetor[i].nomeRemedio << endl;
	cout << "DOSAGEM       -> " << vetor[i].dosagem << endl;
	cout << "INTERVALO     -> " << vetor[i].intervalo << endl;
	cout << "----------------------------------------------------------" << endl;
	exibirReceita(vetor, i + 1, posicao);

}

void alterarReceita(creceituario vetor[TAMANHO], int posicao) {
	creceituario prov;

	cout << "Selecione a posicao do REMEDIO a ser alterado:" << endl;
	exibirReceita(listaReceituario, 0, posicaoReceituario);
	cin >> posicao;
	cout << "Digite o CODIGO do remedio a ser cadastrado : " << endl;
	cin >> prov.codigo;
	cout << "Digite o NOME do Remedio  : " << endl;
	cin >> prov.nomeRemedio;
	cout << "Digite a DOSAGEM : " << endl;
	cin >> prov.dosagem;
	cout << "Digite o INTERVALO de horas  : " << endl;
	cin >> prov.intervalo;
	vetor[posicao] = prov;
}

int excluirReceita(creceituario vetor[TAMANHO], int posicao) {
	creceituario prov;



	cout << "Selecione a posicao do REMEDIO a ser excluido :" << endl;
	exibirReceita(listaReceituario, 0, posicaoReceituario);
	cin >> posicao;

	while (posicao != posicaoMedico) {
		vetor[posicao] = listaReceituario[posicao + 1];
		posicao++;

	}
	return posicao - 1;
}


void funcReceita() {
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
			posicaoReceituario = cadastrarReceita(listaReceituario, posicaoReceituario);
			break;

		case LISTAR:
			exibirReceita(listaReceituario, 0, posicaoReceituario);
			break;

		case ALTERAR:
			alterarReceita(listaReceituario, posicaoReceituario);
			break;


		case EXCLUIR:
			posicaoReceituario = excluirReceita(listaReceituario, posicaoReceituario);
			break;

		case VOLTAR:
			opcao = sair();
		default:
			break;


		}


	} while (opcao > 0 && opcao <= 7);
}
