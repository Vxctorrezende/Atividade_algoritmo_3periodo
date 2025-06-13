#include <iostream>
#include <stack>
using namespace std;
int main(){
    setlocale(LC_ALL, "Portuguese");

    stack<string> s1, s2;

    s1.emplace("Ola");
    s1.emplace("Mundo");
    cout<<"Topo da pilha s1: "<< s1.top() << endl;

    s2.push("Estou");
    s2.push("Aqui");
    cout<<"Topo da pilha s2: "<< s2.top() << endl;

    s1.swap(s2);
    cout<<"Topo da nova pilha s1: "<< s1.top() << endl;
    cout<<"Topo da nova pilha s2: "<< s2.top() << endl;

    cout<<"Pilha s1 apos a troca: "<< endl;
    while(!s1.empty()){
        cout<< s1.top() << endl;
        s1.pop();
    }

    cout<<"Pilha s2 apos a troca: "<< endl;
    while(!s2.empty()){
        cout<< s2.top() << endl;
        s2.pop();
    }
    return 0;
}