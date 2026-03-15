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
	

	
	/* 
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
	
	*/
	
	//Estudando variáveis de incremento e decremento.
	
	int incremento, decremento;
	
	incremento = 0;
	
	//Antes de incrementar um valor: 
	cout << incremento <<endl<<endl;
	
	incremento = incremento + 1;
	
	//Depois de incrementar um valor:
	cout << incremento <<endl<<endl<<endl;
	
	/*
	
		Além desse método, podemos representar o incremento da seguinte forma:
		
		incremento += 
		incremento ++ <- Aqui você SÓ CONSEGUE INCREMENTAR DE 1 EM 1.
	
	*/
	
	//Subtração:
	
	decremento = 10;
	cout << decremento <<endl;
	
	decremento -= 2;
	cout << decremento <<endl<<endl;
	
	
	//Multiplicação:
	
	int multiplicacao = 9;
	
	cout << multiplicacao <<endl;
	
	multiplicacao *= 2;
	
	cout << multiplicacao <<endl<<endl;
	
	
	//Divisão:
	
	int divisao = 30;
	
	cout << divisao <<endl;
	
	divisao /= 3;
	
	cout << divisao <<endl<<endl;
	
	
	
	//Estudando variáveis pré-fixadas (pré-incrementadas) e pós-fixadas (pós-incrementadas):
	
	int v1 = 10, v2 = 10;
	
	cout << ++v1 <<endl; //Veja que aqui o computador lê como "11" direto.
	cout << v2++ <<endl<<endl<<endl; //Veja que aqui o computador lê primeiramente como "10"
	
	
	//Estudando estruturas de inversão:
	
	int number1 = 10, number2 = 10, number3 = 10;
	
	number1 = number1 * -1;
	
	cout << number1 <<endl<<endl;
	
	
	//Veja que o valor se mantém!
	
	cout << -number2 <<endl;
	
	cout << number2 <<endl<<endl;
	
	
	//Veja que aqui o valor irá mudar definitivamente.
	
	cout << number3 <<endl;
	
	number3 =- number3;
	
	cout << number3 <<endl<<endl; 
	
	
	//Estudando estruturas condicionais (IF/ELSE) em C++.
	
	/*
		
		Sinais típicos de testes lógicos:
		
		== -> Significa "igual".
		!= -> Significa "diferente".
		>= -> Significa "maior ou igual".
		<= -> Significa "menor ou igual".
		> -> Significa "maior".
		< -> Significa "menor".
		
	
	*/
	
	/*
	//Estrutura básica:
	
	int value1 = 20, value2 = 10;
	
	if (value2 > value1) {
		
		//Aqui incrementamos os códigos que devem ser compilados se tal condição for VERDADEIRA
		
		cout << "O número value2 é maior que value1!";
	
	} else if (value2 < value1) {
		
		//Aqui incrementamos os códigos que devem ser compilados se a condição FOR VERDADEIRA.
		// OBS: Veja que é uma nova nova lógica, logo, também mede se ela é verdadeira ou falsa.
		cout << "O número value2 é menor do que value1!";
	
	} else {
	
		//Aqui seguimos com a estrutura caso NENHUMA CONDIÇÃO (as duas) for atendida.
		cout << "Nada acontece de verdade.";
	
	}	
	*/
	
	// Usando o Goto:
	
//	int nota1, nota2, soma;
//	
//	retorno: //Aqui está a label que eu defini!
//	
//	cout << "Defina a primeira nota: ";
//	cin >> nota1;
//	
//	cout << "\n\nDefina a segunda nota: ";
//	cin >> nota2;
//	
//	soma = nota1 + nota2;
//	
//	if (soma >= 60) {
//		
//		cout << "\nAprovado!";
//		
//	} else {
//		
//		cout << "\nReprovado.";
//		
//	}
//	
//	char opc;
//	
//	cout << "\nDeseja repetir o processo? [s/n]: ";
//	cin >> opc;
//	
//	if (opc == 's' || opc == 'S'){
//		
//		
//		goto retorno;
//		
//	} else {
//		
//		cout << "\nObrigado por usar nossos serviços!";
//		
//	}
	
	//Estudando operadores condicionais:

	int n1 = 20, n2 = 10;
	
	if (n1 >= 2 && n1 <= 20) {
		
		//Aqui temos uma condição usando a estrutura "AND" (&&).
		cout << "\nCondição verdadeira!\n\n";
		
	};
	
	if (n1 < 2 || n2 > 30) {
		
		//Aqui temos uma condição usando a estrutura "OR" ( || ).
		cout << "\nCondição falsa!!\n\n";
		
	};
	
	bool boolean = true;
	
	if (!boolean) {
		
		cout << "Condição satisfeita.\n";		
		
	} else {
		
		cout << "Condição rejeitada.\n";
		
	};
	
	
	
	bool boolean2 = 1;
	
	if (!boolean2) {
		
		//Aqui assumimos que boolean2 == 0, ou "false".
		cout << "Condição dois satisfeita.\n";
		
	} else {
		
		//Aqui assumimos que boolean2 == 1, ou "true".
		cout << "Condição dois rejeitada.\n";
		 
	};
	
	
	// Explorando o uso do ternário:
	
	int nota1, nota2, soma;
	string resp;
	
	cout << "\nDigite o primeiro valor: ";
	cin >> nota1;
	
	
	cout << "\n\nDigite o segundo valor: ";
	cin >> nota2;
	
	soma = nota1 + nota2;
	
	//Aqui temos a expressão (soma >= 60), o resultado para o caso verdadeiro e o falso.
	(soma >= 60) ? resp = "Aprovado!" : resp = "Reprovado!";
	
	cout << resp;
	
	
	//Entendendo a estrutura Switch:
	
	/*
		
		Usamos a seguinte estrutura sintática:
		
		switch (variavel_desejada){
		
			case comparacao1:
				comando;
				break;
				
			case comparacao2:
				comando;
				break;
				
			case comparacao3:
				comando;
				break;
				
			default:
				comando; //Aqui NÃO usamos "break".
				
		};
	
	*/
	
//	int choice;
//	
//	cout << "Selecione uma cor: \n";
//	cout << "[1, 2, 3] - Verde ; [4, 5, 6] - Vermelho ; [7, 8, 9] - Azul\n";
//	
//	cin >> choice;
//	
//	switch (choice){
//		
//		case 1:
//		case 2:
//		case 3:
//			cout << "Cor selecionada: Verde\n";
//			break;
//			
//		case 4:
//		case 5:
//		case 6:
//			cout << "Cor selecionada: Vermelho\n";
//			break;
//			
//		case 7:
//		case 8:
//		case 9:
//			cout << "Cor selecionada: Azul\n";
//			break;
//			
//		default:
//			cout << "Cor invalida!";
//			
//	}
//	
//	cout << "\nSistema funcionando adequadamente!\n";


	int transport;
	
	cout << "\nSelecione um transporte: \n";
	cout << "[1] - Carro; [2] - Moto; [3] - Aviao; [4] - Helicoptero"<<endl;
	
	cin >> transport;
	
	switch (transport){
		
		case 1:
		case 2:
			
			cout << "\nTipo de transporte selecionado: Terrestre.\n";
			
			switch (transport){
				
				case 1:
					cout << "Transporte selecionado: Carro.\n";
					break;
				case 2:
					cout << "Transporte selecionado: Moto.\n";
					break;
				
			}
			
			break;

		case 3:
		case 4:
			
			cout << "\nTipo de transporte selecionado: Aereo.\n";
			
			switch (transport){
				
				case 3:
					cout << "Transporte selecionado: Aviao.\n";
					break;
				case 4:
					cout << "Transporte selecionado: Helicoptero.\n";
					break;
				
			}
			
			break;
		
	};
	
	
	//Estudando a estrutura de repetição "While".
	
	/*
		
		Sobre sua estrutura, ela funciona da seguinte forma:
		
		while(condicao){
		
			codigo;
		
		};
	
	
	*/
	
	int contador;
	
	while(contador <= 20){ //A estrutura continuará acontecendo enquanto a condição retornar "true".
	
		cout << contador <<endl;
		contador ++; // É fundamental que, em algum momento, a condição while deixe ser "true".
		
		if (contador == 10){
			break; //Não permite que o contador seja maior do que 10.
		};
		
		
	}
	
	/*
		Entendendo a estrutura Do While.
		
		Estrutura básica:
		
		do {
			condicao;
		} while(condicao);
	
	
	*/
	
	int cont = 20;
	
	do {
		
		cout << cont << "\n";
		cont ++;
		
	} while(cont < 20); //Veja que o código executou uma vez, mesmo que o cont já fosse igual a 20.
	


	/*Entendendo estrutura For.
	
	
		for (variavel_desejada ; condicao; incremento/decremento){
		
			codigo_desejado;
		
		}
	
	*/
	
	int valores;
	
	for (int i = 0; i <= 20; i ++){
		
		cout <<i << "\n";
		
	}


	int par, impar;
	
	for (par = 0, impar = 1; par <= 20; par+=2, impar+=2){
		
		cout << par << " - " << impar << "\n";	
		
	}
	
	cout << "Codigo finalizado!";


	/*Entendendo arrays/vetores em C++:
	
	
		Estrutura básica: 
		
		int nome_desejado[tamanho_desejado];
	
	
	*/
	
	
	string vetor[3]; //Definimos o vetor com tamanho 3.
	
	vetor[0] = "Banana"; //Os valores que colocamos nas chaves são os ÍNDICES.
	vetor[1] = "Uva"; //Os valores que colocamos nas chaves são os ÍNDICES.
	vetor[2] = "Abacate"; //Os valores que colocamos nas chaves são os ÍNDICES.
	
	//Por final, exibimos o valor que desejamos no vetor com o índice.
	cout <<"\nA fruta selecionada foi: "<< vetor[0] <<endl;
	
	
	//Agora vamos usar a estrutura For para isso.
	
	int tamanho_array = 3;
	
	for (int j = 0; j < tamanho_array; j++){
		
		cout << "A fruta: " << vetor[j] << " existe na cesta de frutas!\n";
		
	};
	
	//Exemplificando outra forma de criar Arrays:
	
	int outro_vetor[5] = {1,2,3,4,5};
	cout << outro_vetor[0]<<endl;
	
	
		/*
	
		Entendendo matrizes em C++.
		
		int matriz[3][4];
		
		Visualmente falando, temos isso:
		
		    0 1 2 3
		0: [][][][]
		1: [][][][]
		2: [][][][x] //Linha 3, coluna 4. Em C++, seria matriz[2][3] = x;
	
		Importante: Note que o índice 0 é considerado na construção dessa tabela.
	
	*/
	
	
	int matriz[3][4];
	
//	//Linha 1
//	matriz[0][0] = 0;
//	matriz[0][1] = 0;
//	matriz[0][2] = 0;
//	matriz[0][3] = 0;
//	
//	//Linha 2
//	matriz[1][0] = 1;
//	matriz[1][1] = 1;
//	matriz[1][2] = 1;
//	matriz[1][3] = 1;
//	
//	//Linha 3
//	matriz[2][0] = 2;
//	matriz[2][1] = 2;
//	matriz[2][2] = 2;
//	matriz[2][3] = 2;

	for (int li=0; li < 3; li++){
		
		for (int co=0; co < 4; co++){
			
			cout << "Selecione um valor: ";
			cin >> matriz[li][co];
			cout << "\n";
			
		};
		
	};
	
	for (int l=0; l < 3; l++){
		
		for (int c=0; c < 4; c++){
			
			cout << matriz[l][c] << " ";		
			
		};
		
		cout << "\n";
		
	};
	

	return 0;
		
}
