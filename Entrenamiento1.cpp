#include <iostream>
#include <string>

using namespace std;

int main()
{
	string cadena;
	
    	//Capturar cadena
    	cout << "DIGITE UNA CADENA: "<<endl;
    	cin>>cadena;	
    
    	cout<<"La cadena digitada fue: "<<cadena<<endl;
    	
    	//Transformacion de la cadena a int para ciclo
    	// +1 para que no muestre el numero actual
    	int cadenaInt = std::stoi(cadena)+1;
	    
	    if(cadenaInt>=1000 and cadenaInt<=9000)
	    {
	        for((cadenaInt); cadenaInt<=9000;cadenaInt++)
            	{
            	    //Cadena entera a string para la comparacion caracteres
            	    string cadenaInt2 = to_string(cadenaInt);
            	    
            	        //Verificacion de digitos si hay coincidencias
            	        if(cadenaInt2[0] != cadenaInt2[1] and cadenaInt2[0] != cadenaInt2[2] and cadenaInt2[0] != cadenaInt2[3] and cadenaInt2[1] != cadenaInt2[2] and cadenaInt2[1] != cadenaInt2[3] and cadenaInt2[2] != cadenaInt2[3])
            	        {
            	            //Se rompe el ciclo porque se muestra el primer año
            	            cout<<cadenaInt2<<endl;
            	            break;
            	    }
            	}
	    }
	    else
	    {
	        cout<<"!!!!! ERROR !!!!!";
	    }
	return 0;
}















