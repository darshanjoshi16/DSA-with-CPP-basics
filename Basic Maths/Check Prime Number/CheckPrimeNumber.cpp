#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Check Prime numbers" << endl;
    cout << "=======================================" << endl;
    
    //here we will implement the checking of prime number

    //===========================================================================================================
    
    //first of all we will implement using the brute force approach
    //which has the time complexity of O(N)
    
    //taking the input from the user
    int N;
    cout << "Please enter the number: ";
    cin >> N;
    
    //defining the variable for count of factors
    int count = 0;
    
    for(int i=1 ; i<=N ; i++)
    {
        if(N % i == 0)
        {
            count++;
        }
    }

    //checking the condition for prime number
    if(count == 2)
    {
        cout << "Given number is Prime";
    }
    else
    {
        cout << "The number is not prime";
    }
    
    //=========================================================================================================

    //now  we will implement using the optimized approach
    //which has the time complexity of O(sqrt(N))
    
    //taking the input from the user
    int N;
    cout << "Please enter the number: ";
    cin >> N;
    
    //defining the variable for count of factors
    int count = 0;

    //optimized loop running approach
    for(int i=1 ; i*i<=N ; i++)
    {
        if(N % i == 0)
        { count++;
          if(i != N/i) {count ++;}
        }
        
    }
    //checking the condition for prime number
    if(count == 2)
    {
        cout << "Given number is Prime";
    }
    else
    {
        cout << "The number is not prime";
    }
    return 0;
}