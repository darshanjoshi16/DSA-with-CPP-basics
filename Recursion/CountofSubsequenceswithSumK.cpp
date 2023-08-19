/*

Writing the program to print all subsequences having the sum K using recursion
*/
#include <bits/stdc++.h>
using namespace std;

//function declaration
int printKsumSub(int i, int arr[], int Cs, int Ws, int N)
{
    if(i == N)
    {
        if(Cs == Ws)
        {
                return 1;
        }
        else {return 0;}
    }
    
    //taking the element into account
    
    Cs = Cs + arr[i];
    int Left = printKsumSub(i+1,arr,Cs,Ws,N);
    
    Cs = Cs - arr[i];
  
 
   int Right = printKsumSub(i+1,arr,Cs,Ws,N);
   
   return Left + Right;
}


int main() 
{
    //variable declaration
    int ArraySize;
    
     cout << "Please Enter the Number of Elements in Array: ";
     cin >> ArraySize;
    
    int WantedSum;
    int SourceArray[ArraySize];
   
   cout << "\n===================================================" << endl;
   
   cout << "Please Enter the sum of value for which you want all the subsequences: ";
   cin >> WantedSum;
   
    cout << "\n===================================================" << endl;
    
    //insertion of elements in the array
    for(int i = 0; i<= ArraySize -1; i++)
    {
        int ValueforIndex;
        cout << "Please Enter the value for the" << i << "index: ";
        cin >> ValueforIndex;
        SourceArray[i] = ValueforIndex;
    }
    
    /*testing for successfull insertion of elements
    for(auto it: SourceArray)
    {
        cout << it << " ";
    }*/
    
    cout << "Count of Subsequences: " << printKsumSub(0, SourceArray,0, WantedSum, ArraySize);
    
    
    return 0; 
   
   
}
