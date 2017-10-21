#include<iostream>

using namespace std;

bool notaValida(float nota)
{
	//verifica se a nota eh valida
	return nota >= 0 && nota <= 10;
}

int main(){
	float nota1, nota2, media;

	cout << "Digite nota 1: ";
	cin >> nota1;
	if(!notaValida(nota1))
		return 0;
	cout << "Digite nota 2: ";
	cin >> nota2;
	if(!notaValida(nota2))
		return 0;

	media = (nota1+nota2)/2;

	if(media>6)
		cout << "Aprovado" << '\n';
	else
		cout << "Reprovado" << '\n';

	return 0;
	
}
