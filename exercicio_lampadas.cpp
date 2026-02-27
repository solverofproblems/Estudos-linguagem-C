#include <iostream>

using namespace std;

int contador_lA, contador_lB;
bool lampada_A, lampada_B;


int main (){
	
	int qnt_alteracoes;
	
	cin >> qnt_alteracoes;
	
	for (int i; i < qnt_alteracoes; i ++){
	
		int alt_feita;
		cin >> alt_feita;
		
		if (alt_feita == 1){
			
			contador_lA += 1;
			
		} else if (alt_feita == 2) {
			
			contador_lA += 1;
			contador_lB += 1;
			
		};
	
	};
	
	
	if (contador_lA % 2 == 0){
		
		lampada_A = false;
		
	} else {
		
		lampada_A = true;
		
	};
	
	if (contador_lB % 2 == 0) {
		
		lampada_B = false;
		
		
	} else {
		
		lampada_B = true;
		
	};
	
	cout <<"Estado da lâmpada A:" << lampada_A << "\nEstado da lâmpada B:"<< lampada_B;
	
	return 0;
}
