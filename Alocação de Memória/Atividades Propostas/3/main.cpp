#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int num_alunos; //m
	int num_disciplinas; //n
	
	cout<<"Digite o numero de alunos: "<<endl;
	cin>>num_alunos;
	cout<<"Digite o número de disciplinas: "<<endl;
	cin>>num_disciplinas;
	
	//alocação dinamica
	double** notas = new double*[num_alunos];
	for(int i = 0; i < num_alunos; i++){
		notas[i]= new double[num_disciplinas];
	}
	
	//dados
	for(int i =0 ; i< num_alunos; i++){
		cout<<"Digite as notas do aluno: "<<endl;
		for(int j = 0; j< num_disciplinas; j++){
			cout<<"Nota da disciplina: "<<endl;
			cin>>notas[i][j];
		}
	}
	
	
	//media
	cout<<"Medias dos alunos: "<<endl;
	for(int i = 0; i<num_alunos; i++){
		double soma = 0;
		for(int j=0; j<num_disciplinas; j++){
			soma += notas[i][j];
		}
		cout<<"Aluno "<< i+1<<" : "<<soma<<endl<<endl;
	}
	
	//desalocação na ordem inversa
	
	for(int i = 0; i < num_alunos; i++){
		delete[] notas[i];
	}
	delete[] notas;
	return 0;
}
