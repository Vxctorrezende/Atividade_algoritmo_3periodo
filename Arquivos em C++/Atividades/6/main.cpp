#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Funcionario {
    int id;
    string nome;
    string cargo;
    float salario;
};

void salvarFuncionarios(Funcionario* funcionarios, int quantidade) {
    ofstream arquivo("funcionarios.txt");
    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo para escrita!" << endl;
        return;
    }

    for (int i = 0; i < quantidade; ++i) {
        arquivo << funcionarios[i].id << endl;
        arquivo << funcionarios[i].nome << endl;
        arquivo << funcionarios[i].cargo << endl;
        arquivo << funcionarios[i].salario << endl;
    }

    arquivo.close();
    cout << "\nFuncionarios salvos com sucesso em 'funcionarios.txt'.\n";
}

void lerFuncionarios() {
    ifstream arquivo("funcionarios.txt");
    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo para leitura!" << endl;
        return;
    }

    Funcionario f;
    cout << "\n--- Funcionarios Cadastrados ---\n";

    while (arquivo >> f.id) {
        arquivo.ignore(); // Pula o \n após o ID
        getline(arquivo, f.nome);
        getline(arquivo, f.cargo);
        arquivo >> f.salario;
        arquivo.ignore(); // Pula o \n após o salário

        cout << "ID: " << f.id << endl;
        cout << "Nome: " << f.nome << endl;
        cout << "Cargo: " << f.cargo << endl;
        cout << "Salario: R$" << f.salario << "\n\n";
    }

    arquivo.close();
}

int main() {
    int quantidade;

    cout << "Quantos funcionarios deseja cadastrar? ";
    cin >> quantidade;
    cin.ignore(); // Limpa o buffer

    Funcionario* funcionarios = new Funcionario[quantidade]; // Alocação dinâmica

    for (int i = 0; i < quantidade; ++i) {
        cout << "\nFuncionario " << (i + 1) << ":\n";
        cout << "ID: ";
        cin >> funcionarios[i].id;
        cin.ignore();

        cout << "Nome: ";
        getline(cin, funcionarios[i].nome);

        cout << "Cargo: ";
        getline(cin, funcionarios[i].cargo);

        cout << "Salario: R$";
        cin >> funcionarios[i].salario;
        cin.ignore();
    }

    salvarFuncionarios(funcionarios, quantidade);
    lerFuncionarios();

    delete[] funcionarios; // Libera memória alocada

    return 0;
}
