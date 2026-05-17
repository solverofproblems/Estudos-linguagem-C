#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

//Aqui nós prototipamos as funções.
int soma(int num1, int num2);
int subtracao(int num1, int num2);
int multiplicacao(int num1, int num2);
int divisao(int num1, int num2);
int potenciacao(int num1, int num2);
int raiz(int num1, int num2);


int main(){
	
	retorno:
	system("cls");
	
	cout << "Escolha uma das opcoes:" <<endl<<endl;
	cout << "1-Soma"<<endl;
	cout << "2-Subtracao"<<endl;
	cout << "3-Multiplicacao"<<endl;
	cout << "4-Divisao"<<endl;
	cout << "5-Potenciacao"<<endl;
	cout << "6-Raiz"<<endl<<endl;
	
	
	int valor_desejado;
	int num1, num2;
	
	cout << "Digite: ";
	cin >> valor_desejado;
	
	switch(valor_desejado){
		
		case(1):
			cout << "\nDigite o primero valor: ";
			cin >> num1;
			cout << "Digite o segundo valor: ";
			cin >> num2;
			cout << "\nResultado: " << soma(num1, num2);
			break;
			
			
		case(2):
			cout << "\nDigite o primero valor: ";
			cin >> num1;
			cout << "Digite o segundo valor: ";
			cin >> num2;
			cout << "\nResultado: " << subtracao(num1, num2);
			break;
			
		case(3):
			cout << "\nDigite o primero valor: ";
			cin >> num1;
			cout << "Digite o segundo valor: ";
			cin >> num2;
			cout << "\nResultado: " << multiplicacao(num1, num2);
			break;
			
		case(4):
			cout << "\nDigite o primero valor: ";
			cin >> num1;
			cout << "Digite o segundo valor: ";
			cin >> num2;
			cout << "\nResultado: " << divisao(num1, num2);
			break;
			
		case(5):
			cout << "\nDigite a base: ";
			cin >> num1;
			cout << "Digite o expoente: ";
			cin >> num2;
			cout << "\nResultado: " << potenciacao(num1, num2);
			break;
			
		case(6):
			cout << "\nDigite a base: ";
			cin >> num1;
			cout << "Digite o expoente: ";
			cin >> num2;
			cout << "\nResultado: " << raiz(num1, num2);
			break;
		
	};
	
	string opc;
	cout << "\nDeseja continuar? (S/N): ";
	cin >> opc;
	
	if (opc == "s" || opc == "S"){
		
		goto retorno;
		
	} else {
		
		cout << "\nObrigado por treinar!";
		
	};
	
	
	
	
	

	return 0;
}

//Aqui definimos a estrutura dela... Veja que é logo após a função principal!!
int soma(int num1, int num2){
	
	int resultado = num1 + num2;
	
	return resultado;
	
	
};


int subtracao(int num1, int num2){
	
	int resultado = num1 - num2;
	
	return resultado;
	
	
};
int multiplicacao(int num1, int num2){
	
	int resultado = num1 * num2;
	
	return resultado;
	
	
};
int divisao(int num1, int num2){
	
	int resultado = num1 / num2;
	
	return resultado;
	
	
};


int potenciacao(int num1, int num2){
	
	int resultado = 1;
	
	for (int x=1; x<=num2; x++){
		
		
		resultado *= num1;
		
		
	};
	
	return resultado;
	
	
};

int raiz(int num1, int num2){
	
	float resultado = pow(num1, 1.0/num2);
	
	return resultado;
	
	
};

