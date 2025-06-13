#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int* n1;
	int* n2;
	int* n3;
	int* soma;
	float* media;
	
	n1 = new int;
	n2 =  new int;
	n3 = new int;
	soma = new int;
	media = new float;
	
	cout<< "Digite o primeito numero "<<endl<<endl;
	cin>> *n1;
	cout<< "Digite o segundo numero "<<endl<<endl;
	cin>> *n2;
	cout<< "Digite o terceiro numero "<<endl<<endl;
	cin >> *n3;
	
	*soma = *n1 + *n2 + *n3;
	*media = *soma/3; // problema da divisão inteira
	
	cout<<"Soma = "<<*soma<<endl<<endl;
	cout<<"Media = "<<*media<<endl;
	
	delete n1;
	delete n2;
	delete n3;
	delete soma;
	delete media;
	
	return 0;
}
