/*
Input: 4
Output:
   A
  ABA
 ABCBA
ABCDCBA

*/

 void printTriangle(int n) 
    {
        
        int spaces = n-1;
        
        for(int i=0;i<n;i++)
        {
            //space printing
            for(int j=0;j<spaces;j++)
            {
                cout << " ";
            }
            
            
            //character printing
            char ch = 'A';
            int breakpoint = (2*i+1)/2;
            for(int j=0;j<2*i+1;j++)
            {
                cout << ch;
                if(j>=breakpoint){ch--;}
                else {ch++;}
                
            }
            
            
            
            //space printing
            for(int j=0;j<spaces;j++)
            {
                cout << " ";
            }
            
            cout << endl;
            spaces = spaces - 1;
        }
        
    }
