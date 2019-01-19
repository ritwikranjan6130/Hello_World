#include<iostream>
using namespace std;
int main() {
  int a,n,b[10],i=1,c=0;
  cin>>a>>n;
  while(a!=0){
    b[i] = a % 10;
    if (b[i]==n){
      c++;
      }
    i++;

    a = a/10;


  }
  cout<<c;
	return 0;
}
