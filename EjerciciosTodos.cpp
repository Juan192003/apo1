#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Ejercicio1
NumerosUnoCien()
{
	cout<<"LISTA DE NUMEROS DEL 1 AL 100"<<endl<<endl;
	for(int i=0;i<100;i++)
	{
		cout<<i+1<<endl;
	}
}


//Ejercicio2
NumerosPares()
{
	int i=1;
	
	cout<<"LISTA DE NUMEROS PARES DEL 1 AL 50"<<endl<<endl;
	
	while(i<=50)
	{
		if(i % 2 == 0)
		{
			cout<<i<<endl;
		}
		i++;
	}
}

//ejercicio 3
sumanumeros1a100()
{
 int suma=0;
 for(int i=1;i<=100;i++){
     suma=suma+i;
    
 }
   printf("%d ", suma );
}
//ejercicio 5
tablamul()
{
 int numero,multiplicacion;
 cin>>numero;
 for(int i=1;i<=10;i++){
     multiplicacion=numero*i;
   
   cout<<numero<<"*"<<i<<"="<<multiplicacion<<endl;
 }
 
}
//ejercicio7
factorial()
{
int i,numero,factorial=1,facto;
cin>>numero;
i=numero;
while(i>=1){
    factorial=factorial*i;
  
    i--;
}
printf("%d\n",factorial);
}
//Ejercicio8
SaberNumeroPrimo()
{
	int numero, contador;
	
	cout<<"SABER SI UN NUMERO ES PRIMO O NO "<<endl<<endl;
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero==1 or numero<=0) 
	{
		cout<<"El numero "<<numero<<" no es un numero primo";
	}
	
	for(int i=1; i<=numero;i++)
	{
		if(numero % i == 0)
		{
			contador++;
		}
	}
	
	if(contador == 2)
	{
		cout<<"El numero "<<numero<<" es un numero primo";
	}
	else
	{
		cout<<"El numero "<<numero<<" no es un numero primo";
	}
}

//Ejercicio 11
tresnumerosmayor(){


    int numero,numero1,numero2;
    scanf("%d%d%d",&numero,&numero1,&numero2);
    
    if(numero>numero1 and numero>numero2){
        printf("EL MAYOR ES %d ",numero);
    }
    else if(numero1>numero and numero1>numero2){
        printf("EL MAYOR ES %d ",numero1);
    }
    else if(numero2>numero and numero2>numero1){
        printf("EL MAYOR ES %d ",numero2);
    }
    
   
}
//ejercicio 14
sumadigitos(){
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

//ejercicio15
primos100(){
	 for(int i=2;i<=100;i++){
      int contador=0;
      for(int j=1;j<=100;j++){
          if(i%j==0){
              contador++;
          }
      }
      
      if(contador==2){
          cout<<" "<< i ;
      }
  }

}


//ejercicio 18
fizz(){
	for(int i=1;i<=100;i++){
      if(i%3==0 and i%5==0){
          cout<<i<<" FIZZBUZZ "<<endl;
      }
       else if(i%3==0){
            cout<<i<<" FIZZ "<<endl;
        }
        else if(i%5==0){
            cout<<i<<" BUZZ "<<endl;
        }
        else
        cout<<i<<endl;
        
    }
}

//ejercicio 19
vocales(){
	 int vocal=0;
    char cadena[20];
    cin>>cadena;
    
    for(int i=0;cadena[i]>20;i++){
    
    char letra=cadena[i];
    if(letra=='a' or letra=='e' or letra=='i' or letra=='o' or letra=='u' or letra=='A' or letra=='E' or letra=='I' or letra=='O' or letra=='U'){
       // cout<<"hay vocal";
        vocal++;

}
   
    }
     cout<<vocal;
}

//ejercicio21
nunmayor(){
	int numero[10],numero1,numero2,numero3;

for(int i=0;i<=9;i++){
    cin>>numero[i];
 
}
if(numero[0]>numero[1] and numero[0]>numero[2] and numero[0]>numero[3]and numero[0]>numero[4] and numero[0]>numero[5]and numero[0]>numero[6] and numero[0]>numero[7] and numero[0]>numero[8] and numero[0]>numero[9]){
    cout<<numero[0];
}
else if (numero[1]>numero[0] and numero[1]>numero[2] and numero[1]>numero[3]and numero[1]>numero[4] and numero[1]>numero[5]and numero[1]>numero[6] and numero[1]>numero[7] and numero[1]>numero[8] and numero[1]>numero[9]){
     cout<<numero[1];
}
else if (numero[2]>numero[0] and numero[2]>numero[1] and numero[2]>numero[3]and numero[2]>numero[4] and numero[2]>numero[5]and numero[2]>numero[6] and numero[2]>numero[7] and numero[2]>numero[8] and numero[2]>numero[9]){
     cout<<numero[2];
}
else if (numero[3]>numero[0] and numero[3]>numero[2] and numero[3]>numero[1]and numero[3]>numero[4] and numero[3]>numero[5]and numero[3]>numero[6] and numero[3]>numero[7] and numero[3]>numero[8] and numero[3]>numero[9]){
     cout<<numero[3];
}
else if (numero[4]>numero[0] and numero[4]>numero[2] and numero[4]>numero[3]and numero[4]>numero[1] and numero[4]>numero[5]and numero[4]>numero[6] and numero[4]>numero[7] and numero[4]>numero[8] and numero[4]>numero[9]){
     cout<<numero[4];
}
else if (numero[5]>numero[0] and numero[5]>numero[2] and numero[5]>numero[3]and numero[5]>numero[4] and numero[5]>numero[1]and numero[5]>numero[6] and numero[5]>numero[7] and numero[5]>numero[8] and numero[5]>numero[9]){
     cout<<numero[5];
}
else if (numero[6]>numero[0] and numero[6]>numero[2] and numero[6]>numero[3]and numero[6]>numero[4] and numero[6]>numero[5]and numero[6]>numero[1] and numero[6]>numero[7] and numero[6]>numero[8] and numero[6]>numero[9]){
     cout<<numero[6];
}
else if (numero[7]>numero[0] and numero[7]>numero[2] and numero[7]>numero[3]and numero[7]>numero[4] and numero[7]>numero[5]and numero[7]>numero[6] and numero[7]>numero[1] and numero[7]>numero[8] and numero[7]>numero[9]){
     cout<<numero[7];
}
else if (numero[8]>numero[0] and numero[8]>numero[2] and numero[8]>numero[3]and numero[8]>numero[4] and numero[8]>numero[5]and numero[8]>numero[6] and numero[8]>numero[7] and numero[8]>numero[1] and numero[8]>numero[9]){
     cout<<numero[8];
}
else if (numero[9]>numero[0] and numero[9]>numero[2] and numero[9]>numero[3]and numero[9]>numero[4] and numero[9]>numero[5]and numero[9]>numero[6] and numero[9]>numero[7] and numero[9]>numero[8] and numero[9]>numero[1]){
     cout<<numero[9];
}

}
//ejercicio 21
multi4(){
	int contador=0;
for(int i=1;i<=100;i++){
   // cout<<i<<endl;
    if(i%4==0){
        contador++;
    }
}
cout<<contador;
}

//ejercicio23
media(){
	int suma=0,media,numero;
for(int i=1;i<=5;i++){
    cin>>numero;
    suma=suma+numero;
}
media=suma/5;
cout<<"media es "<<media;
}

//ejercicio26
cienprimos(){
	 for(int i=2;i<=500;i++){
      int contador=0;
      for(int j=1;j<=500;j++){
          if(i%j==0){
              contador++;
          }
      }
      
      if(contador==2){
          cout<<" "<< i ;
      }
  }


    return 0;
}


//ejercicio27
hastanegativo(){
	 int numero,suma=0,contador,promedio;
    cin>>numero;
    while(numero>0){
       suma=suma+numero;
        cin>>numero;
        contador++;
    }
    promedio=suma/contador;
    cout<<promedio;
}

//ejercicio 29
adivinar(){
	   srand(time(NULL));
   // srand(x);
    int x=rand()%100,num;
  cout<<x<<endl;
   
   cin>>num;
   while(num!=x){
   cout<<"VUELVE A INTERNAR"<<endl;
   cin>>num;
}
cout<<"ganaste";
}

main()
{
	//NumerosUnoCien();
	//NumerosPares();
	//SaberNumeroPrimo();
	//sumanumeros1a100();
//	factorial();
//	tablamul();
//	tresnumerosmayor();
//	fizz();
	//sumadigitos();
	//vocales();
	//nunmayor();
	//multi4();
	//hastanegativo();
//	media();
//adivinar();
 //cienprimos();
 primos100();
}
