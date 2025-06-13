#include <iostream>
#include <fstream>
#include <vector>
#include <limits>

using namespace std;

const int DIAS_SEMANA = 7;
const int PERIODOS_DIA = 3;
const string NOMES_DIAS[DIAS_SEMANA] = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"};
const string NOMES_PERIODOS[PERIODOS_DIA] = {"Manha", "Tarde", "Noite"};

// Função para registrar as temperaturas no arquivo
void registrarTemperaturas(const string& nomeArquivo) {
    ofstream arquivo(nomeArquivo);

    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo para escrita!" << endl;
        return;
    }

    for (int dia = 0; dia < DIAS_SEMANA; ++dia) {
        for (int periodo = 0; periodo < PERIODOS_DIA; ++periodo) {
            float temperatura;
            cout << "Digite a temperatura de " << NOMES_DIAS[dia] << " (" << NOMES_PERIODOS[periodo] << "): ";
            cin >> temperatura;
            arquivo << temperatura << " ";
        }
        arquivo << endl;
    }

    arquivo.close();
    cout << "Temperaturas registradas com sucesso em '" << nomeArquivo << "'!" << endl;
}

// Função para analisar as temperaturas no arquivo
void analisarTemperaturas(const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo para leitura!" << endl;
        return;
    }

    float temperatura, soma = 0.0, maior = numeric_limits<float>::lowest(), menor = numeric_limits<float>::max();
    int total = 0;

    while (arquivo >> temperatura) {
        soma += temperatura;
        if (temperatura > maior) maior = temperatura;
        if (temperatura < menor) menor = temperatura;
        total++;
    }

    arquivo.close();

    if (total == 0) {
        cout << "Nenhuma temperatura registrada." << endl;
        return;
    }

    cout << "\n--- Analise de Temperaturas ---" << endl;
    cout << "Maior temperatura: " << maior << " graus celsius" << endl;
    cout << "Menor temperatura: " << menor << " graus celsius" << endl;
    cout << "Temperatura media: " << soma / total << " graus celsius" << endl;
}

int main() {
    string nomeArquivo = "temperaturas.txt";

    int opcao;
    do {
        cout << "\n=== Menu ===" << endl;
        cout << "1. Registrar temperaturas" << endl;
        cout << "2. Analisar temperaturas" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                registrarTemperaturas(nomeArquivo);
                break;
            case 2:
                analisarTemperaturas(nomeArquivo);
                break;
            case 0:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }
    } while (opcao != 0);

    return 0;
}
