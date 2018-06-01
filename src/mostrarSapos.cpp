/**
* @author Aroldo Felix
* @file mostrarSapos.cpp
* @sa https://github.com/AroldoFe/CorridaSapo
* @since 29/05/18
* @date 31/05/18
* @brief Implementação da função que mostra os sapos que vão participar da corrida
*/
#ifndef MostrarSaposCPP
#define MostrarSaposCPP

#include "../include/mostrarSapos.hpp"

void mostrarSapos(vector<Sapo> &sapos){
	cout << "Sapos que irão disputar a corrida: " << endl;
	for(int i=0; i<(int)sapos.size(); i++){
		cout << "ID: " << sapos[i].getIdentificador() 
			 << " | Nome: " << sapos[i].getNome() 
			 << " | Força do salto: " << sapos[i].getSaltoMax() << endl;
	}
}

#endif