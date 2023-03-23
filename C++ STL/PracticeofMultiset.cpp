// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    //introduction to Multiset
    //Multiset stores everything in sorted manner but not in  unique manner
    //which means that duplication of the values are allowed
    cout << "Introduction to MultiSet" << endl;
    cout << "==========================================" << endl;
    
    //initialization
    multiset<int>ms;
    
    //pushing some values
    ms.insert(20);
    ms.insert(43);
    //it can store the duplicate values
    ms.insert(20);
    
  //printing the vector
    for(auto it:ms)
    {
        cout << it << endl;
    }
  
  //=======================================================================================
  
  //count function can have different values as duplication is allowed to store
    cout << ms.count(20) << endl;
  
  //for erasing the single record in the multiset
    ms.erase(ms.find(20));
    
    //for erasing the multiple records
    ms.erase(ms.find(20),ms.find(20)+2);
    
     
    return 0;
}
