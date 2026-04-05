#include <iostream>
#include <vector>

using namespace std;

int main (){
	
	int p, c;

	cin >> p;
	vector <int> golsPedro(p);
	
	//Minutos em que o Pedro fez gol.
	for (int x=0; x < p; x++){
		
		cin >> golsPedro[x];
		
	};
	
	
	cin >> c;
	vector <int> golsCamila(c);
	
	//Minutos em que a Camila fez gol.
	for (int x=0; x < c; x++){
		
		cin >> golsCamila[x];
		
	};
		
	int x = 0, y = 0;
	
	int golsFeitos[2] = {0,0};
	
	while (x < p || y < c){
		
		
		if (x < p && y < c){
			
			if (golsPedro[x] < golsCamila[y]){
				
				golsFeitos[0]++;
				x++;
				
			} else {
				
				golsFeitos[1]++;
				y++;
				
			}
			
		//Aqui só tem gols do Paulo!!	
		} else if (x < p){
			
			golsFeitos[0]++;
			x++;
			
		} else {
			
			golsFeitos[1]++;
			y++;
			
		};
		
		cout << golsFeitos[0] << " - " << golsFeitos[1] <<endl;
		
	}
	
	
	return 0;
}
