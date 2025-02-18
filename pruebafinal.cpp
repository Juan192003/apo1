#include<iostream>
#include<algorithm>
using namespace std;
main(){
	string fecha,sede,nombre,cedula,correo,firma;
	int cargo;
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
	cout<<"                                                                 FICHA TECNICA"<<endl;
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
	cout<<"|                                                                     CARACTERISTICAS DE LOS EQUIPOS                                                                  |"<<endl;
	cout<<"|                                                                                                                                                                     |"<<endl;
	
}



