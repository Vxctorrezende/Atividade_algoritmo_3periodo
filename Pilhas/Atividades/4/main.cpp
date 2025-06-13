#include <iostream>
#include <stack>
using namespace std;
/*Conversor de numero decimal para binario*/
int main() {
    int decimal;
    cout << "Digite um numero decimal: ";
    cin >> decimal;

    if (decimal == 0) {
        cout << "0" << endl;
        return 0;
    }

    stack<int> pilha;
    int n = decimal;

    // Empilha os restos da divisão por 2
    while (n > 0) {
        pilha.push(n % 2);
        n /= 2;
    }

    cout << "Binario: ";
    // Desempilha para formar o número binário
    while (!pilha.empty()) {
        cout << pilha.top();
        pilha.pop();
    }
    cout << endl;

    return 0;
}