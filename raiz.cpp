#include <iostream>
#include <cmath>
using namespace std;
void imprimir(int inicio, int fin,int base,string caracter){
  for(int i=1; i<=base; i++){
    if(i>=inicio && i<=fin){
      cout<<caracter;
      }
    else{
      cout<<" ";
      }
    }
    cout<<endl;
    if(inicio>1){
      imprimir(inicio-1,fin+1,base,caracter);
    }
}

void piramide(int N, string caracter){
  int base=1+(2*(N-1));
  int mitad=(base/2)+1;
  imprimir(mitad,mitad,base,caracter);
}
void raiz_cuadrada(int decimal){

  if(decimal<0){
    cout<<sqrt(decimal*-1)<<"i";
  }
  else{
    cout<<sqrt(decimal);
  



}
}


  

int main(int argv,char* argc[]){
if(argv!=4){
  cout<<"se deben ingresar exactamente 3 argumentos";
  return 0;
}
int entero=stoi(argc[1]);
string caracter=argc[2];
float flotante=stof(argc[3]);
piramide(entero,caracter);
raiz_cuadrada(flotante);
return 0;
}
