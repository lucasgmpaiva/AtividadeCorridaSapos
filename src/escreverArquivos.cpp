/**
* @author Aroldo Felix
* @file escreverArquivos.cpp
* @sa https://github.com/AroldoFe/CorridaSapo
* @since 29/05/18
* @date 31/05/18
* @brief Implementação da função que escreve nos arquivos as alterações finais.
* @details Ao final do programa, em cada arquivo as informações são atualizadas, sejam de quantidade de pulos, vitorias, empates, provas disputadas, entre outras.
*/

#ifndef EscreverArquivosCPP
#define EscreverArquivosCPP

#include "../include/escreverArquivos.hpp"

void escreverSapos(vector<Sapo> &sapos){
	ofstream myfile("docs/sapos.txt");
	if(myfile.is_open()){
		for(int i=0; i<(int)sapos.size(); i++){
			myfile << sapos[i].getIdentificador() << "\n" << sapos[i].getNome() << "\n" << sapos[i].getTotalPulos() << "\n";
			myfile << sapos[i].getProvasDisp() << "\n" << sapos[i].getVitorias() << "\n" << sapos[i].getEmpates() << "\n";
			myfile << sapos[i].getSaltoMax() << "\n";
		}
		myfile.close();
	}
	else cout << "Erro: impossível abrir o arquivo \'sapos.txt\'!" << endl;
}

void escreverPistas(vector<Pista> &pistas){
	ofstream myfile("docs/pistas.txt");
	if(myfile.is_open()){
		for(int i=0; i<(int)pistas.size(); i++){
			myfile << pistas[i].getId() << "\n" << pistas[i].getDistancia() << "\n";
		}
		myfile.close();
	}
	else cout << "Erro: Impossível abrir o arquivo \'pistas.txt\'!" << endl;
}

#endif