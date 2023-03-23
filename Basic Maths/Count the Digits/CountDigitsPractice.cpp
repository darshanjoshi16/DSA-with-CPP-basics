#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Introduction to  Basic Maths" << endl;
    cout << "=======================================" << endl;
    
    //digit extraction pattern
    int number;
    cout << "Please enter the number: ";
    cin >> number;
   
    //===============================================================================================================================
    
    //first method of counting the digits using extraction of digits
    
    //initialize the counter variable
    int cnt = 0;
    
   //let us take an example
  //suppose number = 2043
    while(number > 0)
    {
        int lastdigit;
        lastdigit = number % 10; //value of lastdigit is 3 because 2043 % 10 = 3
        number = number / 10; //value of number is 204.3 which is rounded of to 204
        //then the proecess will be done on 204
        cnt ++;
    }
    
    //we can print the count of digits
    cout << cnt;
    
    //===================================================================================================================================
    
    //another method of counting the digits using logarithms of base 10
    
    int count = (int)(log10(number) + 1);
    cout << count ;
    
    //==================================================================================================================================
    

    
    return 0;
}
