#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int linhas, colunas;
	
	cout<<"Digite o numero de linhas"<<endl;
	cin>>linhas;
	cout<<"Digite o numero de colunas"<<endl;
	cin>>colunas;
	
	//Alocação dinamica da matriz
	
	int** matriz = new int*[linhas];
	for(int i = 0; i < linhas; i++){
		matriz [i] = new int[colunas];
	}
	
	//Preenchendo a matriz
	
	for (int i = 0; i < linhas; i++){
		for (int j = 0; j < colunas; j++){
			matriz[i][j] = i * colunas + j;
		}
	}
	
	//impriindo a matriz
	
	cout<<"Matriz: "<< endl;
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			cout << matriz[i][j];
		}
		cout<< endl;
	}
	
	//Liberando a memoria
	
	for(int i = 0; i < linhas; i++){
		delete[] matriz[i];
	}
	delete[] matriz;
	return 0;
}
