PROG = vdc
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic
OBJS = main.o sapo.o corrida.o pista.o criarPista.o criarSapo.o escolherPista.o faltaAlguem.o iniciarCorrida.o mostrarSapos.o escreverArquivos.o lerArquivos.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o bin/$(PROG)
	mv *.o build/

main.o : include/main.hpp
	$(CC) $(CPPFALGS) -c src/main.cpp

sapo.o : include/sapo.hpp
	$(CC) $(CPPFLAGS) -c src/sapo.cpp

corrida.o : include/corrida.hpp
	$(CC) $(CPPFLAGS) -c src/corrida.cpp

pista.o : include/pista.hpp
	$(CC) $(CPPFLAGS) -c src/pista.cpp

criarPista.o : include/criarPista.hpp
	$(CC) $(CPPFLAGS) -c src/criarPista.cpp

criarSapo.o : include/criarSapo.hpp
	$(CC) $(CPPFLAGS) -c src/criarSapo.cpp

escolherPista.o : include/escolherPista.hpp
	$(CC) $(CPPFLAGS) -c src/escolherPista.cpp

faltaAlguem.o : include/faltaAlguem.hpp
	$(CC) $(CPPFLAGS) -c src/faltaAlguem.cpp

iniciarCorrida.o : include/iniciarCorrida.hpp
	$(CC) $(CPPFLAGS) -c src/iniciarCorrida.cpp

mostrarSapos.o : include/mostrarSapos.hpp
	$(CC) $(CPPFLAGS) -c src/mostrarSapos.cpp

escreverArquivos.o : include/escreverArquivos.hpp
	$(CC) $(CPPFLAGS) -c src/escreverArquivos.cpp

lerArquivos.o : include/lerArquivos.hpp
	$(CC) $(CPPFLAGS) -c src/lerArquivos.cpp
	
clean:
	rm -f build/*.o
