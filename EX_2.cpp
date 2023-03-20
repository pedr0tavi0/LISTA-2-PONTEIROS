#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

struct datanasc{
	int dia, mes, ano;
};
struct Pessoa{
	datanasc data;
	char nome[50];
};

int main() {
	Pessoa p[5];
	int x, y, z;
	char aux[50];
	for( int i =0; i <2; i++){
		cout << "Insira seu nome: \n";
		cin >> p[i].nome;
		cout << "Insira o dia em que voce nasceu : \n";
		cin >> p[i].data.dia;
		cout << "Insira o mes em que nasceu: \n";
		cin >> p[i].data.mes;
		cout << "Insira o ano em que nasceu: \n";
		cin >> p[i].data.ano;
		cout << " ------------------------------ \n";
	}
	
	for (int i = 0; i< 2; i++){
		x= p[i].data.ano + 1;
		
		if(x < p[i].data.ano ){
			x = p[i].data.ano;
			strcpy(aux,p[i].nome);
			y = p[i].data.mes;
			z = p[i].data.dia;
			
		}else if(x == p[i].data.ano){
			y = p[i].data.mes + 1;
			
			
		}if(y < p[i].data.mes){
				y = p[i].data.mes;
				z= p[i].data.dia;
				strcpy(aux, p[i].nome);
			}else if(y == p[i].data.mes){
				z = p[i].data.dia + 1;
				if(z < p[i].data.dia){
					z = p[i].data.dia;
					strcpy(aux, p[i].nome);
				}
			}
		}
		
	
	cout << "A pessoa mais velha e: " << aux << " com data de nascimento em " << z << "/" << y << "/" << x;
}

	

