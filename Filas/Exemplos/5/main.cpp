#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int>fila;
    // Adicionando elementos à fila
    fila.push(5);
    fila.push(10);
    fila.push(15);
    //consultando o primeiro e o ultimo elemento da fila
    cout<< "Primeiro elemento da fila (front): " << fila.front() << endl; // primeiro elemento
    cout<< "Ultimo elemento da fila (back): " << fila.back() << endl; // ultimo elemento

    //verificando o tamanho da fila
    cout<< "Tamanho da fila: " << fila.size() << endl; // tamanho da fila
    //verificando se a fila está vazia
    if (fila.empty()){
        cout << "A fila esta vazia" << endl;
    } else {
        cout << "A fila nao esta vazia" << endl;
    }

    //removendo os elementos da frente da fila
    cout << "Removendo elementos da fila:" << endl;
    while (!fila.empty()) {
        cout<< "Removido: " << fila.front() << " ";
        fila.pop(); // remove o elemento da frente
    }
    
    //verificando novamente se a fila está vazia
    cout<<"A fila esta vazia agora? " <<(fila.empty() ? "sim" : "nao")<< endl;
    
    return 0;
    }
    
