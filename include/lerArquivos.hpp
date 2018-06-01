/**
* @author Aroldo Felix
* @file lerArquivos.hpp
* @since 29/05/18
* @date 30/05/18
* @brief Cabeçalho da função criada para leitura dos arquivos
*/
#ifndef LerAquivos
#define LerArquivos
	#include <vector>
	#include <fstream>
	#include <iostream>
	using namespace std;
	#include "../include/sapo.hpp"
	#include "../include/pista.hpp"
	void lerSapos(vector<Sapo> &sapos);
	void lerPistas(vector<Pista> &pistas);
#endif