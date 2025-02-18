// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
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
    

