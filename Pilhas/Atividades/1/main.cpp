#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
/* Verificador de anagramas*/
int main() {
    setlocale(LC_ALL, "Portuguese");
    string palavra1, palavra2;
    cout << "Digite a primeira palavra: ";
    cin >> palavra1;
    cout << "Digite a segunda palavra: ";
    cin >> palavra2;

    queue<char> fila1, fila2;

    for (char c : palavra1) fila1.push(c);
    for (char c : palavra2) fila2.push(c);

    // Coloca os caracteres das filas em vetores para ordenar
    vector<char> v1, v2;
    while (!fila1.empty()) {
        v1.push_back(fila1.front());
        fila1.pop();
    }
    while (!fila2.empty()) {
        v2.push_back(fila2.front());
        fila2.pop();
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    if (v1 == v2) {
        cout << "Sao anagramas!" << endl;
    } else {
        cout << "Nao sao anagramas." << endl;
    }

    return 0;
}