/**
* @author Aroldo Felix
* @file corrida.cpp
* @since 29/05/18
* @date 30/05/18
* @brief Aqui estão implementados os métodos da classe corrida
*/
#ifndef CorridaCPP
#define CorridaCPP

#include "../include/corrida.hpp"

int Corrida::Num;
int Corrida::distanciaTotal;
int Corrida::proxCod;

int Corrida::getNCorrida(){
	return this->numeroCorrida;
}
void Corrida::setNCorrida(int numeroCorrida){
	this->numeroCorrida = numeroCorrida;
}

Corrida::Corrida(){}

Corrida::Corrida(int num, int Total){
	this->numeroCorrida = num;
	distanciaTotal = Total;
}

Corrida::~Corrida(){}

#endif