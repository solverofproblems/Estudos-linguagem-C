#include <iostream>

using namespace std;

struct registroCarro {
	
	string nomeCarro;
	string corCarro;
	int potCarro;
	int velMax;
	
	void insereCarro(string stCarro, string stCorCarro, int potcarro, int velmax){
		
		nomeCarro = stCarro;
		corCarro = stCorCarro;
		potCarro = potcarro;
		velMax = velmax;
		
	};
	
	void mostrarCarro(){
		
		cout << "\n\nNome.............: " << nomeCarro <<endl;
		cout << "Cor..............: " << corCarro <<endl;
		cout << "Potencia.........: " << potCarro <<endl;
		cout << "Velocidade Maxima: " << velMax <<endl;
		
	}
	
};


int main(){
	

//	registroCarro car1, car2;
//	
//	string nomeCarro, corCarro;
//	int potCarro, velMax;
//	
//	cout << "Nome do carro: ";
//	cin >> nomeCarro;
//	
//	cout << "Cor do carro: ";
//	cin >> corCarro;
//	
//	cout << "Potencia do carro: ";
//	cin >> potCarro;
//	
//	cout << "Velocidade máxima: ";
//	cin >> velMax;
//	
//	car1.insereCarro(nomeCarro, corCarro, potCarro, velMax);
//	car1.mostrarCarro();
	
	
	
	registroCarro *carros = new registroCarro[4];
	
	registroCarro car1, car2, car3, car4;
	
	
	carros[0] = car1;
	carros[1] = car2;
	carros[2] = car3;
	carros[3] = car4;
	
	carros[0].insereCarro("Fiat Uno", "Preto", 450, 260);
	carros[1].insereCarro("Honda", "Cinza", 370, 210);
	carros[2].insereCarro("BMW 320 I", "Preto", 500, 300);
	carros[3].insereCarro("Honda Civic", "Branco", 470, 290);
	
	
	for (int x; x<4; x++){
		
		
		carros[x].mostrarCarro();
		
	};
	
	
	
	return 0;
}
