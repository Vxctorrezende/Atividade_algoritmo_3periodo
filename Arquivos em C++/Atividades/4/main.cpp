#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct DiaViagem {
    string diaSemana;
    float kmPercorridos;
    float valorArrecadado;
};

int main() {
    vector<DiaViagem> semana = {
        {"Segunda-feira", 0, 0},
        {"Terca-feira", 0, 0},
        {"Quarta-feira", 0, 0},
        {"Quinta-feira", 0, 0},
        {"Sexta-feira", 0, 0},
        {"Sabado", 0, 0},
        {"Domingo", 0, 0}
    };

    float totalKm = 0;
    float totalFaturamento = 0;

    cout << "Registro de Viagens da Semana\n";

    for (auto& dia : semana) {
        cout << "\n" << dia.diaSemana << ":\n";
        cout << "Quilometragem percorrida (km): ";
        cin >> dia.kmPercorridos;
        cout << "Valor arrecadado (R$): ";
        cin >> dia.valorArrecadado;

        totalKm += dia.kmPercorridos;
        totalFaturamento += dia.valorArrecadado;
    }

    // Grava no arquivo
    ofstream arquivo("relatorio_viagens.txt");
    if (arquivo.is_open()) {
        arquivo << fixed << setprecision(2);
        arquivo << "Relatorio de Viagens - Semana\n";
        arquivo << "--------------------------------------\n";
        for (const auto& dia : semana) {
            arquivo << dia.diaSemana << " - Km: " << dia.kmPercorridos
                    << ", Arrecadado: R$" << dia.valorArrecadado << "\n";
        }
        arquivo << "--------------------------------------\n";
        arquivo << "Total de Km Percorridos: " << totalKm << " km\n";
        arquivo << "Faturamento Total: R$" << totalFaturamento << "\n";
        arquivo.close();

        cout << "\nRelatorio salvo em 'relatorio_viagens.txt'.\n";
    } else {
        cout << "Erro ao salvar o relatório!\n";
    }

    return 0;
}
