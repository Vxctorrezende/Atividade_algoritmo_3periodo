#include <iostream>
#include <string>

using namespace std;


const int NUM_PESSOAS = 10;


void lerDados(string nomes[], int idades[], float alturas[]);
void imprimirMaisVelha(const string nomes[], const int idades[], int n);
void imprimirMaisNova(const string nomes[], const int idades[], const float alturas[], int n);

int main() {
    string nomes[NUM_PESSOAS];
    int idades[NUM_PESSOAS];
    float alturas[NUM_PESSOAS];
    
    lerDados(nomes, idades, alturas);

    imprimirMaisVelha(nomes, idades, NUM_PESSOAS);

    imprimirMaisNova(nomes, idades, alturas, NUM_PESSOAS);

    return 0;
}

void lerDados(string nomes[], int idades[], float alturas[]) {
    for (int i = 0; i < NUM_PESSOAS; i++) {
        cout << "Digite o nome da pessoa " << i + 1 << ": ";
        cin >> nomes[i];
        
        cout << "Digite a idade de " << nomes[i] << ": ";
        cin >> idades[i];
        
        cout << "Digite a altura de " << nomes[i] << ": ";
        cin >> alturas[i];
    }
}

void imprimirMaisVelha(const string nomes[], const int idades[], int n) {
    int idadeMax = idades[0];
    string nomeMaisVelha = nomes[0];
    
    for (int i = 1; i < n; i++) {
        if (idades[i] > idadeMax) {
            idadeMax = idades[i];
            nomeMaisVelha = nomes[i];
        }
    }
    
    cout << "A pessoa mais velha é: " << nomeMaisVelha << " com " << idadeMax << " anos." << endl;
}

void imprimirMaisNova(const string nomes[], const int idades[], const float alturas[], int n) {
    int idadeMin = idades[0];
    string nomeMaisNova = nomes[0];
    float alturaMaisNova = alturas[0];
    
    for (int i = 1; i < n; i++) {
        if (idades[i] < idadeMin) {
            idadeMin = idades[i];
            nomeMaisNova = nomes[i];
            alturaMaisNova = alturas[i];
        }
    }
    
    cout << "A pessoa mais nova é: " << nomeMaisNova << " com " << idadeMin << " anos e " << alturaMaisNova << " metros de altura." << endl;
}

