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
	
	//Usando Arrays, o processo de incrementar valores fica mais difícil, porém fica mais fácil visualizar.
	Carro *carros = new Carro[4];
	
	Carro car1, car2, car3, car4;
	
	carros[0] = car1; 
	carros[1] = car2;
	carros[2] = car3;
	carros[3] = car4;
	
	carros[0].insereCarro("Fiat Uno", "Preto", 450, 260);
	carros[1].insereCarro("Honda", "Cinza", 370, 220);
	carros[2].insereCarro("BMV 320 I", "Preto", 500, 300);
	carros[3].insereCarro("Honda Civic", "Branco", 470, 290);


	for (int i=0; i < 5; i++){
		
		carros[i].mostrarCarro();
		
	;}
	
	
	return 0;
	
}


