#include <iostream>
using namespace std;

// estrutura do no
struct Node {
    int valor;
    Node* proximo;
};

// Funcao para inserir no final
void inserirFinal(Node*& inicio, int valor) {
    Node* novo = new Node{
        valor, nullptr
    };

    if (inicio == nullptr) {
        inicio = novo;
    } else {
        Node* atual = inicio;
        while (atual->proximo != nullptr) {
            atual = atual->proximo;
        }
        atual->proximo = novo;
    }
}

//Funcao para remover um valor específico
void removerValor(Node*& inicio, int valor) {
    if (inicio == nullptr) return;

    //Caso o valor esteja no primeiro nó
    if (inicio->valor == valor) {
        Node* temp = inicio;
        inicio = inicio->proximo;
        delete temp;
        return;
    }

    Node* atual = inicio;
    while (atual->proximo != nullptr && atual->proximo->valor != valor) {
        atual = atual->proximo;
    }

    if (atual->proximo != nullptr) {
        Node* temp = atual->proximo;
        atual->proximo = temp->proximo;
        delete temp;
    }
}

//Funcao para exibir a lista
void exibirLista(Node* inicio) {
    Node* atual = inicio;
    while (atual != nullptr) {
        cout << atual->valor << " ";
        atual = atual->proximo;
    }
    cout << endl;
}

//Funcao principal
int main() {
    Node* lista = nullptr;

    inserirFinal(lista, 10);
    inserirFinal(lista, 20);
    inserirFinal(lista, 30);

    removerValor(lista, 20);

    cout << "Lista apos remocao de 20: ";
    exibirLista(lista);

    return 0;
}
