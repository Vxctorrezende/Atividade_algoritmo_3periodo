#include <iostream>
#include <stack>
#include <string>
/*Verificador de palavras palindromas usando pilha*/
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    string palavra, invertida = "";
    cout << "Digite uma palavra: ";
    cin >> palavra;

    stack<char> pilha;

    // Empilha cada caractere da palavra
    for (char c : palavra) {
        pilha.push(c);
    }

    // Desempilha para inverter a palavra
    while (!pilha.empty()) {
        invertida += pilha.top();
        pilha.pop();
    }

    if (palavra == invertida) {
        cout << "E um palindromo!" << endl;
    } else {
        cout << "Nao e um palindromo." << endl;
    }

    return 0;
}