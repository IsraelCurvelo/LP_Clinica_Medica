#pragma once
void gerarRelatorioMedico(int posicaoMedico) {
	FILE* arquivo;
	fopen_s(&arquivo, "RELATORIO_MEDICOS_CADASTRADOS.TXT", "w+");
	for (int i = 0; i < posicaoMedico; i++) {
		fprintf(arquivo, "*************************************************************************");
		fprintf(arquivo, "\nCODIGO DO MEDICO--> ");
		fprintf(arquivo, listaMedico[i].codigo);
		fprintf(arquivo, "\nNOME DO MEDICO----> ");
		fprintf(arquivo, listaMedico[i].nome);
		fprintf(arquivo, "\nCPF---------------> ");
		fprintf(arquivo, listaMedico[i].cpf);
		fprintf(arquivo, "\nESPECIALIDADE-----> ");
		fprintf(arquivo, listaMedico[i].especialidade);
		fprintf(arquivo, "\r\n");
		
	}

	fclose(arquivo);
	system("cls");
	cout << "\n Arquivo gerado com sucesso\n " << "Por favor acesse local \n\n ";
	system("pause");
}

void gerarRelatorioPaciente(int posicaoPaciente) {
	FILE* arquivo;
	fopen_s(&arquivo, "RELATORIO_PACIENTES_CADASTRADOS.TXT", "w+");
	for (int i = 0; i < posicaoPaciente; i++) {
		fprintf(arquivo, "*************************************************************************");
		fprintf(arquivo, "\nCODIGO DO PACIENTE--> ");
		fprintf(arquivo, listaPaciente[i].codigo);
		fprintf(arquivo, "\nNOME DO PACIENTE----> ");
		fprintf(arquivo, listaPaciente[i].nome);
		fprintf(arquivo, "\nCPF-----------------> ");
		fprintf(arquivo, listaPaciente[i].cpf);
		fprintf(arquivo, "\nCONVENIO -----------> ");
		fprintf(arquivo, listaPaciente[i].convenio);
		fprintf(arquivo, "\nSINTOMAS -----------> ");
		fprintf(arquivo, listaPaciente[i].sintomas);
		fprintf(arquivo, "\r\n");

	}

	fclose(arquivo);
	system("cls");
	cout << "\n Arquivo gerado com sucesso\n " << "Por favor acesse local \n\n ";
	system("pause");
}

void gerarRelatorioReceita(int posicaoReceita) {
	FILE* arquivo;
	fopen_s(&arquivo, "RELATORIO_REMEDIOS_CADASTRADOS.TXT", "w+");
	for (int i = 0; i < posicaoReceituario; i++) {
		fprintf(arquivo, "*************************************************************************");
		fprintf(arquivo, "\nCODIGO DO REMEDIO--------> ");
		fprintf(arquivo, listaReceituario[i].codigo);
		fprintf(arquivo, "\nNOME DO REMEDIO----------> ");
		fprintf(arquivo, listaReceituario[i].nomeRemedio);
		fprintf(arquivo, "\nDOSAGEM -----------------> ");
		fprintf(arquivo, listaReceituario[i].dosagem);
		fprintf(arquivo, "\nDURACAO TRATAMENTO ------> ");
		fprintf(arquivo, listaReceituario[i].intervalo);
		fprintf(arquivo, "\r\n");

	}

	fclose(arquivo);
	system("cls");
	cout << "\n Arquivo gerado com sucesso\n " << "Por favor acesse local \n\n ";
	system("pause");
}

void gerarRelatorioConvenio(int posicaoPaciente) {
	FILE* arquivo;
	fopen_s(&arquivo, "RELATORIO_CONVENIOS_CADASTRADOS.TXT", "w+");
	for (int i = 0; i < posicaoPaciente; i++) {
		fprintf(arquivo, "*************************************************************************");
		fprintf(arquivo, "\nCODIGO DO CONVENIO--> ");
		fprintf(arquivo, listaConvenio[i].codigo);
		fprintf(arquivo, "\nNOME DO CONVENIO----> ");
		fprintf(arquivo, listaConvenio[i].nome);
		fprintf(arquivo, "\nPLANO---------------> ");
		fprintf(arquivo, listaConvenio[i].plano);
		fprintf(arquivo, "\nVALIDADE -----------> ");
		fprintf(arquivo, listaConvenio[i].validade);
		fprintf(arquivo, "\r\n");

	}

	fclose(arquivo);
	system("cls");
	cout << "\n Arquivo gerado com sucesso\n " << "Por favor acesse local \n\n ";
	system("pause");
}



void gerarRelatorioConsulta(int posicaoConsulta) {
	FILE* arquivo;
	fopen_s(&arquivo, "RELATORIO_CONSULTAS_AGENDADAS.TXT", "w+");
	for (int i = 0; i < posicaoConsulta; i++) {
		fprintf(arquivo, "*************************************************************************");
		fprintf(arquivo, "\nDADOS DA CONSULTA :  ");
		fprintf(arquivo, "\nMEDICO--------------> ");
		fprintf(arquivo, listaConsulta[i].codMedico);
		fprintf(arquivo, "\nPACIENTE------------> ");
		fprintf(arquivo, listaConsulta[i].codPaciente);
		fprintf(arquivo, "\nDATA DA CONSULTA----> ");
		fprintf(arquivo, listaConsulta[i].data);
		fprintf(arquivo, "\r\n");
		
		
		
	}

	fclose(arquivo);
	system("cls");
	cout << "\n Arquivo gerado com sucesso\n " << "Por favor acesse local \n\n ";
	system("pause");
}

void gerarRelatorioMedicacao(int posicaoMedicacao) {
	FILE* arquivo;
	fopen_s(&arquivo, "RELATORIO_MEDICACOES_PRESCRITAS.TXT", "w+");
	for (int i = 0; i < posicaoMedicacao; i++) {
		fprintf(arquivo, "*************************************************************************");
		fprintf(arquivo, "\nNOME DO PACIENTE---------------> ");
		fprintf(arquivo, listaMedicacao[i].codPaciente);
		fprintf(arquivo, "\nNOME DO REMEDIO----------------> ");
		fprintf(arquivo, listaMedicacao[i].codRemedio);
		fprintf(arquivo, "\nTEMPO DE TRATAMENTO EM DIAS----> ");
		fprintf(arquivo, listaMedicacao[i].dias);
		fprintf(arquivo, "\r\n");
		
	}

	fclose(arquivo);
	system("cls");
	cout << "\n Arquivo gerado com sucesso\n " << "Por favor acesse local \n\n ";
	system("pause");
}

void gerarRelatorio(int posicaoConsulta, int posicaoMedicacao) {
	int opcao;

	do {
		cout << "DESEJA GERAR QUAL RELATORIO :  " << endl;
		exibirMenuRelatorio();		
		cin >> opcao;

		switch (opcao) {

		case MEDICO:
			gerarRelatorioMedico(posicaoMedico);
			break;

		case PACIENTE :
			gerarRelatorioPaciente(posicaoPaciente);
			break;

		case RECEITA:
			gerarRelatorioReceita(posicaoReceituario);
			break;

		case CONVENIO :
			gerarRelatorioConvenio(posicaoConvenio);
			break;

		case CONSULTA:
			gerarRelatorioConsulta(posicaoConsulta);
			break;

		case MEDICACAO:
			gerarRelatorioMedicacao(posicaoMedicacao);		
			break;

		case RELATORIO:
			break;

		case SAIR:
			opcao = sair();
		default:
			break;
		}
	} while (opcao > 0 && opcao <= 8);
}