// Online C++ compiler to run C++ program online
#include <iostream>	
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main() {
 // cout<<"------------------------------------------------------------";
  //cout<<"|"<<endl<<"|"<<endl<<"|"<<endl<<"|";
  int cantpc,cargo;
  string nombres[100],compo[100],dat[100][100],fecha,sede,nombre,cedula,correo,firma;
  compo[0]="  Mode torre  ";
  compo[1]=" Seri torre ";
  compo[2]="Seri monitor";
  compo[3]="Seri teclado";
  compo[4]="Seri mouse ";
  compo[5]="Procesador";
  compo[6]=" RAM ";
  compo[7]="Disco duro";
  compo[8]=" grafica";
  compo[9]=" Guaya    ";
  
  cout<<"           !!!!!Bienvenido!!!!!"<<endl;
   cout<<"Ficha tecnica"<<endl;
  cout<<endl;
  	cout<<"Difite fecha  DD/MM/AAAA"<<endl;
	cin>>fecha;
	cout<<"Sede"<<endl<<"Pampalinda o Palmira"<<endl;
	getline(cin,sede);
	cin>>sede;
	transform(sede.begin(), sede.end(), sede.begin(), ::tolower);
	cout<<"Digite su nombre"<<endl;
	cin>>nombre;
		cout<<"Digite su n° de documento"<<endl;
	cin>>cedula;
	cout<<"CARGO"<<endl<<"1.Tecnico o 2.Tecnologo"<<endl;
	cin>>cargo;
	cout<<"Digite su correo"<<endl;
	cin>>correo;
		cout<<"Digite su firma"<<endl;
	cin>>firma;
  cout<<"¿Cuantas hojas de vida va llenar?"<<endl;
  cin>>cantpc;
  
  //nombres pc
  for(int i=0;i<cantpc;i++){
      cout<<"Digite nombre del PC # "<<i+1<<endl;
      cin>>nombres[i];
  }
  
  //llenar datos
  for(int i=0;i<cantpc;i++){
      for(int j=0;j<=9;j++){
          cout<<"Digite "<<compo[j]<<" Del PC "<<nombres[i]<<endl;
          cin>>dat[i][j];
          //cout<<"Digite"<<endl;
         // cin>>p;
      }
  }
  system("CLS");
  
   cout<<"                                                                   FICHA TECNICA"<<endl;
  	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"|                                                                SOPORTE TECNICO"<<"                        FECHA:"<<fecha<<"                                             |"<<endl;
	cout<<"|                                                                FORMATO HOJA DE VIDA DE EQUIPOS DE COMPUTO                                                           |"<<endl;
if(sede=="pampalinda"){
		cout<<"|                                                                SEDE:"<<sede<<"                                                                                      |"<<endl;
}
else if(sede=="palmira"){
		cout<<"|                                                                SEDE:"<<sede<<"                                                                                         |"<<endl;
}
	//cout<<"|                    SEDE:"<<sede<<"                                                                                                                                  |"<<endl;
	cout<<"|                                                                                                                                                                     |"<<endl;
	cout<<"|                                                                DATOS DEL RESPONSABLE DEL EQUIPO                                                                     |"<<endl;
	cout<<"|                                                                NOMBRE: "<<nombre<<"     N°DOCUMENTO: "<<cedula<<"                                                             |"<<endl;
	if(cargo==1){
		cout<<"|                                                                CARGO: TECNICO"<<"       CORREO: "<<correo<<"                                               |"<<endl;
	}
	else if(cargo==2){
		cout<<"|                                                                CARGO: TECNOLOGO"<<"       CORREO: "<<correo<<"                                             |"<<endl;
	}
   // cout<<"|                                                                CARGO: "<<cargo<<"       CORREO: "<<correo<<"                                                                                             |"<<endl;		
	cout<<"|                                                                  FIRMA:"<<firma<<"                                                                                         |"<<endl;
	cout<<"|                                                                                                                                                                     |"<<endl;
cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"                                                                      CARACTERISTICAS DE LOS EQUIPOS                                                                   "<<endl;
  
 	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
  
 // cout<<"-------------------------------------------------------------------------------------------------------------------------------------------";
  
  //mostrar matriz
  for(int i=0;i<=9;i++){
  	cout<<"      ";
      cout<<compo[i];
      
  }
  for(int i=0;i<cantpc;i++){
      cout<<endl;
      cout<<nombres[i];
      for(int j=0;j<=9;j++){
          cout<<" ["<<dat[i][j]<<"]";
          cout<<"      ";
      }
  }
  
  
  
  
  
  
  
  
  
  
  
    return 0;
}
  
