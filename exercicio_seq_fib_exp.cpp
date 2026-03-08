#include <iostream>

using namespace std;

int exponencial(int num);
void fibonacci(int num);

int main(){
	
	int number;
	
	//Aqui estamos calculando o exponencial.
	cout << "Informe um numero: ";
	cin >> number;
	
	cout << exponencial(number) <<endl<<endl; 
	
	
	//Aqui estamos pegando a sequência de fibonacci com base no número informado em "number".
	
	fibonacci(number);
	
	
	
	return 0;
}

//Função que encontra a sequência de Fibonacci:

void fibonacci(int num){
	
	int seq_fibo[num];
	
	seq_fibo[0] = 0;
	seq_fibo[1] = 1;
	//seq_fibo[2] = 1;
	//seq_fibo[3] = 2;
	//seq_fibo[4] = 3;
	//seq_fibo[5] = 5;...
	
	for (int i=2; i<=num; i++){
		
		seq_fibo[i] = seq_fibo[i-1] + seq_fibo[i-2];
		
	}
	
	for (int i=0; i<num; i++){
		
		cout << seq_fibo[i] << "\n";
		
	}
	
}



//Função que calcula o exponencial de um número.
int exponencial (int num){
	
	int result = 1;
	
	for (int i=1; i <= num; i++){
		
		result *= i;
		
	};
	
	return result;
	
}
