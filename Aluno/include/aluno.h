#include <string>

using std::string;

class Aluno{
    private: 
	int periodo;
	float IEA; 
	int quantmate;
	string matricula;
	string orientador;

    public: 
	int getPeriodo();
	void setPeriodo(int per);
	
	float getIEA();
	void setIEA(float I);

	int getQuantMate();
	void setQuantMate(int qtmt);
	
	string getMatricula();
	void setMatricula(string mat);

	string getOrientador();
	void   setOrientador(string ori);
	
};
