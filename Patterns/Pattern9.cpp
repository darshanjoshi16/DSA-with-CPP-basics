/*
Input : 5

Output:

     *
    ***
   *****
  *******
 *********
 *********
  *******
   *****
    ***
     *
     
 */

   void printDiamond(int n) 
    {
       for(int r=1 ; r<= 2*n ; r++  ) 
       {

         //used ternary operator to determine the row based on condition of the symmetry
        int row = r <= n ? r : 2*n - r+1;

            for(int s=1 ; s <= n - row ; s++) 
            {

                cout<<" ";

            }

            for(int c=1 ; c <= row ; c++) 
            {

                cout<<"* ";

            }

            cout<<endl;
        }
    }

