/**
* @author Aroldo Felix
* @file corrida.hpp
* @brief Classe Corrida para fazer a corrida de sapos
* @since 29/05/18
* @date 30/05/18
*/
#ifndef ClassCorrida
#define ClassCorrida
	class Corrida
	{
	protected:
		int numeroCorrida;
	public:
		static int Num;
		static int proxCod;
		static int distanciaTotal;
		int getNCorrida();
		void setNCorrida(int numeroCorrida);
		Corrida();
		Corrida(int num, int Total);
		~Corrida();	
	};
#endif