#include <iostream>

using namespace std;

int main(){

	int n, m, custo_atual=0, menor_custo = -1;
	
	cin >> n;
	cin >> m;
	
	int matriz_cookie[n][m];
	int matriz_teste[n][m];
	int melhor_matriz[n][m];
	
	for (int l = 0; l < n; l++){
		
		for (int c = 0; c < m; c++){
			
			cin >> matriz_cookie[l][c];
			
		};
			
	};
	
	//Separando dois casos: P=0 e P=1.
	//P=0 deve ser par; P=1 deve ser ímpar.
	
	for (int p=0; p < 2; p++){
		
		custo_atual = 0;
		
		//Sempre resetamos a matriz de teste.
		for (int l = 0; l < n; l++){
			
			for (int c = 0; c < m; c++){
				
				matriz_teste[l][c] = matriz_cookie[l][c];
				
			};
				
		};
		
		for (int l=0; l < n; l++){
			
			for (int c = 0; c < m; c++){
				
				bool deveSerPar = (l + c) % 2 == p;
				bool ehPar = matriz_teste[l][c] % 2 == 0;
				
				if (deveSerPar != ehPar){
					
					matriz_teste[l][c]++;
					custo_atual++;
					
				};
				
			};
		};
		
		if (menor_custo == -1 || custo_atual < menor_custo){

			menor_custo = custo_atual;
			
			for (int l = 0; l < n; l++){
					
				for (int c = 0; c < m; c++){
								
					melhor_matriz[l][c] = matriz_teste[l][c];
							
				};
								
			};
								
		};
		
	};
	
	cout << "\n" << menor_custo <<endl;
	
	
	for (int l = 0; l < n; l++){
		
		cout << "\n";
		
		for (int c = 0; c < m; c ++){
			
			cout << matriz_cookie[l][c] << " ";
			
		};
		
	};
	
	cout << "\n";
	
	
	
	for (int l = 0; l < n; l++){
		
		cout << "\n";
		
		for (int c = 0; c < m; c++){
			
			cout << melhor_matriz[l][c] << " ";
			
		};
			
	};

	
	return 0;
};
