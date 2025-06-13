#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int a = 7;
	int b = 10;
	
	int* ptr1 = &a;
	int* ptr2 = &b;
	
	cout<<"O endereço de a na memória é:  "<< ptr1 <<endl;
	cout<<"O endereço de b na memória é:  "<< ptr2 <<endl<<endl;
	
	if(*ptr1 > *ptr2)
	cout<<"O valor original de a é maior: "<< *ptr1 <<endl;
	else
	cout<<"O valor original de b é maior: "<< *ptr2 <<endl;
	
	
	*ptr1 += 10;
	*ptr2 += 5;
	
	if(*ptr1 > *ptr2)
	cout<<"O valor modificado de a é maior: "<<*ptr1 <<endl<<endl;
	else
	cout<<"O valor modificado de b é maior: "<<*ptr2 <<endl<<endl;
	
	ptr2 = ptr1;
	
	cout<<"Agora os valores de a e de b são iguais, sendo : a =  "<<*ptr1 <<" e b = " <<*ptr2 <<endl;
	
	return 0;
}
