#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n;
    cin>>n;
    for (i=1;i<=n;i++){
         for (k=n;k>=i;k--){
                cout<<" ";
            }

        for (j=65;j<=i+64;j++){
                 cout<<" "<<char(j);
        }

        cout<<endl;
    }
}
