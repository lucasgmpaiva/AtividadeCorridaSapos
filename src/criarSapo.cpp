/**
* @author Aroldo Felix
* @file criarSapo.cpp
* @sa https://github.com/AroldoFe/CorridaSapo
* @since 29/05/18
* @date 31/05/18
* @brief Implementação da função que cria um sapo para a corrida
* @details Nesta função um objeto da classe Sapo é criado. Por escolha, ele assume-se que nunca participou de uma corrida.
*/
#ifndef CriarSapoCPP
#define CriarSapoCPP

#include "../include/criarSapo.hpp"
//#include "../src/escreverArquivos.cpp"

void criarSapo(vector<Sapo> &sapos){
	cout << "----------- Adicionando Sapo -----------" << endl << endl;
	string nome;
	int salto;
	cout << "Digite o nome do sapo: ";
	getline(cin, nome);
	cout << "Digite a força do pulo de " << nome << ": ";
	cin >> salto;
	cin.ignore();
	Sapo sapinho(nome, 0, 0, 0, 0, salto);
	sapos.push_back(sapinho);
	cout << "**** Sapo adicionado!" << endl << endl;
//	escreverSapos(sapos);
}

#endif