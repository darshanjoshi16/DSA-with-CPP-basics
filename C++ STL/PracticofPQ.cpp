#include<bits/stdc++.h>
using namespace std;

int main()
{
    // we will understand the priority queue container
    //priority queue always contain the largest element on the top
    
    //defining the priority queue
    priority_queue<int>pq;
    
    //pushing some values
    pq.push(20);
    pq.emplace(34);
    pq.push(43);
    pq.push(5);
    
    //here the pq = {43,34,20,5}
    cout << pq.top() << endl;
    
    //we can also pop the element from the front
    pq.pop();
    
    //we can determine the size of pq
    cout << pq.size() << endl;
    
    //we can also use the swap and empty functions same as per the stack and queue
    //here this pq is acting as the max heap where max value always stays the top of the tree or container
  
  //========================================================================================================
    
    //now we will use the priority queue as the minimum heap
   priority_queue<int,vector<int>,greater<int>>pq;
   pq.push(20);
   pq.emplace(43);
   pq.emplace(54);
   pq.push(19);
   
   //it will store the min value at the top
   cout << pq.top();
   
   /* Here the push => O(LogN)
   Pop=> O(LogN)
   Top accessment => O(1) */
    
    return 0;
}
