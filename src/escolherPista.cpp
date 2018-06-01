/**
* @author Aroldo Felix
* @file escolherPista.cpp
* @sa https://github.com/AroldoFe/CorridaSapo
* @since 29/05/18
* @date 31/05/18
* @brief Implementação da função que escolhe uma pista para a corrida
* @details Nesta função o usuário escolhe qual pista vai escolher para que os sapos possam correr.
*/
#ifndef EscolherPistaCPP
#define EscolherPistaCPP

#include "../include/escolherPista.hpp"

void escolherPista(vector<Pista> pistas){
	int resp, id;
	cout << "Escolha a opção da pista: " << endl;
	for(int i=0; i<(int) pistas.size(); i++){
		cout << pistas[i].getId() << ") " << pistas[i].getDistancia() << endl;
	}
	while(true){
		cout << "Resposta: ";
		cin >> resp;
		for(int i=0; i<(int) pistas.size(); i++){
			id = pistas[i].getId();
			if(resp == id){
				Corrida::distanciaTotal = pistas[i].getDistancia();
				return;
			}
		}
		cout << "Erro: opção inválida!" << endl;
	}

}

#endif