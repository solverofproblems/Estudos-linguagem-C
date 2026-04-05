#include <iostream>

using namespace std;

struct Carro{
 
	string nomeCarro;
	string corCarro;
	int potCarro;
	int velMax;
	
	void insereCarro(string stNome, string stCor, int stPot, int stVel){
		
		nomeCarro = stNome;
		corCarro = stCor;
		potCarro = stPot;
		velMax = stVel;	
		
	};
	
	void mostrarCarro(){
		
		cout << "\n\nNome.............: " << nomeCarro<<endl;
		cout << "Cor..............: " << corCarro<<endl;
		cout << "Potencia.........: " << potCarro<<endl;
		cout << "Velocidade Maxima: " << velMax <<endl<<endl;
		
	};

};

int main (){
	
	Carro car1, car2;
	
	car1.insereCarro("Fiat Uno", "Preto", 450, 260);
	car2.insereCarro("Honda", "Cinza", 370, 220);
	
	car1.mostrarCarro();
	car2.mostrarCarro();
	
	
	return 0;
	
}


