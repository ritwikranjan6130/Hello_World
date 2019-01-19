#include <iostream>
using namespace std;
int main(){
    int maximum = 0;
    int a[10]={0};
    for (int i = 0; i<=9; i++){
        cin>>a[i];
        maximum = (a[i]>=maximum)?a[i]:maximum;
    }
    cout<<maximum;
    return 0;
}
