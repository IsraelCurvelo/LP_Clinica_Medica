#pragma once
void exibirMenuPrincipal() {

	cout << "***************************************************************************" << endl;
	cout << "Opcoes do Menu Principal" << endl;
	cout << "***************************************************************************" << endl << endl;
	cout << MEDICO    << " - GERENCIAR MEDICO   " << endl;
	cout << PACIENTE  << " - GERENCIAR PACIENTES" << endl;
	cout << RECEITA   << " - GERENCIAR REMEDIOS " << endl;
	cout << CONVENIO  << " - GERENCIAR CONVENIOS" << endl;
	cout << CONSULTA  << " - CONSULTAS          " << endl;
	cout << MEDICACAO << " - APLICAR MEDICACAO  " << endl;
	cout << RELATORIO << " - GERAR RELATORIOS   " << endl;
	cout << SAIR      << " - SAIR               " << endl;
	cout << "Entre com a opcao desejada:        " << endl;


}

void exibirOpcoes() {
	cout << "***************************************************************************" << endl;
	cout << "Opcoes do SubMenu Gerenciar " << endl;
	cout << "***************************************************************************" << endl << endl;
	cout << CADASTRAR << " - CADASTRAR   " << endl;
	cout << LISTAR    << " - LISTAR      " << endl;
	cout << ALTERAR   << " - ALTERAR     " << endl;
	cout << EXCLUIR   << " - EXCLUIR     " << endl;
	cout << VOLTAR    << " - VOLTAR      " << endl;
	cout << "Entre com a opcao desejada: " << endl;
}

void exibirMenuRelatorio() {
	cout << "***************************************************************************" << endl;
	cout << "Opcoes do Menu Relatorio" << endl;
	cout << "***************************************************************************" << endl << endl;
	cout << MEDICO    << " - MEDICOS CADASTRADOS  " << endl;
	cout << PACIENTE  << " - PACIENTES CADASTRADOS" << endl;
	cout << RECEITA   << " - REMEDIOS CADASTRADOS " << endl;
	cout << CONVENIO  << " - CONVENIOS CADASTRADOS" << endl;
	cout << CONSULTA  << " - CONSULTAS AGENDADAS  " << endl;
	cout << MEDICACAO << " - MEDICACAO PRESCRITA  " << endl;
	cout << RELATORIO << " - *********************" << endl; 
	cout << SAIR << " - SAIR               " << endl;
	cout << "Entre com a opcao desejada:        " << endl;

}




int sair()
{
	int confirmacao;

	cout << "Deseja realmente sair? " << endl;
	cout << "Digite: 1-SIM ou 2- NAO " << endl;
	cin >> confirmacao;

	if (confirmacao == 1) {
		return 88;
	}
	else {
		return 2;
	}
}

