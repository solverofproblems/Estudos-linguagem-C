#include <iostream>
#include <list>

using namespace std;

int main(){
	
	list<int> lista_valores;
	
	
	for(int i = 0; i < 10 ; i++){
		
		
		lista_valores.push_front(i);
		
	}
	
	list<int> lista_dois;
	
	
	//Uma lista com 5 elementos com valor 9.
	lista_dois.push_front(9);
	lista_dois.push_front(9);
	lista_dois.push_front(9);
	lista_dois.push_front(9);
	lista_dois.push_front(9);
	
	
	//Aqui, a lista_valores irá RECEBER os valores da lista_dois.
	lista_valores.merge(lista_dois);
	
	//Ao final, perceba que o lista_valores tem seu número de elementos aumentado
	//Enquanto o lista_dois fica vazio.
	
	int tam_list = lista_valores.size();
	
	cout << "Tamanho da lista final: " << tam_list;
	
	if (lista_dois.empty()){
		
		cout << "\n\nA lista_dois realmente esta vazia.";
		
		
	};
	
	

	return 0;
};
