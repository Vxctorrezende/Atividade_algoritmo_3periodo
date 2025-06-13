#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Funcionario {
    string nome;
    int matricula;
    string cargo;
    float salario;
    string dataDeAdmissao;
};

void salvarFuncionarios(Funcionario* funcionarios, int quantidade) {
    ofstream arquivo("funcionarios.txt");
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo para escrita!" << endl;
        return;
    }

    for (int i = 0; i < quantidade; ++i) {
        arquivo << funcionarios[i].nome << endl;
        arquivo << funcionarios[i].matricula << endl;
        arquivo << funcionarios[i].cargo << endl;
        arquivo << funcionarios[i].salario << endl;
        arquivo << funcionarios[i].dataDeAdmissao << endl;
    }

    arquivo.close();
    cout << "Funcionarios salvos com sucesso em 'funcionarios.txt'.\n";
}
void lerFuncionarios() {
    ifstream arquivo("funcionarios.txt");
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo para leitura!" << endl;
        return;
    }

    Funcionario funcionario;
    cout << "Funcionarios Cadastrados: \n";

    while (arquivo >> funcionario.matricula) {
        arquivo.ignore();
        getline(arquivo, funcionario.nome);
        getline(arquivo, funcionario.cargo);
        arquivo >> funcionario.salario;
        arquivo >> funcionario.dataDeAdmissao;
        arquivo.ignore();
      
        cout << "\nNome: \n" << funcionario.nome << endl;
        cout << "\nMatricula: \n" << funcionario.matricula << endl;
        cout << "\nCargo: \n" << funcionario.cargo << endl;
        cout << "\nSalario: R$ \n" << funcionario.salario << endl;
        cout<< "\nData de admissao: \n"<< funcionario.dataDeAdmissao <<endl;
    }

    arquivo.close();
}
int main(){

    int quantidadeFuncionario;
    cout << "Digite a quantidade de funcionarios deseja cadastrar:  \n";
    cin >> quantidadeFuncionario;
    cin.ignore(); 

    Funcionario* funcionarios = new Funcionario[quantidadeFuncionario]; 

    for (int i = 0; i < quantidadeFuncionario; ++i) {
        cout << "\nFuncionario \n" << (i + 1) << ":\n";
        cout << "\nMatricula: \n";
        cin >> funcionarios[i].matricula;
        cin.ignore();

        cout << "\nNome: \n";
        getline(cin, funcionarios[i].nome);

        cout << "\nCargo: \n";
        getline(cin, funcionarios[i].cargo);

        cout << "\nSalario: R$ \n";
        cin >> funcionarios[i].salario;

        cout << "\nData de admissao: \n";
        getline(cin, funcionarios[i].dataDeAdmissao);
       cin.ignore();
    }

    salvarFuncionarios(funcionarios, quantidadeFuncionario);
    lerFuncionarios();
    
    delete[] funcionarios;

}