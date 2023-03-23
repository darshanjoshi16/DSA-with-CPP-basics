/*

=================================================

Given an integer, check whether it is a palindrome or not.

Example 1:

Input: n = 555
Output: Yes

Example 2:

Input: n = 123
Output: No
 

Your Task:
You don't need to read or print anything. Your task is to complete the function is_palindrome() which takes the number as input parameter and returns "Yes" if it is palindrome otherwise returns "No"(Without quotes).
 

Expected Time Complexity: O(x)
Expected Space Complexity: O(x) where x is number of digits in n.
 

Constraints:
1 <= n <= 1000

*/





string is_palindrome(int n) // function to check if the given integer is a palindrome
{
    int dup = n; // storing a copy of the input integer
    int rev = 0; // initializing a variable to store the reversed integer
    int last_digit; // variable to store the last digit of the input integer

    while(n) // loop until the input integer becomes 0
    {
        last_digit = n % 10; // getting the last digit of the input integer
        rev = rev * 10 + last_digit; // reversing the input integer and storing it in rev variable
        n = n/10; // removing the last digit from the input integer
    }

    if(rev == dup){return "Yes";} // if the reversed integer is same as the input integer, it is a palindrome
    else{ return "No";} // otherwise, it is not a palindrome
}
