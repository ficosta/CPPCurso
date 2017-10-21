#include<iostream>

using namespace std;

int maximo(int a, int b){
	return a > b ? a : b;
}
int minimo(int a, int b){
	return a < b ? a : b;
}

int main(){
	int a = 10;
	int b = 20;

	cout << "O maior entre a e b é: " << maximo(a,b) << '\n';
       cout << "O minimo entre a e b é: " << minimo(a,b) << '\n';

	return 0;       
}
