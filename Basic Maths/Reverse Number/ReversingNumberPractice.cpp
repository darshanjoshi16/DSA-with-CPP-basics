#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Basic Maths" << endl;
    cout << "============================================"<< endl;
    
    //we will try to reverse a number
    
    //taking the input from the user
    int number;
    cin >> number;

    //defining the last_digit variable as we need to use the extraction of digit method
    int last_digit;
    
    //defining the reverse_num variable where we will store the reverse number value
    int reverse_num = 0;
    
    while(number > 0)
    {
        
        last_digit = number % 10; //will give the current LSB value 
        reverse_num = reverse_num * 10 + last_digit; //convert it into MSB
        number = number / 10; //dividing the original number for further processing
    }
    
    cout << reverse_num;
    
    return 0;
}
