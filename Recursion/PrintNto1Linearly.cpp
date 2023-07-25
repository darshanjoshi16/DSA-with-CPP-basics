#include<iostream>
using namespace std;

void printNto1Linear(int i, int n)
{
    if(i<1)
    {
        return;
    }
    cout << i << endl;
    printNto1Linear(i-1,n);
}



int main() {
    // Write C++ code here
    int n;
    cin >> n;
    
    printNto1Linear(n,n);

    return 0;
}