/*
1 to N Without Loop

Problem Statement
=====================================================
Return values from 1 to N without using the recursion

=========================================================================
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
5
Sample Output 1 :
1 2 3 4 5
Explanation Of Sample Input 1:
Input: ‘n’ = 5
Output: 1 2 3 4 5

===========================================================================
Explanation: An array containing integers from ‘1’ to ‘n’ is [1, 2, 3, 4, 5].
Sample Input 2:
2
Sample Output 2:
1 2
Explanation Of Sample Input 2:
Input: ‘n’ = 2

Output: 1 2

============================================================================
Explanation: An array containing integers from ‘1’ to ‘2’ is [1, 2].
Expected Time Complexity:
The expected time complexity is O(n), where 'n' is the given integer.
Expected Space Complexity:
The expected space complexity is O(n), where 'n' is the given integer.
Constraints:
1 <= n <= 10^4

Time Limit: 1-sec
*/



vector<int> printNos(int x) {
    
    //base condition for the recursion execution
    if(x == 0)
    {
        vector<int> v;
        return v;
    }

    //recursive call for the function
    vector<int> p = printNos(x-1);

    //insertion of the values in the vector
    p.push_back(x);

    return p;
}