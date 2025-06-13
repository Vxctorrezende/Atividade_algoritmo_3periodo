#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void saudacao(string nome = "Visitante");

int main(int argc, char** argv) {
	
	saudacao();
	saudacao("Victor");
	
	return 0;
}

void saudacao(string nome){
	cout<<"Ola "<< nome<< "!"<<endl;
}
