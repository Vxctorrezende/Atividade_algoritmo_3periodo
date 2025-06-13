#include <iostream>
#include <stack>
#include <string>
using namespace std;
/*Desfazer acoes de um editor*/
int main() {
    stack<string> acoes;

    // Empilha as ações
    acoes.push("Digitar");
    acoes.push("Copiar");
    acoes.push("Colar");

    // Mostra a última ação
    cout << "Ultima acao: " << acoes.top() << endl;

    // Desfaz (remove) a última ação
    acoes.pop();

    // Mostra a nova última ação
    if (!acoes.empty()) {
        cout << "Acao apos desfazer: " << acoes.top() << endl;
    } else {
        cout << "Nenhuma acao restante." << endl;
    }

    return 0;
}