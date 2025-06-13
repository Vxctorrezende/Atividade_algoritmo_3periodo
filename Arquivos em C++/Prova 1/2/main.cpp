#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Desempenho{
    string dataServiço;
    float kilometragemPercorrida;
    float ganhos;
    string comentario;
};


const int diasDaSemana = 7;

const string nomesDias[diasDaSemana] = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"};
void registroDesempenho(Desempenho* desempenho) {
    ofstream arquivo("analiseDesempenho.txt");
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo para escrita!" << endl;
        return;
    }
    for (int i = 0; i < diasDaSemana; ++i) {
        arquivo << desempenho[i].dataServiço << endl;
        arquivo << desempenho[i].kilometragemPercorrida << endl;
        arquivo << desempenho[i].ganhos << endl;
        arquivo << desempenho[i].comentario << endl;
    }

    arquivo.close();
    cout << "Analise de desempenho salva com sucesso em 'analiseDesempenho.txt'.\n";
}
void lerRegistroDesempenho() {
    ifstream arquivo("analiseDesempenho.txt");
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo para leitura!" << endl;
        return;
    }

    Desempenho desempenhoMotorista;
    cout << "Dados: \n";

    while (arquivo >> desempenhoMotorista.nomesDias) {
        arquivo.ignore();
        getline(arquivo.desempenhoMotorista.dataServiço);
        arquivo.desempenhoMotorista.kilometragemPercorrida);
        arquivo >> desempenhoMotorista.ganhos;
        arquivo >> desempenhoMotorista.comentario;
        arquivo.ignore();
      
        cout << "\nData do serviço: \n" << desempenhoMotorista.dataServiço << endl;
        cout << "\n Kilometragem percorrida: \n" << desempenhoMotorista.kilometragemPercorrida << endl;
        cout << "\n Ganhos: \n" << desempenhoMotorista.ganhos << endl;
        cout << "\n Comentarios: R$ \n" << desempenhoMotorista.comentario << endl;
       
    }

    arquivo.close();
}
int main(){


}