#include <iostream>
#include <queue>
#include <string>
//simulando uma fila de atendimentos
using namespace std;
int main() {
    queue<string> filaAtendimentos;
    filaAtendimentos.push("Victor");
    filaAtendimentos.push("Evellyn");
    filaAtendimentos.push("Isabelly");

    while(!filaAtendimentos.empty()) {
        cout << "Atendendo: " << filaAtendimentos.front() << endl; ///atendendo o primeiro da fila (front)
        filaAtendimentos.pop();
    }
    return 0;
}