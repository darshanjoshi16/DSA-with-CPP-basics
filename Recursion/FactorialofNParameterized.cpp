// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

//factorial of First N number using the parameterized apporach in recursion

int factofN(int i, int fact, int N)
{
    if(i > N)
    {
         cout << fact;
         return fact;
    }
    
    factofN(i+1,fact*i,N);
}

int main()
{
    int N;
    cin >> N;
    factofN(1,1,N);
}