#include <iostream>

using namespace std;

int factorial(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    return fact;
}
int ncr(int n, int r){
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n - r);
    int ans = nfact/(rfact*nrfact);
    return ans;
}

int main()
{
    cout << "Hello world!" << endl;
    cout << ncr(5,3);
    return 0;
}
