// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

//sum of First N number using the functional apporach in recursion

int sumofN(int N)
{
    if(N == 0)
    {
        return 0; 
    }
    
    return N + sumofN(N-1);
}

int main()
{
    int N;
    cin >> N;
    cout << sumofN(N);
}