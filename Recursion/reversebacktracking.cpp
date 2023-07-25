#include<iostream>
using namespace std;

void printNto1LinearBT(int i, int n)
{
    if(i>n)
    {
        return;
    }
    printNto1LinearBT(i+1,n);
    cout << i << endl;
}



int main() {
    // Write C++ code here
    int n;
    cin >> n;
    
    printNto1LinearBT(1,n);

    return 0;
}