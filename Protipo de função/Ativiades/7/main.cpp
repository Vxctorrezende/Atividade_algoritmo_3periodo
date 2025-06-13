#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    srand(time(0));

    int num1 = rand() % 201;  
    cout << "Numero aleatorio entre 0 e 200: " << num1 << endl;

    int num2 = 250 + rand() % 251;  
    cout << "Numero aleatorio entre 250 e 500: " << num2 << endl;

    int num3 = rand();  
    cout << "Numero aleatorio ate RAND_MAX: " << num3 << endl;

    return 0;
}

