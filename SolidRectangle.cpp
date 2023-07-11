#include <iostream>
using namespace std;

void singleRectangle(int n ){
  for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
              cout<<"*"<<" ";
        }
        cout<<endl;
  }
}

int main(){
  int n;
  cin>>"Enter the value">>n;
  singleRectangle(n);
  return 0;
}
