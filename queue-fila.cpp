#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	queue <string> veiculos;
	
	veiculos.push("aviao");
	veiculos.push("carro");
	veiculos.push("onibus");
	
	cout << "Quantidade de elementos da fila: " << veiculos.size()<<endl;
	cout << "O elemento " << veiculos.front() << " sera excluido." <<endl<<endl;
	veiculos.pop();
	
	cout << "Quantidade de elementos da fila: " << veiculos.size()<<endl;
	cout << "O antigo elemento foi removido. O elemento na frente e: " << veiculos.front()<<endl;
	
	
 	
	
	return 0;
}
