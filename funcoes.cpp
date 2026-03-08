#include <iostream>

using namespace std;

void texto(); //Aqui nós precisamos prototipar essas funções seguindo exatamente a estrutura que a função criada necessita!
int soma_valores(int n1, int n2);

//Sobrecarga de funções. Veja que há duas funções com o mesmo nome...
void soma();
void soma (int n1, int n2);

void nome(string n="Carlos"); //O nome "Carlos" é default.

int main() {
	
	
	//Caso em que definimos um nome para a função:
	
	nome("Pedro");
	
	//Caso em que a função recorre ao valor default:
	
	nome();
	
	
	return 0;
};

void nome(string n){
	
	cout << "Seu nome e: " << n <<endl;
	
}


//Funções
void texto(){
	
	cout << "Primeira funcao feita em C++!\n";
	
	
};

int soma_valores(int n1, int n2){
	
	int soma = n1 + n2;
	return soma;
	
	
}

//Sobrecarga de funções:

void soma(){
	
	int n1=12, n2=24, soma;
	soma = n1 + n2;
	cout << "A soma de: " << n1 << " com " << n2 << " e igual a: " << soma;
	
}

void soma(int n1, int n2){
	
	cout << "A soma de: " << n1 << " com " << n2 << " e igual a: " << n1 + n2;

}



