#include <iostream>
#include <queue>
using namespace std;
/*  Fila comum - Atendimento em um consultorio
Um consultorio medico quer organizar o atendimento dos pacientes pela orgem de chegada.
Implemente um programa em c++ que: 
1- adicione tres pacientes : "Joao", "Maria" e "Carlos".
2- monstre o proximo a ser atendido.
3- remova o paciente que foi atendido.
4- mostre o proximo a ser atendido.
*/
int main() {

    queue<string> fila; // Declara uma fila de strings
    fila.push("Joao"); // Adiciona "Joao" à fila    
    fila.push("Maria"); // Adiciona "Maria" à fila
    fila.push("Carlos"); // Adiciona "Carlos" à fila
    cout << "Proximo a ser atendido: " << fila.front() << endl; // Mostra o proximo a ser atendido
    fila.pop(); // Remove o paciente que foi atendido
    cout << "Proximo a ser atendido: " << fila.front() << endl; // Mostra o proximo a ser atendido
    fila.pop(); // Remove o paciente que foi atendido
    cout << "Proximo a ser atendido: " << fila.front() << endl; // Mostra o proximo a ser atendido
    fila.pop(); // Remove o paciente que foi atendido
    cout << "Fila vazia: " << (fila.empty() ? "Sim" : "Nao") << endl; // Verifica se a fila está vazia


    return 0; 
}