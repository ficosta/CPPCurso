#include <iostream>

using namespace std;

int main(){
	double notas[5];
	double nota;

	for(int i =0; i< 5; i++){
		cout<<"Digite uma nota "<<'\n';
	        cin>>nota;
 		notas[i]=nota;	       
	}
	for(int a=0; a < 5; a++){
		cout<<"Nota "<<a+1<<": "<<notas[a]<<'\n';
	}


}
