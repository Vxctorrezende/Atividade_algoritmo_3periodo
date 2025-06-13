#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(0)); // Inicializa como tempo atual;
	
	cout<<"Numero aleatorio com rand(): " << rand() % 300 <<endl; //Numero entre 0 e 99
	return 0;
}
