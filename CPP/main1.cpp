#include<iostream>

using namespace std;

int main()
{
    int n,i,a,b,c,z;
    cin>>z;
    n = 100;

    a= 0;
    b= 1;
    c= a +b;
    cout<<"0\n1\n";
    for(i=2;i<=n;i++){
        a = b;

        b = c;
        c= a +b;
        if (z==c){
            cout<<"yes";
            break;
        }
        else if(z==n){
            cout<<"no";
        }

    }
    return 0;
}
