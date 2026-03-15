#include <iostream>
#include <stack>

using namespace std;

int main(){
	
	
	stack <string> veiculos;

	if (veiculos.empty()){
		
		
		cout << "Pilha vazia! \n\n";
		
		
	} else {
		
		cout << "Pilha com valores! Veja a quantidade: " << veiculos.size();
		
	};
	
	
	
	veiculos.push("moto");
	veiculos.push("carro");	
	veiculos.push("aviao");	
	
	cout << "Tamanho da pilha: " << veiculos.size() <<endl<<endl;
	
	cout << "O ultimo elemento que sera removido da Pilha e: " << veiculos.top() <<endl;
	
	//Removendo: 
	
	veiculos.pop();
	
	cout << "Elemento removido! Veja a nova quantidade de elementos da Pilha: " << veiculos.size();
	
	
	return 0;
	
}
