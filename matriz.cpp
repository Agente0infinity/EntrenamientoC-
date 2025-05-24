#include <iostream>
using namespace std;




int main(int argv, char* argc[]){
  if(argv!=2){
    return 0;
  }
int orden=stoi(argc[1]);

int matrix[orden][orden];

for(int i=0;i<orden;i++){
  for(int a=0;a<orden;a++){
    if(a==i){
      matrix[i][a]=1;
      cout<<matrix[i][a]<<" ";
      }
    else{
      matrix[i][a]=0;
      cout<<matrix[i][a]<<" ";
      
    }
  }
  cout<<endl;
}
}

