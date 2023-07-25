#include<iostream>
using namespace std;

void print1toNLinearBT(int i, int n)
{
    if(i<1)
    {
        return;
    }
    print1toNLinearBT(i-1,n);
    cout << i << endl;
}



int main() {
    // Write C++ code here
    int n;
    cin >> n;
    
    print1toNLinearBT(n,n);

    return 0;
}