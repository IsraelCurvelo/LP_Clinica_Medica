#pragma once
void gravarDados() {
	FILE* arquivo;
	fopen_s(&arquivo, "listaMedico.bin", "wb+");
	fwrite(&listaMedico, sizeof(cmedico), 1, arquivo);
	fclose(arquivo);


	fopen_s(&arquivo, "listaPaciente.bin", "wb+");
	fwrite(&listaPaciente, sizeof(cpaciente), 1, arquivo);
	fclose(arquivo);

	fopen_s(&arquivo, "listaReceituario.bin", "wb+");
	fwrite(&listaReceituario, sizeof(creceituario), 1, arquivo);
	fclose(arquivo);

	fopen_s(&arquivo, "listaConvenio.bin", "wb+");
	fwrite(&listaConvenio, sizeof(cconvenio), 1, arquivo);
	fclose(arquivo);

	fopen_s(&arquivo, "listaConsulta.bin", "wb+");
	fwrite(&listaConsulta, sizeof(cconsulta), 1, arquivo);
	fclose(arquivo);

	fopen_s(&arquivo, "listaMedicacao.bin", "wb+");
	fwrite(&listaMedicacao, sizeof(cmedicacao), 1, arquivo);
	fclose(arquivo);

	system("cls");
	cout << "\n Arquivo gerado com sucesso\n" << " Por favor acesse o endereco local do projeto\n\n";
	system("pause");

}

void recuperaDados() {
	FILE* arquivo;

	fopen_s(&arquivo, "listaMedico.bin", "rb+");
	if (arquivo) {
		fread(&listaMedico, sizeof(cmedico), 1, arquivo);
		for (int i = 0; i < 4; i++) {
			if (listaMedico[i].codigo[i] != NULL) {
				posicaoMedico++;
			}
		}
		fclose(arquivo);
	}


	fopen_s(&arquivo, "listaPaciente.bin", "rb+");
	if (arquivo) {
		fread(&listaPaciente, sizeof(cpaciente), 1, arquivo);
		for (int i = 0; i < 4; i++) {
			if (listaPaciente[i].codigo[0] != NULL) {
				posicaoPaciente++;
			}
		}
		fclose(arquivo);
	}


	fopen_s(&arquivo, "listaReceituario.bin", "rb+");
	if (arquivo) {
		fread(&listaReceituario, sizeof(creceituario), 1, arquivo);
		for (int i = 0; i < 4; i++) {
			if (listaReceituario[i].codigo[0] != NULL) {
				posicaoReceituario++;
			}
		}
		fclose(arquivo);
	}

	fopen_s(&arquivo, "listaConvenio.bin", "rb+");
	if (arquivo) {
		fread(&listaConvenio, sizeof(cconvenio), 1, arquivo);
		for (int i = 0; i < 4; i++) {
			if (listaConvenio[i].codigo[0] != NULL) {
				posicaoConvenio++;
			}
		}
		fclose(arquivo);
	}

	fopen_s(&arquivo, "listaConsulta.bin", "rb+");
	if (arquivo) {
		fread(&listaConsulta, sizeof(cconsulta), 1, arquivo);
		for (int i = 0; i < 4; i++) {
			if (listaConsulta[i].codMedico[0] != NULL) {
				posicaoConsulta++;
			}
		}
		fclose(arquivo);
	}

	fopen_s(&arquivo, "listaMedicacao.bin", "rb+");
	if (arquivo) {
		fread(&listaMedicacao, sizeof(cmedicacao), 1, arquivo);
		for (int i = 0; i < 4; i++) {
			if (listaMedicacao[i].codPaciente[0] != NULL) {
				posicaoMedicacao++;
			}
		}
		fclose(arquivo);
	}

	system("cls");
	cout << "\n Arquivo recuperado com sucesso\n";
	system("pause");
}