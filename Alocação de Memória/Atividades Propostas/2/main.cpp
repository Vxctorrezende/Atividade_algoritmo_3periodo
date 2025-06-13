#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	int soma= 0;
	
	cout<<"Quantos números será utilizado na soma? "<<endl;
	cin>>n;
	
	int* numeros = new int[n];
	
	for ( int i = 0; i < n; i++){
		cout<<"Digite o " <<i+1<<"° numero"<<endl;
		cin>>numeros[i];
	}
	
	for( int i = 0; i < n; i++){
		soma += numeros[i];
	}
	
	cout<<"A soma dos números é: "<<soma<<endl;
		return 0;
}
