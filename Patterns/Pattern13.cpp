/*
nput: 5

Output:
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
*/

void printTriangle(int n) {
        
        int num=1;
        
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i;j++)
            {
                cout << num << " ";
                num = num+1;
            }
            cout << endl;
            
        }
        
    }
