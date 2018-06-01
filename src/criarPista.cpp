/**
* @author Aroldo Felix
* @file criarPista.cpp
* @sa https://github.com/AroldoFe/CorridaSapo
* @since 29/05/18
* @date 31/05/18
* @brief Implementação da função que cria uma pista para a corrida
* @details Nesta função um objeto da classe Pista é criado com o tamanho da pista como "argumento"
*/
#ifndef CriarPistaCpp
#define CriarPistaCpp

#include "../include/criarPista.hpp"
//#include "../src/escreverArquivos.cpp"

void criarPista(vector<Pista> &pistas){
	cout << "----------- Adicionando Pista -----------" << endl << endl;
	int tamanho;
	cout << "Digite o tamanho da pista: ";
	cin >> tamanho;
	Pista pistinha(tamanho);
	pistas.push_back(pistinha);
	cout << "**** Pista adicionada!" << endl << endl;
	//escreverPistas(pistas);
}

#endif