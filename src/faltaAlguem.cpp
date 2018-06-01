/**
* @author Aroldo Felix
* @file faltaAlguem.cpp
* @sa https://github.com/AroldoFe/CorridaSapo
* @since 29/05/18
* @date 31/05/18
* @brief Implementação da função que devolve uma reposta se falta algum sapo chegar na chegada
* @details Nesta função todos os sapos são vistos para saber se já chegaram na linha de chegada, se sim, o programa retorna que não falta ninguem chegar
*/

#ifndef FaltaAlguemCPP
#define FaltaAlguemCPP

#include "../include/faltaAlguem.hpp"

bool faltaAlguem(vector<Sapo> sapos){
	for(int i=0; i<(int)sapos.size(); i++){
		if(sapos[i].getDistPercorrida() < Corrida::distanciaTotal) return true;
	}
	return false;
}

#endif