#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Basic Maths" << endl;
    cout << "====================================" << endl;
    
    //here we will implement the finding the GCD of given 2 numbers
    
    //first of all we will determine the brute force approach
    
    //we will take 2 numbers from input from the user
    cout << "Enter the first Number: ";
    int n1;
    cin >> n1;
    cout << "Enter the second Number: ";
    int n2;
    cin >> n2;
    
    //defining the variable to store the minimum value among the given input from user
    int loopvalue = min(n1,n2);
    
    //defining the variable for storing the value of gcd value of 2 numbers recieved from the user
    int gcd;
    
    //now running the loop for min(n1,n2) for utilization of number
    for(int i=1; i<=loopvalue; i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    
    //printing the value of gcd variable
    cout << "The GCD: " << gcd;


    //=========================================================================================================

    /*
    
    we will implement using euclidean algorithm which will reduce the timecomplexity.
    euclidean algo shows the below result
    gcd(a,b) = gcd(a-b,b)
    
    but this result also add more iteration for loops which will increase the time complexity
    so we will use more TC reducing algorithm for implementation
    gcd(a,b) = gcd(a%b,b)
    
    it will reduce the TC to O(log(min(a,b)))
    
    */

    //we will implement the loop using the while loop
    // Run the loop while both n1 and n2 are greater than zero
    while(n1 > 0 && n2 > 0)
    {
        // If n1 is greater than n2, take the remainder of n1 divided by n2
        if(n1 > n2){ n1 = n1 % n2; } 
        // Otherwise, take the remainder of n2 divided by n1
        else { n2 = n2 % n1; } 
    }

    if(n1 == 0) { // If n1 is zero, output n2 as the GCD
    cout << "The GCD: " << n2;} 
    
    else { //otherwise output n1 as the GCD
    cout << "The GCD: " << n1; } 


    
    return 0;
    
}