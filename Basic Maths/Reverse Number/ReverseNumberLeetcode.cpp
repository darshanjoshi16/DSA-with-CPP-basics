/*

//=========================================================================================================//
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-2^31 <= x <= 2^31 - 1

//===========================================================================================================//

*/

int reverse(int x) 
    {
        // Initialize a long integer called 'reverse_number' to 0, which will hold the reversed integer
        long reverse_number = 0;

        // Loop through each digit of the input integer until we reach the end
        while(x)
        {
            // Multiply 'reverse_number' by 10 and add the least significant digit of 'x' to get the next digit in the reversed number
            reverse_number = reverse_number * 10 + x % 10;

            // Divide 'x' by 10 to move on to the next digit
            x = x / 10;
        }

        // Check if the reversed integer is outside the range of a 32-bit signed integer
        if(reverse_number > INT_MAX || reverse_number < INT_MIN)
        {
            // If it is, return 0 to indicate an overflow
            return 0;
        }
        else
        {
            // Otherwise, return the reversed integer as a 32-bit signed integer
            return int(reverse_number);
        }
    }
