/*

Writing the program to print any one subsequence having the sum K using recursion
which is solely based on the execution of call recursion
*/
#include <bits/stdc++.h>
using namespace std;

//function declaration
bool printKsumSub(int i, int arr[], vector<int> &ds, int Cs, int Ws, int N)
{
    if(i == N)
    {
        if(Cs == Ws)
        {
            for(auto it : ds) cout << it << " ";
                cout << endl;
                return true;
                
        }
       else {return false;}
    }
    
    
    //taking the element into account
    ds.push_back(arr[i]);
    Cs = Cs + arr[i];
    if(printKsumSub(i+1,arr,ds,Cs,Ws,N) == true)
    {
        return true;
    }
    
    
    Cs = Cs - arr[i];
    ds.pop_back();
  
  // not taking the element into the account
  if(printKsumSub(i+1,arr,ds,Cs,Ws,N) == true)
  {
      return true;
  }

   return false; 
}


int main() 
{
    //variable declaration
    int ArraySize;
    
     cout << "Please Enter the Number of Elements in Array: ";
     cin >> ArraySize;
    
    int WantedSum;
    int SourceArray[ArraySize];
    vector <int> Subsequences;
   
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
    
    printKsumSub(0, SourceArray, Subsequences,0, WantedSum, ArraySize);
    
    
       return 0; 
   
   
}