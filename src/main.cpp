/**
* @author Aroldo Felix
* @file main.cpp
* @sa https://github.com/AroldoFe/CorridaSapo
* @since 29/05/18
* @date 31/05/18
* @brief Programa principal que faz a corrida de sapos
* @details Aqui o usuário pode mandar criar um novo sapo, sendo este novo e então não tendo participado de prova alguma, ou uma pista, pode também exibir todos os sapos e pistas ou iniciar uma corrida.
*/
#ifndef MainCPP
#define MainCPP

#include "../include/main.hpp"

int main(){
	vector<Sapo> sapos;
	lerSapos(sapos);
	if(sapos.size() == 0){
		cout << "Não havia sapo dentro de sapos.txt!" << endl;
	}
	
	vector<Pista> pistas;
	lerPistas(pistas);
	if(pistas.size() == 0){
		cout << "Não havia pista dentro de pistas.txt!" << endl;
	}
	
	string menu = "Digite o número da opção que deseja realizar?\n1) Ver estatísticas dos sapos\n2) Ver estatísticas das pistas\n3) Iniciar uma corrida\n4) Criar sapo\n5) Criar pista\n6) Sair";
	string resposta;

	cout << menu << endl << "Resposta: ";
	getline(cin, resposta);
	while(resposta != "6"){
		if(resposta == "1"){ // Estatistica dos sapos
			if(sapos.size() == 0) cout << "Erro: não há sapos ainda!" << endl;
			else{
				for(int i = 0; i < (int) sapos.size(); i++){
					cout << sapos[i];
				}
			}
			cout << endl;
		}
		else if(resposta == "2"){ // Estatística das pistas
			if(pistas.size() == 0) cout << "Erro: não há pistas ainda!" << endl;
			else{
				for(int i = 0; i < (int) pistas.size(); i++){
					cout << pistas[i];
				}
			}
			cout << endl;
		}
		else if(resposta == "3"){ // Iniciar corrida
			if(sapos.size() == 0 || pistas.size() == 0) cout << "Erro: não há sapos ou pistas para iniciar a corrida!" << endl;
			else{
				escolherPista(pistas);
				mostrarSapos(sapos);
				iniciarCorrida(sapos);
			}
		}
		else if(resposta == "4"){ // Criar Sapo
			criarSapo(sapos);
			//cin.ignore();
		}
		else if(resposta == "5"){ // Criar Pista
			criarPista(pistas);
			cin.ignore();
		}
		else cout << "Erro: opção inválida!" << endl;
		cout << menu << endl;
		getline(cin, resposta);
	}
	cout << "Obrigado!" << endl;

	escreverSapos(sapos);
	escreverPistas(pistas);

	return 0;
}
#endif