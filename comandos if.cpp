#include <iostream>

using namespace std;

int main(){
	
int descobrimento ;
int independendencia ;//variaveis do tipo inteira.
int continente ;
	
	inicio://topo...
	
	system ("cls");//limpa a tela.
	
	
	cout<<"em que ano foi descoberto o Brasil?\n\n";
	cout<<"1:1404?\n\n";
	cout<<"2:1200?\n\n";
	cout<<"3:1500?\n\n";
	cout<<"4:1900?\n\n";
	//o quiz é composto por perguntas e respostas de tipo numérico.
	
	cin >> descobrimento  ;//o comando para execução da variavel.
	
	if( descobrimento ==3){//numero da opc correta.
		cout <<"resposta certa\n";
	}
	else{
		cout<<"resposta errada\n\n";
		}
	
	cout<<"__________________________________________________________\n";
	
	cout<<"quem deu o grito da indepemdencia?\n\n";
	cout<<"1:don Pedro I?\n\n";
	cout<<"2:pedro Alvarez?\n\n";
	cout<<"3:Castelo Branco?\n\n";
	cout<<"Don Pedro II?\n\n";
	
		cin >> independendencia  ;
	
	if( independendencia ==1){
		cout <<"resposta certa\n";
	}
	else{
		cout<<"resposta errada\n";
		}
		
		
		cout<<"__________________________________________________________\n";
		
			cout<<"em que continente esta o Brasil?\n\n";
	cout<<"1:Africa?\n\n";
	cout<<"2:America?\n\n";
	cout<<"3:Asia?\n\n";
	cout<<"4:Europa?\n\n";
	
		cin >> continente ;
	
	if( continente ==2){
		cout <<"resposta certa\n";
	}
	else{
		cout<<"resposta errada\n";
		}
	
	
	
	
	system ("pause");//para...

	
	goto inicio;//volta para o topo...
	
	
	//o GO TO é preciso somente para o programa voltar do inicio e ser executado novamente.
	//para voltar novamente com o quiz.
	
	
	
	
	
	
	
	return 0;
}
