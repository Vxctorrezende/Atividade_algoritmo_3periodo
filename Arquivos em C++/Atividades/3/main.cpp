#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip> // Para formatar saída de números

using namespace std;

struct Produto {
    string nome;
    int quantidade;
    float precoUnitario;
    float valorTotalProduto;
};

float calcularValorTotalEstoque(const vector<Produto>& produtos) {
    float total = 0.0;
    for (const auto& p : produtos) {
        total += p.valorTotalProduto;
    }
    return total;
}

int main() {
    int quantidadeProdutos;
    vector<Produto> estoque;

    cout << "Quantos produtos deseja cadastrar? ";
    cin >> quantidadeProdutos;
    cin.ignore(); // Limpa buffer

    for (int i = 0; i < quantidadeProdutos; i++) {
        Produto p;
        cout << "\nProduto " << (i + 1) << ":\n";
        cout << "Nome: ";
        getline(cin, p.nome);
        cout << "Quantidade: ";
        cin >> p.quantidade;
        cout << "Preco unitario (R$): ";
        cin >> p.precoUnitario;
        cin.ignore(); // Limpa buffer

        p.valorTotalProduto = p.quantidade * p.precoUnitario;
        estoque.push_back(p);
    }

    float valorTotalEstoque = calcularValorTotalEstoque(estoque);

    // Salvando no arquivo
    ofstream arquivo("estoque.txt");
    if (arquivo.is_open()) {
        arquivo << fixed << setprecision(2); // Formatação para 2 casas decimais
        arquivo << "Nome, Quantidade, Preco Unitario, Valor Total do Produto\n";
        for (const auto& p : estoque) {
            arquivo << p.nome << ", "
                    << p.quantidade << ", R$"
                    << p.precoUnitario << ", R$"
                    << p.valorTotalProduto << "\n";
        }
        arquivo << "\nValor Total do Estoque: R$" << valorTotalEstoque << "\n";
        arquivo.close();

        cout << "\nDados salvos em 'estoque.txt'.\n";
        cout << "Valor total do estoque: R$" << fixed << setprecision(2) << valorTotalEstoque << endl;
    } else {
        cout << "Erro ao abrir o arquivo!\n";
    }

    return 0;
}
