/**
* @author Aroldo Felix
* @file main.hpp
* @sa https://github.com/AroldoFe/CorridaSapo
* @since 29/05/18
* @date 31/05/18
* @brief Cabeçalho da função main
* @details Aqui são incluídas todas as bibliotecas que o programa vai precisar para rodar
*/
#ifndef MAIN
#define MAIN
	// Bibliotecas externas
	#include <iostream>
	#include <string>
	#include <fstream>
	#include <vector>
	#include <time.h>
	using namespace std;
	// Minhas bibliotecas
	// Classes
	#include "../include/sapo.hpp"
	#include "../include/corrida.hpp"
	#include "../include/pista.hpp"
	// Leitura e escrita de arquivos
	#include "../include/lerArquivos.hpp"
	#include "../include/escreverArquivos.hpp"
	// Outras funções
	#include "../include/escolherPista.hpp"
	#include "../include/iniciarCorrida.hpp"
	#include "../include/mostrarSapos.hpp"
	#include "../include/faltaAlguem.hpp"
	// Criação de objetos das classes
	#include "../include/criarSapo.hpp"
	#include "../include/criarPista.hpp"
#endif