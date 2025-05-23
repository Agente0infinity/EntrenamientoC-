#include<iostream>
#include <vector>
#include <string>
using namespace std;





int main(int argv, char* argc[]){
  int agregar;
  int rango=argv-1;
  vector<int> numeros;
  for(int i=1;i<rango;i++){
      agregar=stoi(argc[i]);
      numeros.push_back(agregar);
  }
  }

