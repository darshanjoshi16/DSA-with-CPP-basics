/*

For a given 3 digit number, find whether it is armstrong number or not. An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. Return "Yes" if it is a armstrong number else return "No".
NOTE: 371 is an Armstrong number since 33 + 73 + 13 = 371

Example 1:

Input: N = 153
Output: "Yes"
Explanation: 153 is an Armstrong number
since 13 + 53 + 33 = 153.
Hence answer is "Yes".
Example 2:

Input: N = 370
Output: "Yes"
Explanation: 370 is an Armstrong number
since 33 + 73 + 03 = 370.
Hence answer is "Yes".

Your Task:  
You dont need to read input or print anything. Complete the function armstrongNumber() which takes n as input parameter and returns "Yes" if it is a armstrong number else returns "No"..

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
100 ≤ n <1000

*/

// This function takes an integer as input and returns a string
// that indicates whether the input integer is an Armstrong number.
string armstrongNumber(int n)
{
    // Store a duplicate of the input integer so we can compare it to the sum
    // of its digits raised to the power of the number of digits later on.
    int duplicate = n;

    // Initialize a variable to keep track of the sum of the digits raised to
    // the power of the number of digits.
    int sum = 0;

    // Initialize a variable to store the last digit of the input integer.
    int ld;

    // Loop through the digits of the input integer by repeatedly dividing it
    // by 10 and taking the remainder until the input integer becomes 0.
    while(n > 0)
    {
        // Get the last digit of the input integer by taking the remainder
        // when dividing it by 10.
        ld = n % 10;

        // Add the cube of the last digit to the sum variable.
        sum = sum + (ld*ld*ld);

        // Remove the last digit from the input integer by dividing it by 10.
        n = n / 10;
    }

    // Compare the sum of the digits raised to the power of the number of digits
    // to the original input integer. If they are equal, print "Yes". Otherwise,
    // print "No".
    if(sum == duplicate)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

