#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> pilha;

    pilha.push(1);
    pilha.push(2);
    pilha.push(3);

    while( !pilha.empty() ){
        cout << pilha.top() << endl;
        pilha.pop();
    }
    return 0;
}