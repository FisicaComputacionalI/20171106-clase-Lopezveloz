/** Programa usando switch
Lopezvelos Martinez Itzia
Lunes 6 de Noviembre de 2017 **/

#include<iostream>
using namespace std;
int main(){
char variable;
cout<<"Ingresa una calificacion entre A y E"<<endl;
cin>>variable;
 variable= toupper(variable);
  switch(variable){
  case 'A': cout<<"Excelente"<<endl;
  break;
 case 'B': cout<<"Muy Bien"<<endl;
   break;
 case 'C': cout<<"bien"<<endl;
   break;
 case 'D': cout<<"pasaste"<<endl;
   break;
 case 'E': cout<<"intentalo denuevo"<<endl;
   break;
 default: cout<<"No valido"<<endl;
}
 return 0;
}
