#include<algorithm>
#include <iostream>

using namespace std;
 
int main()
{
    string mensaje;
    getline(cin,mensaje);
    
    transform(mensaje.begin(), mensaje.end(), mensaje.begin(), ::tolower);
    
    cout<<mensaje;
 
   return 0;
}
