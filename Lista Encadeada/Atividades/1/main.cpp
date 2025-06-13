#include  <iostream>
#include <string>
using namespace std;

struct Node {
    string nome;
    int idade;
    float altura;
    Node* proximo;
};

//cadastro da pessoas
void inserirPessoa(Node* head){
    Node* novo = new Node();
    cout <<"Nome: ";
    getline(cin >> ws, novo->nome);
    cout <<"Idade: ";
    cin >> novo->idade;
    cout<<"Altura: ";
    cin>> novo->altura;
    novo->proximo = nullptr;

    if (head == nullptr){
        head = novo;
    } else {
        Node* temp = head;
        while (temp->proximo != nullptr){
            temp = temp->proximo;
        }
        temp->proximo = novo;
    }
}

//fuuncao para exibir todas as pessoas da lista
void exibirLista(Node* head){
    if (head == nullptr){
        cout<<"Lista vazia. \n";
        return;
    }
    cout<<"\n Pessoas cadatradas: \n";
    Node* temp = head;
    while (temp != nullptr){
        cout<<" Nome: "<< temp->nome <<", Idade: "<<", Altura: " <<temp->altura<<endl;
        temp = temp->proximo;
    }
}

//funcao para remover pessoas pelo nome
void removerPessoas(Node* head, const string& nome){
    Node* atual = head;
    Node* anterior = nullptr;
    
    while (atual!= nullptr && atual->nome !=nome){
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == nullptr){
        cout<< "Nome nao encontrado. \n";
        return;
    }

     if (anterior == nullptr) {
        head = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }
    delete atual;
    cout << "Pessoa removida com sucesso.\n";
}

//funcao para liberar a memoria da lista
void liberarLista(Node* head){
    Node* temp;
    while( head!= nullptr){
        temp = head;
        head = head->proximo;
        delete temp;
    }
}

int main(){
    Node* lista = nullptr;
    char opcao;
    string nomeRemover;

    do{
        inserirPessoa(lista);
        exibirLista(lista);
        //Insercao de pessoas
        do{
            inserirPessoa(lista);
            exibirLista(lista);
            cout<<"\nDeseja inserir outra pessoa? (s/n)";
            cin>> opcao;
        } while (opcao == 's' || opcao == 'S');

        //remocao de pessoas
        do{
            cout<<"\nDeseja remover uma pessoa? (s/n)";
            cin >> opcao;

            if(opcao == 's' || opcao == 'S'){
                cout<<"Digite o nome da pessoa que deseja remover: ";
                getline(cin>> ws, nomeRemover);
                removerPessoas(lista, nomeRemover);
                exibirLista(lista);
            }
        } while(opcao == 's' || opcao == 'S');

        cout<<"\nDeseja inserir mais pessoas? (s/n): ";
        cin >> opcao;
    } while (opcao == 's' || opcao == 'S');

    cout << "\nLista final de pessoas:\n";
    exibirLista(lista);
    liberarLista(lista);
    return 0;
}