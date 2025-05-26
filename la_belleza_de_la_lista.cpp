#include <iostream>
#include <cstdlib>
using namespace std;

struct lista_main{
  float valor;
  lista_main* antes;
  lista_main* despues;
  lista_main(float valor): valor(valor), antes(nullptr), despues(nullptr){}
};

struct estructural{
  lista_main* lista;
  float belleza;
};
void liberarNodos(lista_main* cabeza) {
    lista_main* actual = cabeza;
    while (actual != nullptr) {
        lista_main* despues = actual->despues;
        delete actual;
        actual=despues;
    }
}
float generar(int rango){
    float ranguito = static_cast<float>(rango);
    float aleatorio = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
    return -ranguito + (aleatorio * ranguito * 2.0f);
}
void agregar_valores(lista_main* &lista,int rango,int cantidad){
  cout<<lista->valor;
  lista_main* actual = lista->despues;
  for(int i=1;i<cantidad;i++){
    lista_main* nuevo = new lista_main*(generar(rango));
    lista_main* actual=nuevo;
    cout<<actual->valor<<" ";
    actual=actual->despues;
  }
}

int main(int argv,char* argc[]){
  if(argv!=3){
    return 0;  
   }
  int cantidad=stoi(argc[1]);
  int rango=stoi(argc[2]);
  lista_main* lista = new lista_main(0);
  estructural siu;
  siu.lista=lista;
  agregar_valores(siu.lista,rango,cantidad);
  siu.belleza=0;
  liberarNodos(siu.lista);
  return 0;
}



