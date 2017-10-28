#include<iostream>

using namespace std;

void passaValor(int *a,int *b,int *c){

	*a +=10;
	*b +=20;
	*c +=30;

}

int main(){

	int a = 0;
	int b = 0;
	int c = 0;

	cout << "Valor a=" << a << '\n';
	cout << "Valor b=" << b << '\n';
	cout << "Valor c=" << c << '\n';

	passaValor(&a, &b, &c);

	cout << "Valor a=" << a << "Valor b=" << b<< "Valor c=" << c << '\n'; 
	
	return 0;

}
