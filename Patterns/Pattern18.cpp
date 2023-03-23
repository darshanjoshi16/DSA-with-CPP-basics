/*
Input: 5

Output:
E
E D
E D C
E D C B
E D C B A
 
Input: 3

Output:
C
C B
C B A

*/

void printTriangle(int n) 
    {
         for(int i=0; i<n; i++){

            for(int j=0; j<=i; j++){

                cout <<char('A'+n-1-j)<<" ";

            }

            cout << endl;
         }   
            
    }

