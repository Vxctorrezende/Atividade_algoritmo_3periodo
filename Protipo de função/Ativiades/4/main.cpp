#include <iostream>
#include <cmath>  

using namespace std;

float areaCirculo(float raio);

int main() {
	
    float raio = 5;

 
   // cout << "Digite o valor do raio do circulo: "<<endl;
   // cin >> raio;

    float area = areaCirculo(raio);
    cout << "A area do circulo e: " << area <<endl;

    return 0;
}

float areaCirculo(float raio) {
    return M_PI * pow(raio, 2);
}

