/*
Input: 5

Output:
* 
* * 
* * * 
* * * * 
* * * * *
* * * *
* * *
* *
*

*/

void printTriangle(int n) 
    {
        for(int i=1;i<=2*n-1;i++)
        {
            //stars printing
            
            int stars = i;
            if(i>n)
            {
                stars=2*n-i;
            }
            
            for(int j=0;j<stars;j++)
            {
                cout << "* ";
            }
            
            //spaces printing
            int spaces = n-1;
            for(int j=0;j<spaces;j++)
            {
                cout << " ";
            }
            if(i>n)
            {
                spaces = spaces + 2;
            }
            else {spaces= spaces- 2;}
            cout << endl;
        }
        
    }

