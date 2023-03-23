/*
Given a number N. Count the number of digits in N which evenly divides N.

Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.
 

Example 1:

Input:
N = 12
Output:
2
Explanation:
1, 2 both divide 12 evenly
Example 2:

Input:
N = 23
Output
0
Explanation:
2 and 3, none of them
divide 23 evenly


Expected Time Complexity: O(log N)
Expected Space Complexity: O(1)
 

Constraints:
1<=N<=105

*/





#include<bits/stdc++.h>
using namespace std;

int main()
{
  //defining the variable and taking the value from the user
  int number;
  cin >> number;
  
  //defining the duplicate variable 
  int duplicate = number;
  
  //defining the count variable for given problem
  int count = 0;
  
  //we will run the logic for the digit extraction
  while(number > 0)
  {
    int last_digit;
    last_digit = number % 10;
    
    if(duplicate % last_digit == 0)
    {
      count++;
    }
    
    number = number / 10;
    
  }
  
  return count;
    
    
  
