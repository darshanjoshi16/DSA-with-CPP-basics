#include <bits/stdc++.h>
using namespace std;
int main() 
{
    //introduction to dequeue
    cout << "Introduction to dequeue" << endl;
    cout << "==================================" << endl;
    
    //creating the dequeue named dq for initialization
    deque<int>dq;
    
    //pushing back some values
    dq.push_back(37);
    dq.emplace_back(66);
    
    for(auto it:dq)
    {
        cout << it << endl;
    }
    
   //======================================================================================================
  
 //pushing some values in the front
    dq.push_front(43);
    dq.emplace_front(20);
   
    //printing the value after pushing back and pushing front some values 
    for(auto it:dq)
    {
        cout << it << endl;
    }
  
  //=========================================================================================================
   //it will pop the value of 66
    dq.pop_back();
    //it will pop the value of 20
    dq.pop_front();
    
    
    //printing the value after pushing back and pushing front some values 
    for(auto it:dq)
    {
        cout << it << endl;
    }
  
  //============================================================================================================
   //dq.front() will print the value of the front indexed value and last indexed value in dq.back()
    cout << dq.front() << endl;
    cout << dq.back();
   
    //we will try only two more function one of them is insert. it will insert the value 33 at the 3rd index.
    dq.insert(dq.begin()+2,33);
    
    for(auto it:dq)
    {
        cout << it << endl;
    }
  
   //other function we will use is the size
    cout << dq.size();
   
 
  //there are other functions but they are same as vectors like begin,end,rbegin,rend,clear and others so we will consider them practiced in the vector
    
    

    return 0;
}
