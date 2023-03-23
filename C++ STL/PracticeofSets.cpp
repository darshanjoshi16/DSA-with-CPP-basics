// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    //introduction to set
    //set stores everything in sorted manner and unique manner
    cout << "Introduction to Set" << endl;
    cout << "==========================================" << endl;
    
    //intialization
    set<int>set1;
    
    //pushing some values into set
    set1.insert(10);
    set1.insert(32);
    set1.insert(20);
    //only store the unique values
    set1.insert(10);
    set1.insert(43);
    
    //printing the set
    for(auto it:set1)
    {
        cout << it << endl;
    }
    
    //==============================================================================================
     //some of the regular function like begin,end,swap,empty,rbegin,rend will be same as the above stack
    
    //we can use the find method to check the occurance
    auto it = set1.find(20);
    //if the element exists it will return the element
    //otherwise it will return the set.end location
    cout << *(it) << endl;
  
  //===================================================================================================
  //count function in set can only have either 1 or 0 because of only unique value stored
    int count = set1.count(20);
    cout << count;
  
   //erase function is same remove or pop in the other container
    set1.erase(32);
    
    //it cant find 32 in the set so it will show the last location of the set
  //it will take the logarithmetic time complexituy
    auto it = set1.find(32);
    cout << *(it) << endl;
    
   //for erasing the multiple entries of the set which are contigous
    //we need to declare the 2 iterators
    auto it1 = set1.find(10);
    auto it2 = set2.find(32);
    
    //it will erase the values between the 2 iterators [first,last)
    st.erase(it1,it2);
  
    //size,swap,empty functions are same as the others
    return 0;
}
