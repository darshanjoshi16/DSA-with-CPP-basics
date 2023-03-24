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

//declaring the main function
int main()
{
    cout << "Basic Maths Practice" << endl;
    cout << "======================================" << endl;
    
    //we will apply the common input for all the practice
    int N;
    cout << "Please Enter the number:";
    cin >> N;
    
    //calling the function as per the requirement
    return 0;
}