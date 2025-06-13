#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

struct Registro {
    string data;
    double km;
    double valor;
    string relato;
};

int contarPalavras(string texto) {
    istringstream ss(texto);
    string palavra;
    int cont = 0;
    while (ss >> palavra) {
        cont++;
    }
    return cont;
}

void criarArquivoTexto() {
    ofstream arquivo("relatorio_motorista.txt");
    if (!arquivo.is_open()) {
        cout << "Erro ao criar o arquivo!" << endl;
        return;
    }

    arquivo << "2025-04-21\n100.5 350.75\nCorridas tranquilas, sem problemas.\n\n";
    arquivo << "2025-04-22\n85.0 290.50\nMovimento fraco a tarde.\n\n";
    arquivo << "2025-04-23\n95.3 310.20\nChuva atrasou alguns trajetos.\n\n";
    arquivo << "2025-04-24\n110.0 400.00\nDia de muito trabalho.\n\n";
    arquivo << "2025-04-25\n70.2 220.00\nTrânsito leve pela manhã.\n\n";
    arquivo << "2025-04-26\n120.1 430.90\nBastante demanda no centro.\n\n";
    arquivo << "2025-04-27\n65.8 200.50\nPoucas corridas, mas boas gorjetas.\n";

    arquivo.close();
    cout << "Arquivo 'relatorio_motorista.txt' criado com sucesso!\n";
}

int main() {
    const int DIAS = 7;
    Registro registros[DIAS];

    // 1. Criar o arquivo de texto com dados
    criarArquivoTexto();

    // 2. Abrir e ler o arquivo
    ifstream arquivo("relatorio_motorista.txt");
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    double totalKm = 0;
    double totalValor = 0;
    int totalPalavras = 0;

    for (int i = 0; i < DIAS; i++) {
        getline(arquivo, registros[i].data);
        arquivo >> registros[i].km >> registros[i].valor;
        arquivo.ignore(); // Pula o \n
        getline(arquivo, registros[i].relato);
        arquivo.ignore(); // Pula linha em branco

        totalKm += registros[i].km;
        totalValor += registros[i].valor;
        totalPalavras += contarPalavras(registros[i].relato);
    }
    arquivo.close();

    double media = (totalKm > 0) ? (totalValor / totalKm) : 0;

    // 3. Mostrar o relatório
    cout << fixed << setprecision(2);
    cout << "\n======= RELATORIO FINAL =======\n";
    cout << "Total de km percorridos: " << totalKm << " km\n";
    cout << "Total arrecadado: R$ " << totalValor << "\n";
    cout << "Media de ganho por km: R$ " << media << "\n";
    cout << "Total de palavras nos relatos: " << totalPalavras << "\n";
    cout << "===============================\n";

	return 0;
}