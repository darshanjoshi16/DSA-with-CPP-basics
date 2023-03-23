/*
Input: 5

Output:
A
BB
CCC
DDDD
EEEEE

*/

void printTriangle(int n) {
        
        char ch = 'A';
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout << ch;
            }
            
            cout << endl;
            ch++;
        }
    }
