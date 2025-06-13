#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	string frase;
	int numero = 29;
	int matriz [3] = {12,8,2023};
	
	cout<<"Escreva a frase que será inserida no arquivo string.txt:   ";
	getline(cin, frase);
	cout<<"Frase escrita no arquivo \n\n";
	
	ofstream escreve; //criando objeto
	escreve.open("string2.txt"); //criando o arquivo
	
	escreve<<"Utilizamos os objetos ofstream para escrever em arquivos \n\n";
	escreve<<"Note que podemos utilizar os caracteres \\n para efetuar a quebra de linha \n\n";
	
	escreve<<"Podemos escrever o valor de variaveis numericas: "<< numero<<"\n\n";
	
	escreve<<"Podemos também escrever matrizes ";
	for(int i = 0; i < 3; i++){
		escreve.width(2);
		escreve<<matriz[i];	
	}
	
	escreve<<"\n\n";
	escreve<<"A frase que você digitou durante a execução do programa foi: "<<frase<<"\n\n";
	escreve.close();
	
	cout<<"Dados escritos no arquivo. Fim do programa!";
	system("PAUSE");
	return 0;
}
