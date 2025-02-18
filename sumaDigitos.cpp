#include<iostream>

using namespace std;

main()
{
	int numero1, numero2, resultado;
	
	cout<<"Digite un numero: ";
	cin>>numero1;
	
	for(int i=0; i<numero1;i++)
	{
		numero2 = numero1;
		resultado = resultado + (numero1 % 10);
		numero2 = numero1 / 10;
	}
	
	cout<<"El resultado es: "<<resultado;
}
