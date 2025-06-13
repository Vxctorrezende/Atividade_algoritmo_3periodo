#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Funcionario {
    string nome;
    int matricula;
    string cargo;
    double salario;
    string dataAdmissao;
};

void cadastrarFuncionario(Funcionario &f) {
    cin.ignore();
    cout << "Nome: ";
    getline(cin, f.nome);
    cout << "Matricula: ";
    cin >> f.matricula;
    cin.ignore();
    cout << "Cargo: ";
    getline(cin, f.cargo);
    cout << "Salario: ";
    cin >> f.salario;
    cin.ignore();
    cout << "Data de admissao (dd/mm/aaaa): ";
    getline(cin, f.dataAdmissao);
}


void salvarFuncionarios(Funcionario* funcionarios, int quantidade) {
    ofstream arquivo("funcionarios.txt", ios::out); 
    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo para escrita!" << endl;
        return;
    }

    for (int i = 0; i < quantidade; i++) {
        arquivo << funcionarios[i].nome << '\n'
                << funcionarios[i].matricula << '\n'
                << funcionarios[i].cargo << '\n'
                << funcionarios[i].salario << '\n'
                << funcionarios[i].dataAdmissao << '\n';
    }

    arquivo.close();
    cout << "Funcionarios salvos com sucesso!" << endl;
}


int carregarFuncionarios(Funcionario* funcionarios, int capacidade) {
    ifstream arquivo("funcionarios.txt");
    if (!arquivo) {
        cout << "Arquivo nao encontrado. Nenhum dado carregado." << endl;
        return 0;
    }

    int count = 0;
    while (count < capacidade && getline(arquivo, funcionarios[count].nome)) {
        arquivo >> funcionarios[count].matricula;
        arquivo.ignore();
        getline(arquivo, funcionarios[count].cargo);
        arquivo >> funcionarios[count].salario;
        arquivo.ignore();
        getline(arquivo, funcionarios[count].dataAdmissao);
        count++;
    }

    arquivo.close();
    return count;
}


void mostrarFuncionarios(Funcionario* funcionarios, int quantidade) {
    if (quantidade == 0) {
        cout << "Nenhum funcionario cadastrado." << endl;
        return;
    }

    for (int i = 0; i < quantidade; i++) {
        cout << "\nFuncionario " << (i + 1) << ":\n";
        cout << "Nome: " << funcionarios[i].nome << endl;
        cout << "Matricula: " << funcionarios[i].matricula << endl;
        cout << "Cargo: " << funcionarios[i].cargo << endl;
        cout << "Salario: " << funcionarios[i].salario << endl;
        cout << "Data de Admissao: " << funcionarios[i].dataAdmissao << endl;
    }
}

void atualizarFuncionario(Funcionario* funcionarios, int quantidade) {
    int matricula;
    cout << "Digite a matricula do funcionario a ser atualizado: ";
    cin >> matricula;

    for (int i = 0; i < quantidade; i++) {
        if (funcionarios[i].matricula == matricula) {
            cout << "Funcionario encontrado. Digite os novos dados:\n";
            cadastrarFuncionario(funcionarios[i]);
            cout << "Atualizacao realizada com sucesso!" << endl;
            return;
        }
    }

    cout << "Funcionario com matricula " << matricula << " nao encontrado." << endl;
}

int main() {
    int capacidade;
    cout << "Digite o numero maximo de funcionarios: ";
    cin >> capacidade;

    Funcionario* funcionarios = new Funcionario[capacidade];
    int quantidade = carregarFuncionarios(funcionarios, capacidade);

    int opcao;
    do {
        cout << "\n----- MENU -----\n";
        cout << "1. Cadastrar novo funcionario\n";
        cout << "2. Mostrar todos os funcionarios\n";
        cout << "3. Atualizar funcionario\n";
        cout << "4. Salvar funcionarios no arquivo\n";
        cout << "0. Sair\n";
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                if (quantidade < capacidade) {
                    cadastrarFuncionario(funcionarios[quantidade]);
                    quantidade++;
                } else {
                    cout << "Limite de funcionarios atingido.\n";
                }
                break;
            case 2:
                mostrarFuncionarios(funcionarios, quantidade);
                break;
            case 3:
                atualizarFuncionario(funcionarios, quantidade);
                break;
            case 4:
                salvarFuncionarios(funcionarios, quantidade);
                break;
            case 0:
                cout << "Encerrando o programa.\n";
                break;
            default:
                cout << "Opcao invalida.\n";
        }

    } while (opcao != 0);

    delete[] funcionarios;
    return 0;
}