#include<iostream>

using namespace std;

int main()
{
	int numeroInicial =0;
	int numeroFinal=0;
	int incremento=0;
	int soma=0;

	cout<<"Digite na sequencia NumeroInicial, NumeroFinal, Incremento\n";
	cin>>numeroInicial;
	cin>>numeroFinal;
	cin>>incremento;

	for(int i = numeroInicial; i <= numeroFinal; i+=incremento)
	{
		soma+=i;
	}
	cout << "A soma foi: " << soma << '\n';

	return 0;
}
