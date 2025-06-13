#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	int linhas = 3, colunas = 4;
	
	//Alocação dinamica da matriz
	
	int** matriz = new int*[linhas];
	for(int i = 0; i < linhas; i++){
		matriz[i] = new int[colunas];
	}
	
	//Preenchendo a matriz
	
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			matriz[i][j] = i * colunas +j;
		}
	}
	
	//Imprimindo a matriz
	
	for (int i = 0; i < linhas; i++){
		for (int j = 0; j < colunas; j++){
			cout<< matriz[i][j]<< " ";	
		}
		cout<<endl;
	}
	
	//Liberação de memória 
	for (int i = 0; i< linhas; i++){
		delete[] matriz [i];
	}
	delete[] matriz;
	
	

	return 0;
}
