#include<bits/stdc++.h>
using namespace std;

//declaring the function for counting the digits using digitextraction
void CountTheDigitsUsingExtraction (int N)
{
     cout <<"====================================================" << endl;
    cout << "Count the digits Using Digit Extraction" << endl;
    
      //for storing the count of digits
    int count = 0;
    //for storing the last digit of number
    int ld;
    
    //iterating the loop
    while(N > 0)
    {
        ld = N % 10;
        count++; 
        N = N / 10;
    }
   cout << "The digits : " << count;
}

//declaring the function for counting the digits using the log function
void CountTheDigitsUsingLog(int N)
{ 
    cout <<"====================================================" << endl;
    cout << "Count the digits Using ]Log values" << endl;
    cout << "The Digits: " << (int)(log10(N)+1);
    
}

//declaring the function for reversing the number using the digit extraction
void ReverseNumber(int N)
{
    cout <<"====================================================" << endl;
    cout << "Reverse the Number" << endl;
    //declaring the variable for storing the reverse number
    int reverse = 0;
    
    //storing the last digit number
    int ld;
    
    //running the loop
    while(N > 0)
    {
        ld = N % 10;
        //storing the number in reverse variable
        reverse = reverse * 10 + ld;
        N = N / 10;
    }
    
    //printing the reverse number
    cout << "Reverse Number: " << reverse;
}

//declaring the function for checking if given number is palindrome
void isPalindrome(int N)
{
    cout <<"====================================================" << endl;
    cout << "Palindrome Checking" << endl; 
    
    //declaring a duplicate variable
    int dup = N;
    //declaring the variable for reverse number storing
    int reverse = 0;
    //declaring the variable for storing the last_digits
    int ld;
    
    //iterating a loop
    while(N > 0)
    {
        ld = N % 10;
        reverse = reverse * 10 + ld;
        N = N / 10;
    }
    
    //checking if the number is palindrome or not
    if(dup == reverse)
    {
        cout << "The Number is Palindrome";
    }
    else 
    {
        cout << "The Number is not Palindrome";
    }
}

//we will implement the function for checking if given number is armstrong number or not 
void isArmStrongNum(int N)
{
    cout << "=======================================" << endl;
    cout << "Armstrong Number Checking";
    //defining the duplicate variable for storing the original number copy
    int dup = N;
    
    //defining the sum variable which will be storing the value of digits raised to 3 and summation of all digit cubes
    int sum = 0;
    
    //defining the variable to store the last digit
    int ld;
    
    
    //running the loop for untill N becomes completely divided
    while(N > 0)
    {
        ld = N % 10;
        sum = sum + (ld*ld*ld);
        N = N /10;
    }
    
    //checking if the result of sum is equal to original number
    if(sum == dup)
    {
        cout << "The Number is ArmStrong";
    }
    else
    {
        cout << "The Number is not Armstrong";
    }
}

//defining the function for printing the divisiors with brute force approach TC = O(N)
void PrintAlldivisiorsBrute(int N)
{
    cout << "Print All Divisors (Brute Force)" << endl;
    cout << "==============================================="<<endl;
    for(int i = 1; i<= N; i++)
    {
        if(N % i == 0)
        {
            cout << i << " ";
        }
    }
}

//defining the function for printing the divisiors with optimized approach TC = O(sqrt(N))
void PrintAlldivisiorsOptimized(int N)
{
    //defining the list for storing the divisiors 
    vector <int> ls;

    // //here we will use i*i instead of sqrt(N) due to reduction in the time complexity
    for(int i=1; i*i<=N ; i++)
    {
        //checking for pair of factors with divisibility
        if(N % i == 0)
        {
            ls.emplace_back(N);
            
            //checking for another factor is same or not with i then we can add into vector
            if(i != N/i){ls.emplace_back(N/i);}
        }

        //sorting the vector for ascending manner for values in the vector
        sort(ls.begin(),ls.end());

        //iterating over vector for displaying the value
        cout << "The Prime Numbers: ";

        for(auto it:ls){cout << it << " ";}

    }
}
//defining the function for checking the prime number using the brute force approach TC=O(N)
void CheckingPrimeBruteForce(int N)
{
    //as per the definition of prime number : it must have exactly 2 factors : 1 and number itself
    //initialize the variable for storing the count of factors
    int FactorCount = 0;

    //now running the loop N times which will having TC of O(N)
    for(int i=1 ; i<= N ; i++)
    {
        //checking the prime number condition
        if(N % i == 0){FactorCount++;}
    }

    //checking the count for the prime number condition fulfilling
    if(FactorCount == 2) { cout << "The Given Number is Prime";}
    else{cout << "Given number is not Prime";}

}

//defining the function for checking the prime number using the optimized approach TC = O(sqrt(N))
void CheckingPrimeOptimized(int N)
{
    //initializing the variable for storing the count of factor
    int FactorCount = 0;

    //now we will run the loop for the optimized way of TC = O(Sqrt(N))
    for(int i=1 ; i*i<=N ; i++)
    {
        //checking the condition for prime number
        if(N % i == 0)
        {
            FactorCount++;
            //checking for another part of pair
            if(i != N/i){FactorCount++;}
        }
    }

    //checking the count for the prime number
    if(FactorCount == 2) { cout << "The Given Number is Prime";}
    else{cout << "The Given number is not prime";}
}

//defining the function for performing the GCD of given 2 number using brute force approach where TC = O(min(a,b))
void GCDBrute(int N1,int N2)
{
    //we will determine the variable for storing the minimum among the given input
    int minimum = min(N1,N2);

    //we will determine the variable for keeping the track of GCD
    int gcd;

    //we will run the loop for the value of minimum variable as it would be enough
    for(int i=1 ; i<=minimum; i++)
    {
        //we will check the condition for GCD
        if(N1 % i == 0 && N2 % i == 0)
        {
            //assign the value to gcd variable
            gcd = i;
        }
    }

    //printing the value of GCD
    cout << "The GCD for " << N1 << " and " << N2 << "is : " << gcd;

}

//defining the function for performing the GCD of given 2 number using the optimized approach where TC = O(log(min(a,b)))
void GCDEuclidiean(int N1,int N2)
{
    //running the loop untill one of the input becomes 0
    while(N1>0 && N2>0)
    {
        //we will reduce the number by taking modulous of greater % smaller
        if(N1 > N2){N1 = N1 % N2;}
        else{N2 = N2 % N1;}  

    }

    //now whenever the any of the variable becomes 0 then, the other value is GCD
    if(N1 == 0) {cout << "The GCD for " << N1 << " and " << N2 << "is : " << N2; }
    else{cout << "The GCD for " << N1 << " and " << N2 << "is : " << N1;}
    
}
//================================================================================================================================================

//declaring the main function
int main()
{
    cout << "Basic Maths Practice" << endl;
    cout << "======================================" << endl;
    
    //we will apply the common input for all the practice
    int N1;
    cout << "Please Enter the number:";
    cin >> N1;

    cout << "Do we need to perform GCD here?: ";
    string answer;
    cin >> string;

    if(answer == 'Y' || answer == 'YES' || answer == 'Yes')
    {
        //incase we need to perform GCD function
        int N2;
        cout << "Please Enter another number:";
        cin >> N2;
    }
        
    //calling the function as per the requirement
    
    
    return 0;
}