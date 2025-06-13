#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	int numero_de_pessoas = 10;
	double soma = 0;
	double media;
	
	//Alocação dinamica
	double* alturas = new double[numero_de_pessoas];
	

	for( int i = 0; i < numero_de_pessoas; i++){
		cout<<"Digite as alturas "<<endl;
		cin>>alturas[i];
	}
	
	for (int i =0 ; i< numero_de_pessoas; i++){
		soma += alturas[i];
	}
	
	media = soma/numero_de_pessoas;
	
	cout<<"A medias das alturas= "<<media<<endl;
	
	
	delete[] alturas;
	alturas = nullptr;
	return 0;
}
