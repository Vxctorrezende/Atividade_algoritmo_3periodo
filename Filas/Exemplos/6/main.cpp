#include <iostream>
#include <queue>
using namespace std;

//exemplo com entrada do usuario
int main() {
    queue<int> fila;
    int n, valor;

    cout << "Digite o número de elementos a serem adicionados à fila: ";
    cin >> n;
    //adicionando elementos digitados pelo usuário à fila
    for (int i = 0; i < n; i++) {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> valor;
        fila.push(valor);
    }
    //exibindo o primeiro e o último elemento da fila
    if(!fila.empty()) {
        cout << "Primeiro elemento da fila (front): " << fila.front() << endl; // primeiro elemento
        cout << "Ultimo elemento da fila (back): " << fila.back() << endl; // ultimo elemento
    } 
    //verificando o tamanho da fila
    cout << "Tamanho da fila: " << fila.size() << endl; // tamanho da fila
    
    //verificando se a fila está vazia
    cout << "A fila vazia: " << (fila.empty() ? "sim" : "nao") << endl; // fila vazia

    //removendo elementos da fila
    cout << "Removendo elementos da fila: ";   
    while (!fila.empty()) {
        cout << "Removido: "<< fila.front()<<endl; 
        fila.pop(); // removendo o elemento
    }
    
    //verificando se a fila está vazia
    cout << "A fila vazia apor a remocao: " << (fila.empty() ? "sim" : "nao") << endl; // fila vazia
       
    return 0;
}