#include <iostream>
#include <fstream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	int matrizNum1[5][5], i , j, soma;
	int matrizNum2[5][5];
	double media;
	soma = 0;
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
		cout<<"Digite o "<<i+1<<" valor numerico da matriz\n";
		cin>>matrizNum1[i][j];
		}
	}
	ofstream escrever;
	escrever.open("matriznumerica.txt", ios::out);
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			escrever<<matrizNum1[i][j]<<" ";
		
		}
		escrever.close();
	}
	escrever.close();
	
	ifstream leitura;
	leitura.open("matriznumerica.txt", ios::in);
	
	for(i=0; i<5; i++){
		cout<<"\n";
		for(j=0; j<5; j++){
			leitura>> matrizNum1[i][j];
			soma+= matrizNum1[i][j];
		}
	}
	media = soma/25;
	cout<<"\n\n A media é = "<<media<<"\n\n";
	
	system("PAUSE");
	return 0;
}
