#include <iostream>
#include <queue>
using namespace std;

/*
Lanchonete:
Em uma lanchonete os pedidos sao atendidos na ordem de chegada. Implemente:
1-Insercao de 2 pedidos do usuario.
2- Verificacao se a fila esta vazia.
3-Exibicao do ultimo pedido da fila.
*/
int main() {
    queue<string> pedidos;
    string pedido;

    // Insercao de 2 pedidos do usuário
    for (int i = 0; i < 2; i++) {
        cout << "Digite o pedido: ";
        cin >> pedido;
        pedidos.push(pedido);
    }

    // Verificação se a fila está vazia
    if (pedidos.empty()) {
        cout << "A fila esta vazia." << endl;
    } else {
        cout << "A fila nao esta vazia." << endl;
    }

    // Exibição do último pedido da fila
    cout << "Ultimo pedido na fila: " << pedidos.back() << endl;
   
  

    return 0;
}