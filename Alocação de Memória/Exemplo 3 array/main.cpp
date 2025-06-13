#include <iostream>
#include <locale.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	
	int tamanho;
	
	
	//solicitar tamanho do vetor
	cout <<"Digite o tamanho do vetor: "<<endl;
	cin>>tamanho;
	
	//alocação dinamica do vetor
	
	int* vetor = new int[tamanho];
	
	//preenchendo o vetor
	for(int i = 0; i < tamanho; i++){
		cout<<"Digite o "<<i+1<< "° valor inteiro do vetor"<<endl;
		cin>>vetor[i];
		
	}
	
	//imprimir o vetor
	
	cout<<"Elementos do vetor: "<<endl;
	for(int i = 0; i < tamanho; i++){
		cout<<"Elemento "<<i<< ": "<<vetor[i]<<endl;
	}
	
		
	cout<<"Endereço do vetor: "<<endl;
	for(int i = 0; i < tamanho; i++){
		cout<<"Endereço "<<i<< ": "<<&vetor[i]<<endl;
	}	
	
	//liberação da memoria
	
	delete[] vetor;
	return 0;
}
