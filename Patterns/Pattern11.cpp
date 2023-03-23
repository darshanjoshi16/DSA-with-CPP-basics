/*
Input: 5

Output:
1 
0 1 
1 0 1
0 1 0 1 
1 0 1 0 1

*/

void printTriangle(int n) 
    {
       
       for(int i=1;i<=n;i++)
       {
           int start = 1;
           if(i%2==0)
           {
               start = 0;
           }
           else{start=1;}
           for(int j=1;j<=i;j++)
           {
               cout << start << " ";
               start = 1-start;
           }
           cout << endl;
       }
    }
