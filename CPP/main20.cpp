#include<iostream>

using namespace std;

int main(){
    int n,i=1,sum = 0;
    cin>>n;
    int k = n;
    int no[15];
    no[0]=0;
    bool ans;
    while (n!=0){
        no[i]=n%10;
        i=i+1;
        n=n/10;
    }
    while (i>=1){
        i--;
        sum = sum + (no[i]*no[i]*no[i]);
    }
    cout<<sum<<endl;
    if (sum==k){
        ans = true;
        cout<<"true";
    }
    else{
        ans = false;
        cout<<"false";
    }
    return 0;
}
