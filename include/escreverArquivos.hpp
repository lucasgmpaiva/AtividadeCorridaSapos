/**
* @author Aroldo Felix
* @file escreverArquivos.hpp
* @since 29/05/18
* @date 31/05/18
* @brief Cabeçalho da função criada para escrita nos arquivos
*/
#ifndef EscreverAquivos
#define EscreverAquivos
	#include <vector>
	using namespace std;
	#include "../include/sapo.hpp"
	#include "../include/pista.hpp"
	#include <fstream>
	#include <iostream>
	void escreverSapos(vector<Sapo> &sapos);
	void escreverPistas(vector<Pista> &pistas);
#endif