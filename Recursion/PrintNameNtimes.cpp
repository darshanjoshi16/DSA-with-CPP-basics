
#include<iostream>
using namespace std;

//function which contains the logic for the implementation
void printNameNtimes(int i, int n)
{
    if(i>n)
    {
        return;
    }
    cout << "Darshan" << endl;

    //recursive call to the function
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