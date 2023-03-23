/*

Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-2^31 <= x <= 2^31 - 1
*/

bool isPalindrome(int x) // function to check if the given integer is a palindrome
{
    if(x<0 || x!=0 && x%10 ==0 ) return false; // check if the given integer is negative or ends with a zero
    int check=0; // initializing a variable to store the reversed integer
    
    while(x>check) // loop until the reversed integer becomes greater than or equal to the input integer
    {
        check = check*10 + x%10; // reversing the input integer and storing it in check variable
        x/=10; // removing the last digit from the input integer
    }

    // return true if the reversed integer is same as the input integer or the input integer is same as the reversed integer with its last digit removed
    return (x==check || x==check/10);
}
