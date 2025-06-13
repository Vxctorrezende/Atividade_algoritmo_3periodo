#include <iostream>
#include <string>
using namespace std;

//Estrutura do nó da lista
struct Pessoa {
    string nome;
    int idade;
    float altura;
    Pessoa* proximo;
};

//FUncao inserir pessoa no final da lista
void inserirPessoa(Pessoa*& inicio, const string& nome, int idade, float altura) {
    Pessoa* nova = new Pessoa{nome, idade, altura, nullptr};

    if (inicio == nullptr) {
        inicio = nova;
    } else {
        Pessoa* atual = inicio;
        while (atual->proximo != nullptr) {
            atual = atual->proximo;
        }
        atual->proximo = nova;
    }
}

//Funcao Remover pessoa por nome
void removerPessoa(Pessoa*& inicio, const string& nome) {
    if (inicio == nullptr) return;

    //Se a pessoa a ser removida está no início
    if (inicio->nome == nome) {
        Pessoa* temp = inicio;
        inicio = inicio->proximo;
        delete temp;
        cout << "A pessoa removida.\n";
        return;
    }

    Pessoa* atual = inicio;
    while (atual->proximo != nullptr && atual->proximo->nome != nome) {
        atual = atual->proximo;
    }

    if (atual->proximo != nullptr) {
        Pessoa* temp = atual->proximo;
        atual->proximo = temp->proximo;
        delete temp;
        cout << "A pessoa removida .\n";
    } else {
        cout << "A pessoa nao encontrada.\n";
    }
}

//Funcao exibir a lista de pessoas
void exibirLista(Pessoa* inicio) {
    Pessoa* atual = inicio;
    cout << "Lista de pessoas:\n";
    while (atual != nullptr) {
        cout << "Nome: " << atual->nome
             << ", Idade: " << atual->idade
             << ", Altura: " << atual->altura << "m\n";
        atual = atual->proximo;
    }
    cout << "###################\n";
}

int main() {
    Pessoa* lista = nullptr;

    for (int i = 1; i <= 3; i++) {
        string nome;
        int idade;
        float altura;

        cout << "Cadastro da pessoa " << i << ":\n";
        cout << "Nome: ";
        getline(cin, nome);
        cout << "Idade: ";
        cin >> idade;
        cout << "Altura (em metros): ";
        cin >> altura;
        cin.ignore();

        inserirPessoa(lista, nome, idade, altura);
        exibirLista(lista);
    }

    string nomeRemover;
    cout << "Digite o nome da pessoa que deseja remover: ";
    getline(cin, nomeRemover);
    removerPessoa(lista, nomeRemover);

    exibirLista(lista);

    return 0;
}
