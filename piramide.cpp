#include <iostream>
using namespace std;
void imprimir(int min, int n, char dibujo){
  for(int i=0; i<min;i++){
    cout<< dibujo;
    }
    cout<<endl;
  if(min<n){
  imprimir(min+1,n,dibujo);
  }
  }

void generar_piramide(int n, char dibujo){
  int min=1;
  imprimir(1,n,dibujo);


}


int main(int argc, char* argv[]){

  if(argc!=3){
    return 0;
  }
  int numero=stoi(argv[1]);
  char caracter=argv[2][0];
  generar_piramide(numero,caracter);
  return 0;
}
