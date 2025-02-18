#include <iostream>

using namespace std;



int main() {

    int numero;

   	cout<<"Ingrese un número:" ;

    cin>>numero;
    
    if (esPrimo(numero)) {

        cout<<numero << " es un número primo.";

    } else {

        cout<<numero << "no es un número primo.";

    }

    return 0;

}
