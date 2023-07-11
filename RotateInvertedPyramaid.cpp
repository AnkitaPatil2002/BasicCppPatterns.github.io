#include <iostream>
using namespace std;

void RotateInvertedPyramaid(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
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
    cin>>"Enter the value">>n;
    RotateInvertedPyramaid(n);
    return 0;
}
