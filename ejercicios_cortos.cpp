#include<iostream>
#include<string>
#include<vector>
using namespace std;



void Hola_mundo(){
  cout<<"Hola Mundo";
}
void Saludo(){
  string nombre;
  cout<<"Hola¿Con quien tengo el gusto?";
  cin>>nombre;
  cout<<"Hola "<< nombre;
}
void suma(){
  float n1;
  float n2;
  cout<<"ingresa el primer sumando";
  cin>>n1;
  cout<<"ingresa el segundo sumando";
  cin>>n2;
  cout<<"la suma es"<< n1+n2;
  }
void doble_triple(){
    float n;
    cout<<"ingrese un numero para mostrar el doble y el triple: ";
    cin>>n;
    cout<< n*2 <<" "<< n*3;
    }
void Celsius_farenheit(){
  float n;
  cout<<"ingrese la temperatura en celsius :";
  cin>>n;
  float f =n*(9.0/5.0)+32;
  cout<<"la temperatura en farenheit es :"<< f;
  }
void Convertir_ASCII(){
  char caracter;
  cout<<"ingresa un caracter para convertir a ASCII";
  cin>> caracter;
  cout<< int(caracter);
  }
void signo(){
float n;
cout<<"ingresa un numero cualquier";
cin>>n;

if(n>0){

  cout<<"es positivo";
  }
else if(n<0){

  cout<<"es negativo";

}
else{

  cout<<"es cero";
  




}

}

void mayor(){
  float n1;
  float n2;
  cout<<"ingresa un numero";
  cin>>n1;
  cout<<"ingresa otro numero";
  cin>>n2;
  if(n1>n2){
    cout<<n1;
  
  }
  else if(n2>n1){
    cout<<n2;
  
  }
  
  else{
    cout<<"son iguales";
  
  }
  


}

void paridad(){
 int n;
 cout<<"ingresa un numero";
 cin>>n;
 
 if(n % 2==0){
  cout<<"el numero es par";
 }
 else{
  cout<<"el numero es impar";
 
 }
 }
 void bisiesto(){
  int año;
  cout<<"ingresa un año";
  cin>>año;
  if((año%4==0) &&((año%100!=0 || año%400==0))){
  
    cout<<"el año es bisiesto";
 
 
 }else{
  cout<<"el año no es bisiesto";
 }
 }
void correspondencia_dia_semana(){
  int dia;
  cout<<"ingresa un día de la semana en numero";
  cin>>dia;
  switch(dia){
    case 1:
      cout<<"Es Lunes";
      break;
    case 2:
      cout<<"Es Martes";
      break;
    case 3:
      cout<<"Es Miercoles";
      break;
    case 4:
      cout<<"Es Jueves";
      break;
    case 5:
      cout<<"Es Viernes";
      break;
    case 6:
      cout<<"Es Sabado";
      break;
    case 7:
      cout<<"Es Domingo";
      break;
  }

}

void factorial(){
  int numero;
  cout<<"ingresa un numero";
  cin>>numero;
  int aux=1;
  for(int i=numero;i>0;i--){
    aux*=i;
  }
  cout<<aux;
}
void primo(){
  int numero;
  cout<<"ingresa un numero";
  cin>>numero;
  int counter=0;
  if(numero==1){
    cout<<"no es primo";
  }
  else{
    for(int i=2;i<numero;i++){
      if(numero%i==0){
        counter++;
      }
    }
  
  if(counter>0){
    cout<<"es compuesto";

 }else{
    cout<<"es primo";
 }
  
  }
  }
  
void tabla(){
  int numero;
  cout<<"ingresa un numero";
  cin>>numero;
  for(int i=1;i<=10;i++){
    cout<<numero*i<<endl;
  
  }
}
void promedio_de_5(){
  float promedio=0;
  
  for(int i=0;i<5;i++){
    float numero;
    cout<<"ingresa un numero";
    cin>>numero;
    promedio+=numero/5;
  }
  cout<<promedio;
}
void determinar_vocal(){
  string vocales="aeiouáéíóúAEIOUÁÉÍÓÚ";
  char letra;
  cout<<"ingresa una letra";
  cin>>letra;
  for(int i=0;i<vocales.length();i++){
    if(letra==vocales[i]){
      cout<<"es vocal";
      return;
    
    
    }
  
  }
  
  cout<<"no es vocal";
  

}
void mostrar_pares(){
  int numero;
  cout<<"ingresa un numero";
  cin>>numero;
  for(int i=2;i<=numero;i+=2){
      cout<<i<<endl;
    }
  
  }
void invertir_digitos(){
  string numero;
  cout<<"ingresa un numero";
  cin>>numero;
  string cifra_aux;
  for(int i=numero.length()-1;i>=0;i--){
    cifra_aux+=numero[i];
    
    }
    
    cout<<stoi(cifra_aux);
  
  
}

void contar_vocales(){
string frase;
string vocales="aeiouáéíóúAEIOUÁÉÍÓÚ";
cout<<"ingresa una frase";
cin>>frase;
int contar=0;
for(int i=0;i<frase.length();i++){
    
    for(int a=0;a<vocales.length();a++){
      if(frase[i]==vocales[a]){
        contar++;
      }
    }
  }
cout<<"hay "<< contar<<" vocales";
}
void palindromo(){
  string palabra;
  string alverre;
  cout<<"ingresa una palabra";
  cin>>palabra;
  for(int i=palabra.length()-1;i>=0;i--){
    alverre+=palabra[i];
  }
  if(alverre==palabra){
  
    cout<<"es palindromo";
    }
  else{
    cout<<"no es palindromo";
  }
  }


int main(){

return 0;
}


