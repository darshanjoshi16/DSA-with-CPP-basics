// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    //introduction to stack
    cout << "Introduction to Stack" << endl;
    cout << "===========================" << endl;
    
    //initial defining the stack
    stack<int>st;
    
    //pushing some values
    st.push(20);
    st.push(43);
    
   //for stack we can not use the iterator because of it works on the LIFO Principal
   //we also know that the only top of the stack values can be known
   
   //printing top of the stack
   cout << st.top() << endl;
   
   //popping a value will lead to removal the value of the top most position
   st.pop();
   cout << st.top();
   
   //we can determine the size of the stack
   cout << st.size();
   
   //we can swap the values of two stack using swap function
   stack<int>st2;
   st2.swap(st);
   
   //checking if swapping is successfull or not
   cout << st2.top() << endl;
   
   //checking if the stack is empty or not.
   // 1 = True
   //0 = false
   cout << st2.empty();
   
   //here we have  discussed all the methods of the stack
   
    return 0;
}
