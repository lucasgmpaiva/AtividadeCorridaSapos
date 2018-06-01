/**
* @author Aroldo Felix
* @file sapo.cpp
* @since 29/05/18
* @date 30/05/18
* @brief Aqui estão implementados os métodos da classe Sapo
*/

#ifndef SapoCPP
#define SapoCPP

#include "../include/sapo.hpp"
#include "../include/corrida.hpp"
#include <time.h>
#include <iostream>
#include <string>
using namespace std;

int Sapo::proxCod;

Sapo::Sapo(){
	distanciaPercorrida = 0;
	qtdPulosDados = 0;
}

Sapo::~Sapo(){}

Sapo::Sapo(string nome, int totalPulos, int qtdProvasDisp, int vitorias, int empates, int saltoMax){
	this->nome = nome;
	this->identificador = proxCod + 1;
	proxCod++;
	this->distanciaPercorrida = 0;
	this->qtdPulosDados = 0;
	this->totalPulos = totalPulos;
	this->qtdProvasDisp = qtdProvasDisp;
	this->vitorias = vitorias;
	this->empates = empates;
	this->saltoMax = saltoMax;
	this->ranking = 0;
}

string Sapo::getNome(){
	return this->nome;
}

int Sapo::getIdentificador(){
	return this->identificador;
}

int Sapo::getDistPercorrida(){
	return this->distanciaPercorrida;
}
void Sapo::setDistPercorrida(int dist){
	this->distanciaPercorrida = dist;
}

int Sapo::getProvasDisp(){
	return this->qtdProvasDisp;
}
void Sapo::setProvasDisp(int qtdProvasDisp){
	this->qtdProvasDisp = qtdProvasDisp;
}

int Sapo::getVitorias(){
	return this->vitorias;
}
void Sapo::setVitorias(){
	this->vitorias++;
}

int Sapo::getEmpates(){
	return this->empates;
}
void Sapo::setEmpates(){
	this->empates++;
}

int Sapo::getTotalPulos(){
	return this->totalPulos;
}

int Sapo::getPulosDados(){
	return this->qtdPulosDados;
}
void Sapo::setPulosDados(int pulos){
	this->qtdPulosDados = pulos;
}

int Sapo::getSaltoMax(){
	return this->saltoMax;
}

void Sapo::setRanking(int rk){
	this->ranking = rk;
}
int Sapo::getRanking(){
	return this->ranking;
}

void Sapo::pular(){
	int salto;
	if(distanciaPercorrida <= Corrida::distanciaTotal){
		salto = rand()%saltoMax+1;
		this->distanciaPercorrida += rand()%saltoMax+1;
		qtdPulosDados++;
		totalPulos++;
		cout << "--------------------------------------------" << endl;
		cout << "Nome do Sapo: " << this->nome << endl;
		cout << "Identificador: " << this->identificador << endl;
		cout << "Distancia pulada: " << salto << endl;
		if(distanciaPercorrida >= Corrida::distanciaTotal) cout << "*** CHEGOU! ***" << endl;
	}
}

ostream& operator << (ostream &os, Sapo &sapo){
	os << "-----------------------------------" << endl 
		<< "Nome do Sapo: " << sapo.getNome() << endl
		<< "Identificador: " << sapo.getIdentificador() << endl
		<< "Provas disputadas: " << sapo.getProvasDisp() << endl
		<< "Vitorias: " << sapo.getVitorias() << endl
		<< "Empates: " << sapo.getEmpates() << endl
		<< "Força de salto: " << sapo.getSaltoMax() << endl
		<< "Total de pulos dados: " << sapo.getTotalPulos() << endl;
	return os;
}

#endif