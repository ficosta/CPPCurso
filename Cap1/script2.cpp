#include<iostream>

int maximo(int a, int b){
	if(a>b)
		return a;
	else
		return b;
}

int main(){
	int a = 10;
	int b = 20;
	int c = maximo (a,b);
	std::cout<<"O maior entre " << a << " e " << b << " eh " << c << '\n';
	return 0;
}

