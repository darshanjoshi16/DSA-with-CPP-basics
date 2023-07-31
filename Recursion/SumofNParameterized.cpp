#include <iostream>
using namespace std;

//sum of First N number using the parameterized  apporach in recursion
void sumofN(int i, int sum,int N)
{
    if(i > N)
    {
        cout << sum;
        return;
    }
    else
    {
        sumofN(i+1,sum+i,N);
    }
}

int main()
{
    int N;
    cin >> N;
    sumofN(0,0,N);
}