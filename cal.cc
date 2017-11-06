/** Programa para calificar usando ProfIsMethod :v
Lopezveloz Martinez Itzia
Lunes 6 de Noviembre de 2017 **/

#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){
  float calif, exam, part, tar;

 cout<<"Ingrese su calficacion del examen"<<endl;
 cin>>exam;
 if(exam>10) { cout << "tu calificacion no es vàlida " << endl; exit(0);}
 cout<<"Ingrese la calificacion en tareas"<<endl;
 cin>>tar;
 if(tar>10) { cout << "tu calificacion no es vàlida " << endl; exit(0);}
 cout<<"ingrese su calificacion en participacion"<<endl;
 cin>>part;
 if(part>10) { cout << "tu calificacion no es vàlida " << endl; exit(0);}

 if (exam<8){
   calif=exam*0.7+part*0.15+tar*0.15;
}
 else if (exam>=8){
   if (tar=0,part=0){
   calif=exam;
}
 else if(tar>0, part>0){
   calif=exam*0.85+tar*0.15+part*0;
 }
 }
   cout<<"La calificaciòn final es "<<calif<<endl;
 return 0;
}
