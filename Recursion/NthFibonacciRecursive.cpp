// printing the Nth fibonacci number
#include <bits/stdc++.h>
using namespace std;

//recursive function for the Nth fibonacci number
int Fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    
    return Fib(n-1)+Fib(n-2);
}


int main() {
    
   int N;
   cout << "Enter the value for which you want to derive the fibonacci: ";
   cin>>N;
   cout << Fib(N);

    return 0;
}