#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int multiplicacao(int a, int b);


int main(int argc, char** argv) {
	int a, b, resultado;
	
	cout<<"Digite o valor a"<<endl;
	cin>>a;
	cout<<"Digite o valor b"<<endl;
	cin>>b;
	resultado = multiplicacao();
	
	return 0;
}
void multiplicacao(int a, int b){
	int resultado = a * b;
	cout<< resultado<<endl;
}
