#include <iostream>

using namespace std;



int main() {

    int numero;

   	cout<<"Ingrese un n�mero:" ;

    cin>>numero;
    
    if (esPrimo(numero)) {

        cout<<numero << " es un n�mero primo.";

    } else {

        cout<<numero << "no es un n�mero primo.";

    }

    return 0;

}
