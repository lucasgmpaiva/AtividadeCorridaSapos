/**
* @author Aroldo Felix
* @file sapo.hpp
* @brief Classe Sapo para fazer uma corrida de sapos
* @since 29/05/18
* @date 30/05/18
*/
#ifndef ClassSapo
#define ClassSapo
	#include <string>
	using namespace std;
	class Sapo{
	private:
	  	string nome;
		int identificador;
		int distanciaPercorrida;
		int qtdPulosDados;
		int totalPulos;
		int qtdProvasDisp;
		int vitorias;
		int empates;
		int saltoMax;
		int ranking;
  	public:
		static int proxCod;

		Sapo();
		Sapo(string nome, int totalPulos, int qtdProvasDisp, int vitorias, int empates, int saltoMax);
		~Sapo();

		void setIdentificador(int id);
		int getIdentificador();

		string getNome();

		void setDistPercorrida(int dist);
		int getDistPercorrida();

		int getProvasDisp();
		void setProvasDisp(int qtdProvasDisp);

		void setVitorias();
		int getVitorias();

		int getEmpates();
		void setEmpates();

		int getTotalPulos();

		void setPulosDados(int pulos);
		int getPulosDados();

		void setSaltoMax(int saltoM);
		int getSaltoMax();

		void setRanking(int rk);
		int getRanking();

		void pular();

		friend ostream& operator << (ostream &os, Sapo &sapo);
	};
#endif