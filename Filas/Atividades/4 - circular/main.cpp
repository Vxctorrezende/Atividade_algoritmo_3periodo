#include <iostream>
#include <queue>
using namespace std;

/*
Fila circular - armazem com 3 caixas

Um armazem tem 3 caixas para empacotar produtos. Quando todas estao cheias e ua é liberada,
a proxima caixa disponivel e usada no formato circular
1- insira 3 codigo de produtos
2- libera 1 caixa
3- insira 1 produto e exiba a fila circular

*/
int main() {
    queue<int> caixas;
    int codigo;

    // Inserção de 3 códigos de produtos
    for (int i = 0; i < 3; i++) {
        cout << "Digite o codigo do produto: ";
        cin >> codigo;
        caixas.push(codigo);
    }

    // Liberação de 1 caixa
    if (!caixas.empty()) {
        cout << "Liberando caixa com o codigo: " << caixas.front() << endl;
        caixas.pop();
    } else {
        cout << "Todas as caixas estao vazias." << endl;
    }

    // Inserção de 1 produto e exibição da fila circular
    cout << "Digite o codigo do novo produto: ";
    cin >> codigo;
    caixas.push(codigo);

    cout << "Fila circular atualizada: ";
    while (!caixas.empty()) {
        cout << caixas.front() << " ";
        caixas.pop();
    }
    cout << endl;

    return 0;
}