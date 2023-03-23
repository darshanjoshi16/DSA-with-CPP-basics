/*
Input: 5

Output:

*********
 *******
  *****
   ***
    *
    
*/

void printTriangle(int n) {
	     
	     for(int i=0; i<n; i++)
        {
            //space printing
            for(int j=0;j<i;j++)
            {
                cout << " ";
            }
            
            
            //stars printing
            for(int j=0; j<2*n-(2*i+1);j++)
            {
                cout << "*";
            }
            
            //space printing
            for(int j=0;j<i;j++)
            {
                cout << " ";
            }
            cout << endl;
            
        }
	}

