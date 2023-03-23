#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Basic Maths" << endl;
    cout << "=========================================" << endl;
    
    //in this program we will practice how to print all the divisors
    //taking the input from the user
    int number;
    cout << "Enter the Number: ";
    cin >> number;
    
    //=========================================================
    //first of all we will apply brute force method by running the loop till 1 to number and checking if it is divisible by i for n.
    
    cout << "Brute Force Approach" << endl;
    for(int i =1 ; i <= number ; i++)
    {
        if(number % i == 0)
        {
            cout << i << " ";
        }
    }
    
    cout << endl;
    
    //this approach works fine but the issue is that here the time complexity TC = O(N)
    //which will be performance degrading when value of N increases
    
    //===========================================================
    
    //now we will work on applying some intuitive approach 
    //as we know in mathematics factors can be obtained by running the loop for sqrt(Number) times where the factors can be paired in 'i' and 'n/i'
    //we have to just take care that i and n/i can not be equal as it will lead to redundant factors
    
    //defining the vector for storing the factors in sorted manner
    vector<int> ls;
    
    //here we will use i*i instead of sqrt(N) due to reduction in the time complexity
    cout << "Using Intuitive approach " << endl;
    for(int i = 1 ; i*i <= number; i++)
    {
        if(number % i == 0)
        {
            ls.emplace_back(i);
            
            if(i != number / i)
            {
                ls.emplace_back(number/i);
            }
        }
        
    }
    
    //sorting the factors in the vector
    sort(ls.begin(),ls.end());
    
    //using iterator for printing the current values in the vector
    for(auto it : ls){ cout << it << " ";}
    
    
    
    return 0;
}
