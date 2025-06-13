#include <iostream>
#include <string>
using namespace std;

//estrutura de um Nó da lista encadeada
struct Node{
    int valor;  //valor armazenado no nó
    Node* proximo; //ponteiro para o proximo nó
};

//funcao para inserir um elemento no final da lista
void inserirFinal(Node*& head, int valor){
    Node* novo = new Node{valor, nullptr};

    //se a lista estiver vazia, novo nó vira a cabeça
    if (!head){
        head = novo;
        return;
    }
    //senao, percorre ate o fim da lista e insere la o novo nó
    Node* temp = head;
    while (temp -> proximo)
        temp = temp -> proximo;
    temp -> proximo = novo;
}

//funcao para exibir os elementos da lista
void exibirLista(Node* head){
    cout<<"Lista atual: ";
    while (head){
        cout<< head->valor<< " -> ";
        head = head->proximo;
    }
    cout<<"Null"<<endl;
}

//funcao pra remover o primeiro nó com valor especifico
void removerElemento(Node*& head, int valor){
    //se a lista estiver vazia, nao ha o que remover
    if(!head) return;

    //caso o valor esteja na cabeca da lista 
    if(head -> valor == valor){
        Node* temp = head;
        head = head -> proximo;
        delete temp;
        cout<<"Valor "<< valor << " removido da lista. \n";
        return;
    }

    //busca pelo valor nos demais nós
    Node* atual = head;
    while (atual -> proximo && atual -> proximo-> valor != valor){
        atual = atual -> proximo;
    }

    //se o valor foi entrado remove o nó
    if (atual -> proximo){
        Node* temp = atual -> proximo;
        atual -> proximo = temp -> proximo;
        delete temp;
        cout<<"Valor "<< valor << " removido da lista.\n";
    }else{
        cout<<"Valor "<< valor << " nao entrodo na lista. \n";
    }

int main(){

    Node* lista = nullptr; 
    string resposta;
    int valor;

    cout<< "==== Lista encadeada ====\n";
    // loop principal de inserçao / remoçao  / repetir
    do{
        //insercao de valores na lista
        cout<<"\nDigite numeros inteiros para inserir na lista (digite -1 para parar):\n";
        while(true){
            cout<< "valor: ";
            cin >> valor;
            if (valor = 1) break;
            inserirFinal(Lista, valor);
        }
        //exibe a lista apos a insercao
        exibirLista(lista);
        //remocao de valores
        cout<<"\nDeseja remover algum valor da lista? (s/n): ";
        cin >> resposta;
    } while ( resposta == "s" || resposta == "S");
    cout<<"\nFim do programa. Lista final: \n";
    exibirLista(lista);
    return 0;
}