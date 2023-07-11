#include<iostream>
using namespace std;

void halfPyramaid(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
              if(i>=j){
                  cout<<"*";
              }
              else{
                   cout<<" ";
              }
        }
        cout<<endl;
    }
}

int main(){
  int n;
  cin>>"Enter the value">>n;
  halfPyramaid(n);
  return 0;
}
