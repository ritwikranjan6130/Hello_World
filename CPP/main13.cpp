#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i<n;i++){
        int a,sum = 0;
        cin>>a;
        while(a>0){
            sum = sum + (a%10);
            a = a / 10;
        }
        if (sum%2==0){
            sum%4==0?cout<<"Yes\n":cout<<"No\n";
        }
        else if (sum%2==1){
            sum%3==0?cout<<"Yes\n":cout<<"No\n";
        }
    }
}
