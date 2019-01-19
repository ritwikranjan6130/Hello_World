#include<iostream>

using namespace std;

int main() {
    int n,j,l=0;
    cin>>n;
    for (int i = 1; i <= n; i++){
        l = i;
        for (int k = n;k>i;k--){
            cout<<"  ";
        }
        for  (j=1; j<=i; j++){
            cout<<l<<" ";
            l++;
        }
        l--;
        for  (j=1; j<=i-1; j++){
            l--;
            cout<<l<<" ";
        }
        cout<<endl;
    }
    return 0;
}
