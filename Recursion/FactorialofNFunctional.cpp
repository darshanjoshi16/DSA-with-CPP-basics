// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

//factorial of First N number using the functional apporach in recursion

int factofN(int N)
{
    if(N == 0)
    {
        return 1; 
    }
    
    return N * factofN(N-1);
}

int main()
{
    int N;
    cin >> N;
    cout << factofN(N);
}