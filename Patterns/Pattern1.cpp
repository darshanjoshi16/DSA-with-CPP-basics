/* Pattern 1
Input: 5

Output:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/


void printSquare(int n) {
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout << '*'<<" ";
            }
            
            cout << endl;
        }
    }


