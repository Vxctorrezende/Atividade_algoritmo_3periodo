#include <iostream>
#include <string>
using namespace std;

struct Aluno{
	string nome;
	int idade;
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//Alocação dinamic a de um objeto de tipo Aluno
	
	Aluno* estudante = new Aluno;
	
	//Atribuindo valores
	
	estudante->nome = "Victor";
	estudante->idade = 21;
	
	//Imprimindo
	
	cout<< estudante->nome<< " tem "<<estudante->idade << " anos"<<endl;
	
	//liberação da memoria
	
	delete estudante;
	estudante = nullptr;
	return 0;
}
