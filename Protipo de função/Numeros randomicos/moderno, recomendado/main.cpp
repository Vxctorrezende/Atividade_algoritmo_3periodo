#include <iostream>
#include <random>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	random_device rd; //Dispositivo de numero aleatorio
	mt19937 gen(rd()); //Mersenne Twister PRNG
	uniform_int_distribuition<int> dist(0,100); // Define intervalo entre 0 e 100
	
	int a = dist(gen); //Gera um numero no intervalo definido
	
	cout<< "Numero aleatorio: "<<a <<endl;
	
	return 0;
}
