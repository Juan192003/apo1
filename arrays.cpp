#include<iostream>

using namespace std;

main()
{
	int tamano, suma;
	
	cout<<"Digite un el tamaño de digitos: ";
	cin>>tamano;

	int numero[tamano], i = 0;
	
	while(i<tamano)
	{
		cout<<"Digite el digito #"<<i+1<<":";
		cin>>numero[i];
		
		suma = suma + numero[i];
		
		i++;
	}
	
	cout<<"La suma de los digitos es: "<<suma;
}


