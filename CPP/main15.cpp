#include<iostream>
using namespace std;
int main() {
  int a,n,b[10],i=1;
  cin>>a>>n;
  while(a!=0){
    b[i] = a % 10;
    i++;
    a = a/10;
  }
  cout<<b[i-n];
	return 0;
}
