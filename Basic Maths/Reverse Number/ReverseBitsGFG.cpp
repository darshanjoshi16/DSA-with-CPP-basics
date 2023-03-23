/*
Given a 32 bit number X, reverse its binary form and print the answer in decimal.

Example 1:

Input:
X = 1
Output:
2147483648 
Explanation:
Binary of 1 in 32 bits representation-
00000000000000000000000000000001
Reversing the binary form we get, 
10000000000000000000000000000000,
whose decimal value is 2147483648.
Example 2:

Input:
X = 5
Output:
2684354560 
Explanation:
Binary of 5 in 32 bits representation-
00000000000000000000000000000101
Reversing the binary form we get, 
10100000000000000000000000000000,
whose decimal value is 2684354560.
Your Task:
You don't need to read input or print anything. Your task is to complete the function reversedBits() which takes an Integer X as input and returns the answer.

Expected Time Complexity: O(log(X))
Expected Auxiliary Space: O(1)

Constraints:
0 <= X < 232

*/




//==============================================================================



// This function takes a 64-bit integer X as input and reverses its bits
long long reversedBits(long long X) 
{
    // Initialize a variable called 'ans' to 0, which will hold the reversed bits
    long long ans = 0;

    // Initialize a variable called 'index' to 31, which will keep track of the current bit position 
    int index = 31;

    // Loop through each bit of the input integer until we reach the end
    while(X != 0) {
        // Check if the least significant bit of the input integer is 1
        if(X % 2 == 1) 
            // If it is, set the corresponding bit in 'ans' to 1 using the pow() function
            ans += pow(2, index);

        // Move to the next bit position
        index--;

        // Shift the input integer to the right by 1 bit, discarding the least significant bit
        X = X / 2;
    }

    // Return the reversed integer
    return ans; 
}
