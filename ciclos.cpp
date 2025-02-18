#include <iostream>

using namespace std;

main()
{
	int cantidad_notas;
	cout<<"Digite cantidad de notas"<<endl;
	cin>>cantidad_notas;
	//const int cantidad_notas = 3;
	int notas[cantidad_notas];
	
	//CICLO FOR -- LLENAR DATOS
	for(int i=0; i<cantidad_notas; i++)
	{
		cout<<"Digite la nota "<<i+1<<endl;
		cin>>notas[i+1];
	}
	
	//CICLO FOR -- MOSTRAR DATOS
	for(int i=0; i<cantidad_notas; i++)
	{
		cout<<"La nota "<<i+1<< " es: "<<notas[i+1]<<endl;
	}
	
}
