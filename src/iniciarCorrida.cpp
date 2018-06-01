/**
* @author Aroldo Felix
* @file iniciarCorrida.cpp
* @sa https://github.com/AroldoFe/CorridaSapo
* @since 29/05/18
* @date 31/05/18
* @brief Implementação da função que inicia a corrida
* @details Nesta função todos os sapos pulam de uma só vez, e a medida que vão chegando, o campo "Ranking" muda, possibilitando o empate. Depois é visto se houve empate e acrescentado 1 ao campo empate. Por fim, é zerado alguns valores para uma próxima corrida.
*/

#ifndef IniCorridaCPP
#define IniCorridaCPP

#include "../include/iniciarCorrida.hpp"

void iniciarCorrida(vector<Sapo> &sapos){
	string resp;
	cin.ignore();
	cout << "Pressione qualquer coisa para começar a corrida ...";
	getline(cin, resp);
	int ranking = 1, aux1=0, aux2=0;
	while(faltaAlguem(sapos)){
		if(aux1!=aux2){
			ranking++;
			aux2 = aux1;
		}
		for(int i=0; i<(int)sapos.size(); i++){
			sapos[i].pular();
		}
		
		for(int i=0; i<(int)sapos.size(); i++){
			if(sapos[i].getDistPercorrida() >= Corrida::distanciaTotal && sapos[i].getRanking() == 0){
				if(ranking == 1) sapos[i].setVitorias();
				sapos[i].setRanking(ranking);
				aux1++;
			}
		}		
	}
	ranking++;
	// Verificando os empates
	int contador;
	for(int i=1; i<ranking; i++){
		contador = 0;
		for(int j=0; j<(int)sapos.size(); j++){
			if(sapos[j].getRanking() == i) contador++;
		}
		if(contador > 1){
			for(int j=0; j<(int)sapos.size(); j++){
				if(sapos[j].getRanking() == i) {
					sapos[j].setEmpates();
				}
			}
		}
	}

	// Imprimindo o Ranking
	cout << "********** Ranking **********" << endl;
	for(int rk=1; rk<ranking; rk++){
		for(int i=0; i<(int)sapos.size(); i++){
			if(sapos[i].getRanking() == rk){
				cout << sapos[i].getRanking() << "º Lugar: " << endl
					<< "   Nome: " << sapos[i].getNome() << endl
					<< "   Identificador: " << sapos[i].getIdentificador() << endl
					<< "   Pulos dados: " << sapos[i].getPulosDados() << endl;
			}
		}
	}

	// Resetando as informações para próxima corrida
	for(int i=0; i<(int)sapos.size(); i++){
		sapos[i].setProvasDisp(sapos[i].getProvasDisp()+1);
		sapos[i].setPulosDados(0);
		sapos[i].setDistPercorrida(0);
		sapos[i].setRanking(0);
	}
}
#endif