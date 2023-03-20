#include <iostream>
#include <string.h>
#include<math.h>
#include <locale.h>
using namespace std;


struct Estoque{
	int codigo, quantidade;
	char nome[15];
	float preco;
	
	};

void pedido(Estoque prod[2]){
	int cod, quant;
	cout <<"\n ###Compra de Produtos### \n" ;
	cout << "Informe o codigo do produto que deseja comprar: ";
	cin >> cod;
	cout << "Informe a quantidade de produtos que deseja comprar: ";
	cin >> quant;
	cout <<"--------------------------------------------------------";
	
	for(int i = 0  ; i <2; i++){
	
	
		if(cod == prod[i].codigo){
			while(prod[i].quantidade != 0){
				if(quant <= prod[i].quantidade){
				
					prod[i].quantidade = prod[i].quantidade - quant;
					
					cout << "Venda realizada com sucesso \n";
					cout << "Produto: " << prod[i].nome << "\n";
					cout << "Quantidade: " << quant << "\n";
					cout << "Itens restantes: " << prod[i].quantidade<< endl;
					
				}
				cout << "Informe a quantidade de produtos que deseja comprar: ";
				cin >> quant;
				}
				
			}
			
		
	}
	
	
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	Estoque prod[2];
	
	
	
	for(int i = 0; i < 2; i++){
		    cout <<"####Inserindo Produtos#### \n";
			cout << "Informe o nome do produto:  ";
		   	cin >> prod[i].nome;
			cout << "Informe o código do produto: ";
			cin >> prod[i].codigo;
			cout << "Informe o preço do produto: ";
			cin >> prod[i].preco;
			cout << "Informe a quantidade de itens em estoque: ";
			cin >> prod[i].quantidade;
			cout <<"------------------------------------------------ \n";
		
		
	}
	
	
	pedido(prod);
		
}



