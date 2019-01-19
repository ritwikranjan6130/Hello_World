#include<iostream>
using namespace std;
int main() {
  int a, b = 0,j = 1;
  cin>>a;
  while (a > 0){
   b = b + (a % 8)*j;
   a = a / 8;
   j = j * 10;
  }
  cout<<b;

	return 0;
}
