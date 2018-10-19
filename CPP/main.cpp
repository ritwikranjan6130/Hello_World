#include <iostream>

using namespace std;


int main(void) {
   int x,n;
   for (n=1; n<=10000000; n++)
   {


   x=2;

   while (x<=n/2){
        if (n%x==0){
            cout<<n<<" not prime\n";
            break;
        }
        else if (x==n/2){
            cout<<n<<" prime\n";
            break;
        }
        else if (n%x!=0)
            x=x+1;

   };
   }
   return 0;
}
