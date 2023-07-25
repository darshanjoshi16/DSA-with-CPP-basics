#include<iostream>
using namespace std;

void printNameNtimes(int i, int n)
{
    if(i>n)
    {
        return;
    }
    cout << i << endl;
    printNameNtimes(i+1,n);
    
    return ;
}

int main() {
    // Write C++ code here
    int n;
    cin >> n;
    printNameNtimes(1,n);

    return 0;
}