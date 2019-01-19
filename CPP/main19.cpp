#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 1; i<=n; i++){
        int no[n],c=0;
        cin>>no[i];
        if (no[i]>no[i-1]){
             c=c+1;
        }
        else if (no[i]<no[i-1]&&c>0){
            cout<<"false";
        }
        else if (no[i]<no[i-1]){
            c=c+1;
        }
    }
}
