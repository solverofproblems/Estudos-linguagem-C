#include <iostream>
#include <list>

using namespace std;

int main(){
		
	
	list <int> testes;
	
	for (int x; x<10; x++){
		
		testes.push_back(x);
		
	};
	
	//Criando um iterador para especificar o índice da lista que eu desejo modificar.
	list <int>::iterator indice_especifico;
	
	//Inicializei o meu iterator...
	indice_especifico = testes.begin();
	
	//Configurei ele de modo a declarar que ele referenciará o índice 0
	advance(indice_especifico, 0);
	
	//Substituindo o valor presente no índice 0 que está sendo representado por "it"...
	testes.insert(indice_especifico, 1000);
	


	int tamanho = testes.size();
	for (int y; y<tamanho; y++){
		
		cout << testes.front() <<endl;
		testes.pop_front();
		
		
	};


	return 0;
};
