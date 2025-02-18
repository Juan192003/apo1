#include <iostream>
#include <string>

using namespace std;

main()
{
	char cadena;
	
	cout << "DIGITE UNA CADENA: "<<endl;
	cin>>cadena;	

	cout<<"La cadena digitada fue: "<<cadena<<endl;
	
	int cadenaInt = atoi(cadena.c_str());
		
	/*for(cadenaInt;cadenaInt<=2010;cadenaInt++)
	{
		cout<<cadenaInt<<endl;
	}*/
	
}
