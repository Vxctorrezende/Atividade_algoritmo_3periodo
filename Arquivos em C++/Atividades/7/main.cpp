#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Livro {
    string titulo;
    string autor;
    int ano;
    string isbn;
};

void salvarLivros(Livro* livros, int quantidade) {
    ofstream arquivo("livros.txt");
    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo para escrita!" << endl;
        return;
    }

    for (int i = 0; i < quantidade; ++i) {
        arquivo << livros[i].titulo << endl;
        arquivo << livros[i].autor << endl;
        arquivo << livros[i].ano << endl;
        arquivo << livros[i].isbn << endl;
    }

    arquivo.close();
    cout << "\nLivros salvos com sucesso em 'livros.txt'.\n";
}

void lerLivros() {
    ifstream arquivo("livros.txt");
    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo para leitura!" << endl;
        return;
    }

    Livro livro;
    cout << "\n--- Livros Cadastrados ---\n";

    while (getline(arquivo, livro.titulo)) {
        getline(arquivo, livro.autor);
        arquivo >> livro.ano;
        arquivo.ignore(); // Pula o \n após o ano
        getline(arquivo, livro.isbn);

        cout << "Titulo: " << livro.titulo << endl;
        cout << "Autor: " << livro.autor << endl;
        cout << "Ano: " << livro.ano << endl;
        cout << "ISBN: " << livro.isbn << "\n\n";
    }

    arquivo.close();
}

int main() {
    int quantidade;

    cout << "Quantos livros deseja cadastrar? ";
    cin >> quantidade;
    cin.ignore(); // Limpa o buffer do teclado

    Livro* livros = new Livro[quantidade];

    for (int i = 0; i < quantidade; ++i) {
        cout << "\nLivro " << (i + 1) << ":\n";
        cout << "Titulo: ";
        getline(cin, livros[i].titulo);
        cout << "Autor: ";
        getline(cin, livros[i].autor);
        cout << "Ano de publicacao: ";
        cin >> livros[i].ano;
        cin.ignore();
        cout << "ISBN: ";
        getline(cin, livros[i].isbn);
    }

    salvarLivros(livros, quantidade);
    lerLivros();

    delete[] livros; // Libera a memória

    return 0;
}
