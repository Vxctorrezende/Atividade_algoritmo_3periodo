#include <iostream>
#include <queue>
using namespace std;
//contanto o tamanho da fila e mostrando os elementos

int main() {
    queue<int>fila;

    for (int i = 1; i <= 5; i++){
        fila.push(i);
    }
    cout << "Tamanho da fila: " <<fila.size() <<endl; //tamanho da fila

    while (!fila.empty()){
        cout << "Primeiro elemento da fila: " << fila.front() << endl; //primeiro elemento da fila
        fila.pop(); //remove o primeiro elemento da fila
    }

    return 0;
}