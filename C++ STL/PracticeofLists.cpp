#include <bits/stdc++.h>
using namespace std;
int main() 
{
    cout << "Introduction to Lists" << endl;
    cout << "====================================================" << endl;
  
  //=============================================================================================
    //we will now understand the new container which is list
    //defining the list
    list<int>ls;
    
    //adding the elements into the list
    ls.push_back(20);
    ls.emplace_back(43);
    
    //printing the list
    for(auto it : ls)
    {
        cout << it << endl;
    }
  
  //==============================================================================================
   //adding the elements into the list
  //it will append the value in the front side of list
    ls.push_front(37);
    ls.emplace_front(66);
    
    //printing the list
    for(auto it : ls)
    {
        cout << it << endl;
    }
  
  //===============================================================================================
  
  //mostof the functions are similiar to vector so we will only use some function here for the explaination purpose
  
    //insertion of the single element into the list
    ls.insert(ls.begin(),20);
    
    //printing the list
    for(auto it:ls)
    {
        cout << (it) << endl;
    }
    
    //we will now understand the new container which is list
    //defining the lists;
    list<int>ls;
    list<int>ls2;
    
    //adding the elements into the list 1
    ls.push_front(37);
    ls.emplace_front(66);
    
    //adding the elements into the list 2
    ls2.emplace_front(43);
    ls2.emplace_front(20);
    
    //swapping the lists
    ls.swap(ls2);
    
    //printing the list
    for(auto it:ls)
    {
        cout << (it) << endl;
    }
  //============================================================================
  
  //for clearing out the list we will use the list.clear() function
  //clearing the list
    ls.clear();
    
    //checking if the operation succeeded or not
    cout << ls.empty();
    return 0;
}
