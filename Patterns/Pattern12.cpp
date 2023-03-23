/*
Input: 5

Output:
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/

void printTriangle(int n) 
    {
       int spaces = 2 * (n-1);
        // code here
        for(int i=1;i<=n;i++)
        {
            //number printing
            for(int j=1;j<=i;j++)
            {
                cout << j << " ";
            }
            
            
            //space printing
     
           for(int j=1;j<=spaces;j++)
           {
               cout << " " << " ";
              
           }
           
            
            
            //number printing
             for(int j=i;j>=1;j--)
            {
                cout << j << " ";
            }
            
            spaces = spaces - 2;
            cout << endl;
           
         
        }
    }
