#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[10];
	int* ptr = vetor;
	
	for (int i = 0;i < 10; i++){
		ptr[i] = i+1;
		
	}
	
	cout<<"Valores do vetor acessados pelo ponteiro: "<<endl;
	for(int i = 0; i < 10; i++){
		cout<<"Posição "<< i << ": "<<ptr[i]<<endl;
		cout<<"Posição " << i << ": " <<*(ptr+1)<<endl;
	}
	
	cout<<"Endereços do vetor: "<<endl;
	for(int i =0 ; i < 10; i++){
		cout<<"Endereço "<<i<< " acessado pelo vetor: "<<&vetor[i]<<endl;
		cout<<"Endereço "<<i<< " acessados pelo ponteiro: "<<(ptr+1)<<endl<<endl;
	}
	return 0;
}
