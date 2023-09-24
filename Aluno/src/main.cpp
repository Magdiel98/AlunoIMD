#include <iostream>
#include <string>
#include "aluno.h"

using std::cout;
using std::cin;
using std::endl;
using std::string; 

int main(int argc, char* argv[])
{
	Aluno jose; 

	jose.setPeriodo(5);
	jose.setIEA(5.678);
	jose.setQuantMate(6);
	jose.setMatricula("345000");
	jose.setOrientador("Antônio");

	cout << "Dados de José: " << endl 
	     << "Periodo: " << jose.getPeriodo() << endl
             << "IEA: " << jose.getIEA() << endl
	     << "Quantidade de matérias: " << jose.getQuantMate() << endl
	     << "Matricula: " << jose.getMatricula() << endl
	     << "Orientador: " << jose.getOrientador() << endl;


	return 0;
}


