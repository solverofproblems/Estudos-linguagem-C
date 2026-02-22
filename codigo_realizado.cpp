#include <iostream>

using namespace std;

#define numero_pi 3.1415
#define texto_padrao cout << "Texto padronizado!\n"

//Aqui temos uma variável global.
int variavel_nova, outra_variavel_nova;

int main(){
	
	// Estudando variáveis locais e globais.
	string variavel_local = "Carlos";
	
	//Texto padrão que será exibido ao rodar o executável:
	cout << "Hello, World!\n";
	
	//Essa parte do código para o executável e, consequentemente, tudo que há abaixo dele
	system("pause");
	
	//Texto exibido após clicar no botão. Além disso, veja que estamos usando "<<endl".
	cout << "You've clicked at button." <<endl;
	
	// Se você deseja que a linha abaixo seja quebrada, o "\n" deve vir no final da frase que a antecede.
	cout << "Mostrando como a quebra de linha funciona.\n";
	
	cout << "Realizando a mesma funcionalidade do <<endl, mas usando a estrutura com n.\n\n";
	
	//Entendendo variáveis em C++. Existem VÁRIAS variáveis diferentes, entretanto, estamos focando nas mais importantes.
	int numeros = 123;
	cout<< numeros <<endl<<endl;
	
	char letra_especifica = 'C';
	cout<< letra_especifica <<endl<<endl;
	
	double numero_decimal = 2.4999;
	cout<< numero_decimal <<endl<<endl;
	
	float numero_decimal2 = 2.4999;
	cout<< numero_decimal2 <<endl<<endl;
	
	bool valor_booleano = true;
	cout <<  valor_booleano <<endl<<endl;
	
	char nome_incompleto[7] = "Carlos";
	cout << nome_incompleto <<endl<<endl;
	
	string nome_completo = "Carlos Eduardo de Lima";
	cout << nome_completo <<endl<<endl;
	
	
	
	// Construindo uma aplicação simples usando o cin >>.
	
	/*string nome;
	int idade;
	float altura;
	float massa;
	
	cout << "Digite seu nome: ";
	cin >> nome;
	
	cout << "\nDigite sua idade: ";
	cin >> idade;
	
	cout << "\nDigite sua altura: ";
	cin >> altura;
	
	cout << "\nDigite sua massa: ";
	cin >> massa;
	
	cout << "\n\nDados preenchidos corretamente!\n\n" << "Nome:" << nome << "\nIdade: " << idade << "\nAltura: " << altura << "m" << "\nMassa: " << massa << "Kg";
	*/
	
	//Declarando variáveis de um jeito mais inteligente:
	
	int a=1, b=2, c=3, d=4;
	
	/*
		Note que é a mesma coisa que escrever a seguinte estrutura:
		
		int a = 1;
		int b = 2;
		int c = 3;
		int d = 4;
	*/
	
	// Entendendo constantes dentro do C++. Veja:
	
	cout << numero_pi <<endl;
	texto_padrao <<endl<<endl;
	

	
	// Estudando operadores aritméticos:
	
	int valor1, valor2;
	
	//1 - Soma:
	
	cout << "Digite um numero: ";
	cin >> valor1;
	
	cout << "\nDigite outro numero: ";
	cin >> valor2;
	
	cout << "\nResultado da soma: " << valor1 + valor2 <<endl<<endl;
	
	
	//2 - Subtração:
	cout << "Digite um numero: ";
	cin >> valor1;
	
	cout << "\nDigite outro numero: ";
	cin >> valor2;
	
	cout << "\nResultado da subtração: " << valor1 - valor2 <<endl<<endl;
	
	
	//3 - Multiplicação:
	cout << "Digite um numero: ";
	cin >> valor1;
	
	cout << "\nDigite outro numero: ";
	cin >> valor2;
	
	cout << "\nResultado da multiplicação: " << valor1 * valor2 <<endl<<endl;
	
	
	//4 - Divisão:
	cout << "Digite um numero: ";
	cin >> valor1;
	
	cout << "\nDigite outro numero: ";
	cin >> valor2;
	
	cout << "\nResultado da divisão: " << valor1 / valor2 <<endl<<endl;
	
	
	//5 - Resto da divisão:
	cout << "Digite um numero: ";
	cin >> valor1;
	
	cout << "\nDigite outro numero: ";
	cin >> valor2;
	
	cout << "\nResultado do resto da divisão: " << valor1 % valor2 <<endl<<endl;
	
	
	return 0;
	
}
