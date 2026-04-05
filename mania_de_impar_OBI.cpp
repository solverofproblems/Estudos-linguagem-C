#include <iostream>

using namespace std;

int main (){
	
	int n, m, qntdAdd;
	
	cin >> n;
	cin >> m;
	
	int matriz_cookie[n][m];
	
	for (int l=0; l < n; l++){
		
		for (int c=0; c < m; c++){
			
			cin >> matriz_cookie[l][c];
			
		};
		
	};
	
	
	for (int l; l < n; l++){
		
		cout << "\n";
		
		for (int c=0; c < m; c++){
			
			
			cout << matriz_cookie[l][c] << " ";
			
		};
		
	};
	
	//p=0 é para ímpar.
	//p=1 é para par.

	for (int p = 0; p < 2; p++){
		
		
		for (int l = 0; l < n; l++){
			
			for (int c = 0; c < m; c++){
				
				bool deveSerImpar = ((l + c) % 2 == p);
				bool ehImpar = (matriz_cookie[l][c] % 2 != 0);
				
				if (deveSerImpar != ehImpar){
					matriz_cookie[l][c]++;
					qntdAdd++;
				};	
			};	
		};
	};
		
	cout << "\n\nQuantidade de gotas adicionadas: " << qntdAdd <<endl;
		
	for (int l; l < n; l++){
		
		cout << "\n";
		
		for (int c=0; c < m; c++){
			
			
			cout << matriz_cookie[l][c] << " ";
			
		};
		
	};
		


	return 0;
}
