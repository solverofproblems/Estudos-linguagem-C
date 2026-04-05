#include <iostream>
#include <cmath>
#include <list>

using namespace std;

int main(){
	
	/*
	
	OBI 2024 (Primeira fase, Nível 2 | Exercício: Ogro)
	
	
	int d, e, result;
	

	cin >> e;
	cin >> d;
	
	if (d >= 0 && d <= 5 && e >= 0 && e <= 5 && e != d){
		
		if (e > d){
			
			int result = e + d;
			cout << result;
			
			
		} else {
			
			int result = 2 * (d - e);
			cout << result;
			
		};
		
	};
	
	*/
	
	
	
	
	/*
	
	OBI 2024 (Primeira fase, Nível 2 | Exercício: Relógio)
	
	

	int h, m, s, t, seg_tot;
	
	cin >> h;
	
	if (0 <= h && h <= 23) {
		
		cin >> m;
		
		if (0 <= m && m <= 59) {
			
			cin >> s;
			
			if (0 <= s && s <= 59) {
				
				cin >> t;
				
				if (0 <= t && t <= pow(10, 9)) {
					
						seg_tot = (h * 3600) + (m * 60) + (s + t);
	
						h = (seg_tot/3600) % 24;
						m = (seg_tot%3600) / 60;
						s = (seg_tot%3600) % 60;
					
						
						cout << "\n" << h << "\n" << m << "\n" << s;			
				};
			};
		};
	};
	
	*/
	
	
	
	
	
	
	/* 
	
	
	OBI 2024 (Primeira fase, Nível 2 | Exercício: Concurso)
	
	
	
	int k, n;
	
	list<int> lista_notas;
	
	cin >> n;
	cin >> k;
	
	for (int i = 0; i < n; i++){
		
		int nota_aluno;
		
		cin >> nota_aluno;
		
		lista_notas.push_front(nota_aluno);
		
		
	}
	
	lista_notas.sort();
	lista_notas.reverse();
	
	list<int>::iterator it;
	
	it = lista_notas.begin();
	
	advance(it, --k);
	
	cout << *it;
	
	
	*/
	
	
	
	
	
	return 0;
}
