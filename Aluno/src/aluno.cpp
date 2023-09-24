#include "aluno.h"
#include <string>

using std::string;

int Aluno::getPeriodo()
{
	return periodo;	
}

void Aluno::setPeriodo(int per)
{
	periodo = per;  
}




void Aluno::setIEA(float I)
{
	IEA = I; 	
}

float Aluno::getIEA()
{
	return IEA; 
}


void Aluno::setQuantMate(int qtmt)
{
	quantmate = qtmt; 
}

int Aluno::getQuantMate()
{
	return quantmate; 
}


void Aluno::setMatricula(string mat)
{
	matricula = mat; 
}

string Aluno::getMatricula()
{
	return matricula; 
}



void Aluno::setOrientador(string ori)
{
	orientador = ori; 
}

string Aluno::getOrientador()
{
	return orientador; 
}
