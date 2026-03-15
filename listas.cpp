#include <iostream>
#include <list>

using namespace std;

int main(){
	
	
	/*
	//Criação básica:
	
	list <int> lista_nova;
	list<int>::iterator it;
	
	for (int x = 0; x <= 10; x++){
		
		lista_nova.push_front(x);
		
		
	}
	
	//Aqui estamos inicializando o iterator.
	it = lista_nova.begin();
	
	//Nessa linha, dizemos que o nosso iterator irá incrementar um valor na posição 5 da lista.
	advance(it, 5);
	
	//Por final, incrementamos esse valor. Especificamos o nosso iterator (que tem a posição que
	//desejamos incrementar um valor), assim como o valor que queremos que seja substituído (400),
	//no caso.
	lista_nova.insert(it, 400);
	
	int tamanho = lista_nova.size();
	
	for (int y = 0; y < tamanho; y++){
		
		cout << lista_nova.front() <<endl;
		lista_nova.pop_front();
		
	}
	*/

	list<int> li_new;
	
	//Veja que incrementamos valores aleatórios.
	li_new.push_front(34);
	li_new.push_front(22);
	li_new.push_front(10);
	li_new.push_front(5);
	li_new.push_front(78);
	li_new.push_front(99);
	li_new.push_front(33);
	li_new.push_front(100);
	li_new.push_front(56);
	li_new.push_front(12);
	
	//Aqui nós ordenamos a lista "li_new", deixado em ordem crescente.
	li_new.sort();
	
	//Aqui nós invertemos a ordem, deixando em ordem decrescente.
	li_new.reverse();
	
	int qntd_valor = li_new.size();
	
	for (int b = 0; b < qntd_valor; b++){
		
		cout << li_new.front() <<endl;
		li_new.pop_front();
		
	}
	

	return 0;
}
