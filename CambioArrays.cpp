// Online C++ compiler to run C++ program online

#include <iostream>

using namespace std;

int main() {
 int vector[8], auxiliar;
 
 cout<<"vector 1"<<endl;
 for (int i=0;i<=2;i++){
     cout<<vector[i]<<endl;
 }
 
 cout<<"vector 2"<<endl;
for (int i=0;i<3/2;i++){
	auxiliar = vector[i];
	vector[i] = vector[3-1-i];
	vector[3-1-i] = auxiliar;
 }
cout<<"vector 3"<<endl;
cout<<vector[0]<<endl;
cout<<vector[1]<<endl;
cout<<vector[2]<<endl;

    return 0;
}
