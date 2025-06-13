#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Aluno {
    string nome;
    float nota1, nota2, nota3;
    float media;
};

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

int main() {
    int quantidadeAlunos;
    vector<Aluno> alunos;

    cout << "Quantos alunos deseja cadastrar? ";
    cin >> quantidadeAlunos;
    cin.ignore(); // Limpa buffer do teclado

    for (int i = 0; i < quantidadeAlunos; i++) {
        Aluno a;
        cout << "\nAluno " << (i + 1) << ":\n";
        cout << "Nome: ";
        getline(cin, a.nome);
        cout << "Nota 1: ";
        cin >> a.nota1;
        cout << "Nota 2: ";
        cin >> a.nota2;
        cout << "Nota 3: ";
        cin >> a.nota3;
        cin.ignore(); // Limpa buffer

        a.media = calcularMedia(a.nota1, a.nota2, a.nota3);
        alunos.push_back(a);
    }

    ofstream arquivo("notas_alunos.txt");
    if (arquivo.is_open()) {
        arquivo << "Nome, Nota1, Nota2, Nota3, Media\n";
        for (const auto& aluno : alunos) {
            arquivo << aluno.nome << ", "
                    << aluno.nota1 << ", "
                    << aluno.nota2 << ", "
                    << aluno.nota3 << ", "
                    << aluno.media << "\n";
        }
        arquivo.close();
        cout << "\nDados salvos em 'notas_alunos.txt'.\n";
    } else {
        cout << "Erro ao abrir o arquivo!\n";
    }

    return 0;
}
