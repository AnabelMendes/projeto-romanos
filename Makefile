all: testa_romanos.cpp romanos.cpp romanos.hpp romanos.o
	g++ -std=c++11 -Wall romanos.o testa_romanos.cpp -o testa_romanos

compile: testa_romanos.cpp romanos.cpp romanos.hpp romanos.o
	g++ -std=c++11 -Wall romanos.o testa_romanos.cpp -o testa_romanos

test: testa_romanos
	./testa_romanos

cpplint:
	@echo cpplint.py apresentou incompatibilidade com o Python atual no Windows

gcov: testa_romanos.cpp romanos.cpp romanos.hpp
	g++ -std=c++11 -Wall -fprofile-arcs -ftest-coverage -c romanos.cpp
	g++ -std=c++11 -Wall -fprofile-arcs -ftest-coverage romanos.o testa_romanos.cpp -o testa_romanos
	./testa_romanos
	gcov romanos.cpp

debug: testa_romanos.cpp romanos.cpp romanos.hpp
	g++ -std=c++11 -Wall -g -c romanos.cpp
	g++ -std=c++11 -Wall -g romanos.o testa_romanos.cpp -o testa_romanos
	gdb testa_romanos

cppcheck:
	@echo cppcheck nao esta instalado neste ambiente Windows

valgrind: testa_romanos
	@echo valgrind nao esta disponivel neste ambiente Windows

romanos.o: romanos.cpp romanos.hpp
	g++ -std=c++11 -Wall -c romanos.cpp

testa_romanos: testa_romanos.cpp romanos.cpp romanos.hpp romanos.o
	g++ -std=c++11 -Wall romanos.o testa_romanos.cpp -o testa_romanos

clean:
	del /Q *.o *.exe *.gc* *.gcov 2>nul