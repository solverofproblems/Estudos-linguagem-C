#include <iostream>

using namespace std;

struct Carro{
 
	string nomeCarro;
	string corCarro;
	int potCarro;
	int velMax;

};

int main (){
	
	Carro car1;
	
	car1.nomeCarro = "Fiat Uno";
	car1.corCarro = "Vermelho";
	car1.potCarro = 450;
	car1.velMax = 230;
	
	cout << "Nome.............: " << car1.nomeCarro <<endl;
	cout << "Cor..............: " << car1.corCarro <<endl;
	cout << "Potencia.........: " << car1.potCarro <<endl;
	cout << "Velocidade Maxima: " << car1.velMax <<endl;
	
	
	return 0;
	
}


