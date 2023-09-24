
LIG = g++ -Wall -ansi -pedantic -o 
MAINC = src/main.cpp
ALUNOC = src/aluno.cpp
MAINO = build/main.o
ALUNOB = build/aluno.o
INC = -Iinclude 

aluno: $(MAINO) $(ALUNOB) 
	$(LIG) bin/aluno $(MAINO) $(ALUNOB)

$(MAINO): $(MAINC) include/aluno.h
	g++ -c $(MAINC) $(INC) -o $(MAINO)

$(ALUNOB): $(ALUNOC) include/aluno.h 
	g++ -c $(ALUNOC) $(INC) -o $(ALUNOB)


