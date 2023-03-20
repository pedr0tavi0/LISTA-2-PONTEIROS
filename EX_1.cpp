#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
#include <locale.h>
using namespace std;

struct Conta{
	char nome[50], cpf[50];
	long int valcont;
};

int main() {
	cout<<"sistema de conta \n";
	Conta corrente[5];
	long int aux;
	char aux1[50], aux2[50];
	for(int i = 0; i <2; i++){
		cout<< " Insira o nome: \n";
		cin >> corrente[i].nome;
		cout<< "Insira o CPF: \n";
		cin>> corrente[i].cpf;
		cout << "Insira o valor na conta \n";
		cin >> corrente[i].valcont;
		
	}
	
	
	
		
		
	for(int i = 0; i<5; i++){
		for(int j = 0; j < 4; j++){
			if(corrente[j].valcont < corrente[j+1].valcont){
				aux = corrente[j].valcont;
				strcpy(aux1,corrente[j].nome);
				strcpy(aux2,corrente[j].cpf);
				
				corrente[j].valcont = corrente[j+1].valcont;
				strcpy(corrente[j].nome,corrente[j+1].nome);
				strcpy(corrente[j].cpf,corrente[j+1].cpf);
				
				corrente[j+1].valcont = aux;
				strcpy(corrente[j+1].nome,aux1);
				strcpy(corrente[j+1].cpf,aux2);
			}
		}
	} 

	for(int j = 0; j < 5; j++){
		cout< "\n";
		cout<< "Nome: " << corrente[j].nome << "\n";
		cout<< "CPF: " << corrente[j].cpf<< "\n";
		cout<< "Conta corrente: "<< corrente[j].valcont << "\n";
		cout << "---------------------------------------- \n";
	}
	return 0;	
	}
	


