#include <iostream>
using namespace std;

void hollowPatternGenerator(int n,int m){
      for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
             if(i==1 || i==n || j==1 || j==m){
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
  int n,m;
  cin>>n;
  cin>>m;
  hollowPatternGenerator(n,m);
  return 0;
}
