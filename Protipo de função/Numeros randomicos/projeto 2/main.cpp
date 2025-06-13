//antigo menos recomendado
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(0)); //define a semente baseada no tempo real
	
	int numero1 = rand() % 100; //numero aleatorio entre 0 e 99
	int numero2 = rand() % 50 + 1; //numero aleatorio entre 1 e 50
	int numero3 = rand(); //numero aleatorio
	
	cout<<"Numero aleatorio entre 0 e 99: "<< numero1<<endl;
	cout<<"Numero aleatorio entre 1 e 50: " << numero2 <<endl;
	cout<<"Numero aleatorio: "<< numero3<<endl;
	
	cout<<"Intervalo: 0 - " << RAND_MAX<<endl;
	return 0;
}
