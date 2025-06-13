#include <iostream>
#include <stack>

using namespace std;
int main(){
    setlocale(LC_ALL, "Portuguese");

    stack<int> pilha;

    pilha.push(100);
    pilha.push(200);   
    pilha.push(300);
    pilha.push(400);
    pilha.push(500);

    cout<< "Topo: "<< pilha.top() << endl;
    cout<< "Tamanho: "<< pilha.size() << endl;

    while(!pilha.empty()){
        cout<< "Removendo: "<< pilha.top() << endl;
        pilha.pop();
    }
    return 0;
}