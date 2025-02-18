// Online C++ compiler to run C++ program online
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
	
	
	bool esPrimo(int numero) {

    if (numero <= 1) {

        return false;

    }

    for (int i = 2; i * i <= numero; ++i) {

        if (numero % i == 0) {

            return false;

        }
    }

    return true;
}



int main() {
  int fila1[5],numero,acupares=0,acuceros=0,acuprimos=0,primos=0;
  
  srand(time(NULL));
  
  cout<<"!!!!! LISTA DE NUMEROS !!!!!"<<endl;
  
  //Agregar valores al vector
  for (int i=0;i<5;i++)
  {
    numero=rand()%10;
    fila1[i]=numero;
      
    //Saber si el numero es par
    if(fila1[i]%2==0){
        acupares++;
    }
      
    //Saber si hay 0 en el array
    if(fila1[i]==0){
        acuceros++;
    }
    
    if(esPrimo(fila1[i]))
    {
    	primos++;
	}
	
	
	cout<<fila1[i]<<endl;
  }
  		
  
cout<<"HAY "<<acupares <<" NUMEROS PARES"<<endl;
cout<<"HAY "<<acuceros <<" CEROS EN EL VECTOR"<<endl;
cout<<"HAY "<<primos <<" NUMEROS PRIMOS"<<endl;
    return 0;
}
