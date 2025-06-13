#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> fila;
/*
    .push() -> Adiciona um elemento ao final da fila
    .pop() -> Remove o primeiro elemento da fila
    .front]() -> Retorna o primeiro elemento da fila
    .back() -> Retorna o último elemento da fila
    .size() -> Retorna o tamanho da fila
    .empty() -> Retorna true se a fila estiver vazia
*/

    fila.push(5);
    fila.push(10);
    fila.push(15);

    cout<<"Primeiro elemento da fila: "<<fila.front()<<endl; //5
    fila.pop();
    cout<<"Novo primeiro elemento da fila: "<<fila.front()<<endl; //10
    
    return 0;
}