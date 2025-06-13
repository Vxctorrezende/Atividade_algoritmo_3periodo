#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int* ptr = new int; //aloca um inteiro
	*ptr = 10;
	cout<<"Valor: "<<*ptr;
	delete ptr;
	
	int* arr = new int[5]; //aloca um array de 5 inteiros
	for(int i = 0; i < 5; i++){
		arr[i] = i * 10;
	}
	
	for (int i = 0; i < 5; i++){
		cout<<"Elemento "<< i << ": "<< arr[i] <<" (conteudo)"<<endl;
		cout<<"Elemento "<< i << ": "<< &arr[i] <<" (endereço)"<<endl;
	}
	delete[] arr; //libera a memoria do array
	
	
	return 0;
}
