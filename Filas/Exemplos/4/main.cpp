#include <iostream>
#include <queue>

using namespace std;
//contanto o tamanho da fila e mostrando o ultimo elemento

int main() {
    queue<int> fila;
    //add elementos na fila
    fila.push(10);
    fila.push(20);
    fila.push(30);

    for (int i = 1; i <= 5; i++){
        fila.push(i);
    }
    //tamanho da fila
    cout << "Tamanho da fila: " <<fila.size() <<endl; //tamanho da fila
    //verificando se a fila está vazia
    if (fila.empty()){
        cout << "A fila esta vazia" << endl;
    } else {
        cout << "A fila nao esta vazia" << endl;
    }
    //mostrando o ultimo elemento inserido na fila
    cout << "Ultimo elemento da fila: " << fila.back() << endl; 

    return 0;
}