/*
nput: 5

Output:
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

void printTriangle(int n) 
    {
        int spaces = 0;
        
        for(int i=0;i<n;i++)
        {
            //stars
            for(int j=1;j<=n-i;j++)
            {
                cout <<"*";
            }
            
            //space
          
            for(int j=0;j<spaces;j++)
            {
                cout << " ";
            }
            
            //stars
            for(int j=1;j<=n-i;j++)
            {
                cout <<"*";
            }
            
            cout << endl;
            spaces = spaces+2;
        }
        
        spaces = 2*n-2;
         for(int i=1;i<=n;i++)
        {
            
            //stars
            for(int j=1;j<=i;j++)
            {
                cout <<"*";
            }
            
            //space
          
            for(int j=0;j<spaces;j++)
            {
                cout << " ";
            }
            
            //stars
            for(int j=1;j<=i;j++)
            {
                cout <<"*";
            }
            cout << endl;
            spaces = spaces-2;
            
        }
        
        
    }
