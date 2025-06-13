#include <iostream>
#include <queue>
using namespace std;

/*
Fila comum - impressora de documentos
Uma impressora domestica imprime documentos em ordem em que sao enviados.
Faca um programa em c++ que:
Leia 3 nomes de arquivos do usario.
Insira cada noem em uma fila.
Monstre a quantidade de documentos na fila.
Imprima o primeiro (removedo da fila) e mostre o proximo a ser impresso.
*/

int main(){

    queue<string>fila;
    string nomeArquivo;

    // Leitura dos nomes dos arquivos
    for(int i = 0; i< 3; i++){
        cout<< "Digite o nome do arquivo: ";
        cin>>nomeArquivo;
        fila.push(nomeArquivo);
    }

    // Mostra a quantidade de documentos na fila
    cout<< "Quantidade de documentos na fila: " << fila.size() << endl;
    // Imprime o primeiro arquivo (removido da fila)
    cout<< "Arquivo impresso: " << fila.front() << endl;
    fila.pop();
    // Mostra o proximo arquivo a ser impresso
    cout<< "Proximo arquivo a ser impresso: " << fila.front() << endl;
    fila.pop();
    // Mostra a quantidade de documentos restantes na fila
    cout<< "Quantidade de documentos restantes na fila: " << fila.size() << endl;
    // Imprime o proximo arquivo (removido da fila)
    cout<< "Arquivo impresso: " << fila.front() << endl;
    fila.pop();
    // Mostra a quantidade de documentos restantes na fila      
    cout<< "Quantidade de documentos restantes na fila: " << fila.size() << endl;
    // Verifica se a fila está vazia
    cout<< "Fila vazia: " << (fila.empty() ? "Sim" : "Nao") << endl; // Verifica se a fila está vazia
    
}