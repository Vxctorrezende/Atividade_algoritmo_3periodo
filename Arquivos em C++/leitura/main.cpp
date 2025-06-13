#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	char letra;
	ifstream leitura;
	
	leitura.open("string.txt");
	if (!leitura.is_open()){
		cout<<"Arquivo nao foi aberto!O programa será terminado.\n\n";
		leitura.clear();
	}
	
	leitura.get(letra);
	cout<<letra;
	leitura.get(letra);
	cout<<letra;
	leitura.get(letra);
	cout<<letra;
	leitura.get(letra);
	cout<<letra;
	
	cout<<"\n";
	
	leitura.clear();
	leitura.seekg(0);
	
	while( leitura.get(letra)){
		cout<<letra;
	}
	
	leitura.close();
	system("PAUSE");
	return 0;
}
