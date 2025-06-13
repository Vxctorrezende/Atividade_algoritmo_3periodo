#include <iostream>
#include <queue>
#include <string>

using namespace std;
/*Simulador de música em uma playlist*/
int main() {
    setlocale(LC_ALL, "Portuguese");
    queue<string> playlist;
    string comando;

    while (true) {
        getline(cin, comando);

        if (comando.substr(0, 3) == "add") {
            string musica = comando.substr(4);
            playlist.push(musica);
        } else if (comando == "play") {
            if (!playlist.empty()) {
                cout << "Toca: " << playlist.front() << endl;
                playlist.pop();
            } else {
                cout << "Fila vazia" << endl;
            }
        } else if (comando == "show") {
            if (!playlist.empty()) {
                cout << "Proxima: " << playlist.front() << endl;
            } else {
                cout << "Fila vazia" << endl;
            }
        } else if (comando == "exit") {
            break;
        }
    }

    return 0;
}