#include <bits/stdc++.h>
using namespace std;
int main() 
{
    cout << "Introduction to Pairs" << endl;
    cout << "======================================="<< endl;
    
    //introduction of pair defining in simpler way
    cout << "Single Pair defining" << endl;
    pair<int,int>p1 = {20,43};
    cout << "========================="<< endl;
    cout << "First: "<<p1.first<<" " << "Second: "<<p1.second<<endl;
    
    //for defining more than 2 variable values we will use the concept of nested pairs
    cout << "Nested Pair Defining" << endl;
    cout << "========================="<< endl;
    pair<int,pair<int,int>>p2 = {20,{37,43}};
    cout << "First: " <<p2.first << " " << "Second.first: " << p2.second.first <<" "<<"Second.second: "<<p2.second.second;
    
     //we can also define the array of pairs and traverse it
    cout << "Array of Pairs" << endl;
    cout << "========================="<< endl;
    pair<int,int>roll[] = {{20,37},{20,43},{37,43}};
    int num = sizeof(roll)/sizeof(roll[0]);
    
    for(int i=0;i<num;i++)
    {
        cout << "First element of "<<i+1<<" pair:" << roll[i].first<<endl;
        cout << "Second element of "<<i+1<<" pair:" << roll[i].second<<endl;
    }
    
    return 0;
  }
     
    
 

