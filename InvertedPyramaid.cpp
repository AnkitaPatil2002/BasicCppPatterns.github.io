#include <iostream>
using namespace std;

void InvertedPyramaid(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++)
             {
                 if(i<=j)
                     cout<<"*";
                 else
                     cout<<" ";
             }
        cout<<endl;
    }
    
}
int main()
{
    int n,m;
    cin>>n;
    InvertedPyramaid(n);
    return 0;
}
