#include <iostream>

using namespace std;

int main(){
	
	enum armas {fuzil = 100, escopeta, rifle};
	
	armas armaSelecionada;
	
	//Listando o primeiro valor:
	
	armaSelecionada = fuzil;
	
	cout << "Fuzil: " << armaSelecionada <<endl<<endl;
	
	//Listando o segundo valor:
	
	armaSelecionada = escopeta;
	
	cout << "Escopeta: " << armaSelecionada <<endl<<endl;
	
	//Listando o terceiro valor:
	
	armaSelecionada = rifle;
	
	cout << "Rifle: " << armaSelecionada;
	
	
	
	return 0;
	
}
