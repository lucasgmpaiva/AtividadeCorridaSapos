/**
* @author Aroldo Felix
* @file lerArquivos.cpp
* @since 29/05/18
* @date 30/05/18
* @brief Implementação da função criada para ler arquivos
*/
#include "../include/lerArquivos.hpp"

void lerSapos(vector<Sapo> &sapos){
	string line, nome;
	ifstream myfile("docs/sapos.txt");

	// Verificando se os arquivos podem ser abertos
	if(!myfile.is_open()){
		cout << "Não foi possivel abrir o arquivo \'sapos.txt\'!" << endl;
		return;
	}
	int contador = 1, pulos, provas, vitorias, empates, max;

	//Atributos do sapo


	while(!myfile.eof()){
		getline(myfile, line);
		if(line == "") break;
		
		if(contador == 1) Sapo::proxCod = stoi(line)-1;
		else if(contador == 2) nome = line;
		else if(contador == 3) pulos = stoi(line);
		else if(contador == 4) provas = stoi(line);
		else if(contador == 5) vitorias = stoi(line);
		else if(contador == 6) empates = stoi(line);
		else if(contador == 7){
			max = stoi(line);
			contador = 0;
			Sapo sapinho(nome, pulos, provas, vitorias, empates, max);
			sapos.push_back(sapinho);
		} 
		contador++;
	}
	myfile.close();
}

void lerPistas(vector<Pista> &pistas){
	string line;
	ifstream myfile("docs/pistas.txt");
	
	// Verificando se os arquivos podem ser abertos
	if(!myfile.is_open()){
		cout << "Não foi possivel abrir o arquivo \'pistas.txt\'!" << endl;
		return;
	}
	int contador = 1, tamanho, aux=0;
	while(!myfile.eof()){
		myfile >> line;
		if(line == "") break;
		
		if((contador == 1) && (stoi(line)-aux==1)){ // Evitando pegar lixo do arquivo
			Pista::proxCod = stoi(line)-1;
			aux = stoi(line);
		} 
		else if(contador == 2){
			tamanho = stoi(line);
			contador = 0;
			Pista pistinha(tamanho);
			pistas.push_back(pistinha);
		}
		contador++;
	}
	myfile.close();
}

//#endif