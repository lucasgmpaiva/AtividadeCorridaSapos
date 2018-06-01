/**
* @author Aroldo Felix
* @file pista.hpp
* @brief Classe Pista para guardar os atributos de cada pista
* @since 29/05/18
* @date 30/05/18
*/
#ifndef ClassPista
#define ClassPista
	#include <ostream>
	#include <iostream>
	using namespace std;
	class Pista
	{
	protected:
		int idPista;
		int distancia;
	public:
		static int proxCod;
		int getId();
		int getDistancia();
		//void setNCorrida(int numeroCorrida);
		Pista();
		Pista(int distancia);
		~Pista();

		friend ostream& operator << (ostream &os, Pista &pist);
	};
#endif