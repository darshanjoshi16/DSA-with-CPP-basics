#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Basic Maths" << endl;
    cout << "===============================================" << endl;
    
    //============================================================
    //we will try to implement the logic of palindrome checking

    //we will define the variable for taking the value from the user
    int number;
    cout << "Please Enter the number: ";
    cin >> number;
    
    //defining a duplicate variable for checking the reverse number with original number because it will divided by 10 untill it becomes 0 so we cant compare it with the number
    int original_num = number;
    //defining the another variable containing the last_digit and reversal_number
    int reverse_number = 0;
    
    while(number > 0)
    {
        //extraction of last digit from the number
        int last_digit;
        last_digit = number % 10;
    
        //adding the number into reverse_number
        reverse_number = reverse_number * 10 + last_digit;
        
        //dividing the number by 10 for further extracting the digits
        number = number / 10;
        
    }
    
    //checking for the palindrome technique
    if(reverse_number == original_num)
    {
        cout << "The number is palindrome";
    }
    else
    {
        cout << "It is not Palindrome";
    }
    return 0;
}
