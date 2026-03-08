#include <iostream>
#include <cstdlib> //Biblioteca que será usada para utilizar o comando de limpar tela (system("cls")).

using namespace std;

int main(){
	
	retorno:
	
	char palavra_correta[30], letra_selecionada[1], palavra_oculta[30];
	
	int tamanho_palavra, acertos, chances;
	bool acerto;
	
	chances = 6;
	acertos = 0;
	tamanho_palavra = 0;
	
	cout << "Digite a palavra secreta: ";
	cin >> palavra_correta;

	
	while (palavra_correta[tamanho_palavra] != '\0') {
	
		tamanho_palavra++;
		
	}
	
	for (int i=0; i < tamanho_palavra; i++){
		
		palavra_oculta[i] = '_';
		
	}
	

	
	while((chances > 0) && (acertos != tamanho_palavra)){
		
		system("cls");
		
		acerto = false;
		
		cout << "Chances restantes: " << chances <<endl;
		cout << palavra_oculta <<endl;
		cout << "\nDigite uma letra: ";
		cin >> letra_selecionada[0];
		
		for (int i=0; i < tamanho_palavra; i++){
			
			if (palavra_correta[i] == letra_selecionada[0]){
				
				acerto = true;
				palavra_oculta[i] = letra_selecionada[0];
				acertos++;
				
			}
		}
		
		if (acerto == false) {
			chances--;
		}
		
	}
	
	if (acertos == tamanho_palavra){
		system("cls");
		cout << "Palavra correta: " << palavra_correta<<endl;
		cout << "\nVoce venceu, parabens!";
	} else {
		
		system("cls");
		cout << "Voce perdeu!\n";
		cout << "Palavra correta: " << palavra_correta<<endl;
		
		char tentar_dnv;
		
		cout << "Deseja tentar novamente? [S/N]: ";
		cin >> tentar_dnv;
		
		if (tentar_dnv == 'S'){
			
			goto retorno;
			
		} else {
			
			cout << "\nObrigado por jogar!";
			
		}
		
	}
	
	
	
	return 0;
	
}
