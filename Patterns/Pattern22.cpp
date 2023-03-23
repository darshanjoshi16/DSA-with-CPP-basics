/*
Input: 4

Output:
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

void printSquare(int n) 
    {
        for(int i=0;i<2*n-1;i++)
        {
            for(int j=0;j<2*n-1;j++)
            {
                int top = i;
                int left = j;
                int right = (2*n-1)-1-j;
                int down = (2*n-1)-1-i;
                
                cout << n-min(min(left,right),min(top,down)) << " ";
            }
            cout << endl;
        }
       
    }
