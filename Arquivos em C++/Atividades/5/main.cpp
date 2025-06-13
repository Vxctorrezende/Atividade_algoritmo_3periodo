#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int contarPalavras(const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo); // Abre o arquivo para leitura
    if (!arquivo) {
        cerr << "Erro: Não foi possível abrir o arquivo '" << nomeArquivo << "'. Verifique se o caminho está correto e se o arquivo existe." << endl;
        return -1;
    }

    string linha;
    int totalPalavras = 0;

    while (getline(arquivo, linha)) {
        istringstream ss(linha);
        string palavra;
        while (ss >> palavra) {
            totalPalavras++;
        }
    }

    arquivo.close();
    return totalPalavras;
}

int main() {
    string nomeArquivo;

    cout << "Digite o caminho ou nome do arquivo de texto (ex: texto.txt ou C:\\caminho\\arquivo.txt): ";
    getline(cin, nomeArquivo); // Permite ler espaços ou caminhos completos

    int palavras = contarPalavras(nomeArquivo);

    if (palavras >= 0) {
        cout << "\nTotal de palavras no arquivo '" << nomeArquivo << "': " << palavras << endl;
    }

    return 0;
}
