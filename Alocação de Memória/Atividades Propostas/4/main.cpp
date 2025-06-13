#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

struct Aluno{
	char* nome;
	float nota;
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	int k;
	
	cout << "Digite o tamanho do array: " << endl;
	cin >> k;
	cin.ignore();
	
	Aluno* estudante = new Aluno[k];
	
	for(int i = 0; i < k; i++){
		estudante[i].nome = new char[100];
		
		cout << "Digite o nome do " << i + 1 << "° aluno: " << endl;
		cin.getline( estudante[i].nome, 100);
		
		cout << "Insira sua nota: " << endl;
		cin >> estudante[i].nota;
		cin.ignore();
	}
	
	for(int i = 0; i < k; i++){
		cout << "Aluno: " << estudante[i].nome << " nota: " << estudante[i].nota << "\n";
	}
	for(int i = 0; i < k; i++){
		delete[] estudante[i].nome;
	}
	
	delete[] estudante;

	return 0;
}
