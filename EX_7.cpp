#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
#include <locale.h>
using namespace std;

struct Voos{
	int cod_ori,cod_dest;
	
	
};

struct Aeroporto{
	char nome[30];
	int codigo, qtd_chegada, qtd_saida;
	};
	


int main() {
	setlocale(LC_ALL,"Portuguese");
	Voos v[10];
	Aeroporto ar[5];
	
	for(int i = 0; i < 5; i++){
		cout<<"------------------------------------------------------------------" <<endl;
		cout << "####Cadastro de aeroportos#### \n";
			cout << "Insira o nome do aeroporto: ";
		cin >> ar[i].nome;
		cout << "Insira o código do aeroporto: ";
		cin >> ar[i].codigo;
		
		while(ar[i].codigo < 0 | ar[i].codigo > 10){
			cout<< "Por favor, insira um código válido!" <<endl;
			cin >> ar[i].codigo;
		}
		cout<< "Insira a quantidade de voos que chegaram aeroporto ate 10: ";
		cin >> ar[i].qtd_chegada; 
		while(ar[i].qtd_chegada < 0 | ar[i].qtd_chegada >10){
			cout<< "Insira um quantidade válida de voos que chegaram!"<<endl;
			cin >> ar[i].qtd_chegada;
		}
		cout << "Insira a quantidade de voos de saída desse aeroporto ate 10: ";
		cin >> ar[i].qtd_saida;
		while(ar[i].qtd_saida < 0 | ar[i].qtd_saida >10){
			cout<< "Insira um quantidade válida de voos que sairam!"<<endl;
			cin >> ar[i].qtd_saida;
	    cout<<"------------------------------------------------------------------";
		}
	}
	for(int i = 0; i <10; i++){
		cout << "Insira o código do aeroporto de saída: \n ";
		cin >> v[i].cod_ori;
		cout << "Insira o código do aeroporto de chegada: \n";
		cin >> v[i].cod_dest;
	}
	for(int j = 0 ; j<10; j++){
		cout << "Aeroporto " << ar[j].nome << ": " << endl;
		cout<< "Código do aeroporto: " << ar[j].codigo << endl;
		if(ar[j].codigo == v[j].cod_dest){
			cout << "Voos de chegada: " << ar[j].qtd_chegada <<  v[j].cod_dest;
		 if(ar[j].codigo == v[j].cod_ori){
			cout << "Voos que sairam: " << ar[j].qtd_saida <<  v[j].cod_ori; 
			
		}
		
	}
		
	
	
	
}
}
