/**
* @author Aroldo Felix
* @file pista.cpp
* @since 29/05/18
* @date 30/05/18
* @brief Aqui estão implementados os métodos da classe Pista
*/

#ifndef PistaCPP
#define PistaCPP

#include "../include/pista.hpp"

int Pista::proxCod;

int Pista::getId(){
	return this->idPista;
}
int Pista::getDistancia(){
	return this->distancia;
}
//void setNCorrida(int numeroCorrida);
Pista::Pista(){}

Pista::Pista(int distancia){
	this->idPista = proxCod+1;
	proxCod++;
	this->distancia = distancia;
}

Pista::~Pista(){}

ostream& operator << (ostream &os, Pista &pist){
	os << "------------------------" << endl
		<< "Identificador: " << pist.getId() << endl
		<< "Tamanho da pista: " << pist.getDistancia() << endl;
	return os;
}

#endif