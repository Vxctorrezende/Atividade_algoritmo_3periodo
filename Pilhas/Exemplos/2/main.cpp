#include <iostream>
#include <stack>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    stack<string> historico;

    historico.push("acao 1");
    historico.push("acao 2");

    cout<< "Desfazendo: "<< historico.top() << endl;
    historico.pop();
    cout<<"Desfazendo: "<< historico.top() << endl;
    historico.pop();

    return 0;
}