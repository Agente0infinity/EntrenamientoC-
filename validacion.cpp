#include <iostream>
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

  

int main(int argc,char* argv[]){
if(argc!=4){
  cout<<"se deben ingresar exactamente 3 argumentos";
  return 0;
}
int entero=stoi(argv[1]);
string caracter=argv[2];
float flotante=stof(argv[3]);
piramide(entero,caracter);

return 0;
}
