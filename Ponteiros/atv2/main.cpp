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
		cout<<"Posi��o "<< i << ": "<<ptr[i]<<endl;
		cout<<"Posi��o " << i << ": " <<*(ptr+1)<<endl;
	}
	
	cout<<"Endere�os do vetor: "<<endl;
	for(int i =0 ; i < 10; i++){
		cout<<"Endere�o "<<i<< " acessado pelo vetor: "<<&vetor[i]<<endl;
		cout<<"Endere�o "<<i<< " acessados pelo ponteiro: "<<(ptr+1)<<endl<<endl;
	}
	return 0;
}
