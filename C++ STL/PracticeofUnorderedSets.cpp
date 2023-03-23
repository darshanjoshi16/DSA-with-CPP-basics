// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    //introduction to unordered sets
    unordered_set<int>uset;
    
    //unordered set stores unique values but it doesn't sort them.
    //other functions are same as set except the lower and upper bound functions
    
    //it stores the value in order of latest entry
    
    uset.insert(20);
    uset.insert(2);
    uset.insert(10);
    uset.insert(43);
    
    //printing values
    for(auto it:uset)
    {
        cout <<it << endl;
    }
    
    //other functions like swap,size,empty and erase are same as set and multiset but bound functions doesn't work
    

    return 0;
}
