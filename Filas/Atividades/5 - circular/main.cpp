#include <iostream>
#include <queue>
using namespace std;
/*
Posto de vacinacao com 2 senhas:
Um posto de saude distribui senhas para a vacinacao com uma fila circular de 2 posições. Faca um programa que:

1-Leia 2 senhas do teclado
2-Libere 1 pessoa
3-adicione 1 senha e exiba a fila circular
*/

int main() {
    queue<int> senhas;
    int senha;

    // Leitura de 2 senhas do teclado
    for (int i = 0; i < 2; i++) {
        cout << "Digite a senha: ";
        cin >> senha;
        senhas.push(senha);
    }

    // Liberação de 1 pessoa
    if (!senhas.empty()) {
        cout << "Liberando pessoa com a senha: " << senhas.front() << endl;
        senhas.pop();
    } else {
        cout << "Todas as senhas foram liberadas." << endl;
    }

    // Adição de 1 senha e exibição da fila circular
    cout << "Digite a nova senha: ";
    cin >> senha;
    senhas.push(senha);

    cout << "Fila circular atualizada: ";
    while (!senhas.empty()) {
        cout << senhas.front() << " ";
        senhas.pop();
    }
    cout << endl;

    return 0;
}