#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	string frase;
	
	ofstream escreve;
	escreve.open("strings2.txt");
	
	if(!escreve.is_open()){
		cout << "Não foi possivel abrir o arquivo!\n\n\n";
		escreve.clear();
		return 0;
		
	}else {
		cout << "Tudp certo, foi possivel abrir o arquivo!\n\n\n";
	}
	
	cout << "Escreva uma frase para ser escrita no arquivo strings2.txt:";
	getline(cin,frase);
	cout << "Obrigado. Escrevendo dados no arquivo strings2.txt... \n\n\n\n";
	escreve << "A frase que você digitou durante a execução do programa: " <<frase<< "\n\n\n";
	escreve.close();
	cout << "Dados escritos no arquivo. Fim do Programa!";
	system("PAUSE");
	
	return 0;
}
