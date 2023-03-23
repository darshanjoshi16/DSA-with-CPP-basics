#include<bits/stdc+.h>
using namespace std;
int main()
{
    //we will understand the map data structure in detail
    cout << "Introduction to maps" << endl;
    cout << "============================================="<<endl;
    
    //declaration of maps
    //maps works on storing the key value pair in the container
    //there are total 3 types of declaration
    
  //=====================================================================================
    //first type
    map<int,int>mpp;
  
   //here it will consider 1 as the key and will map the  value 2 to the key
    //so the key must be unique everytime
  //assigning the values
    mpp[1] = 2;
    mpp[2] = 20;
  
  //other ways to insert the values
  //here the key is 2 and value is 4 
  mpp.insert({2,4});
  mpp.emplace({3,1});
    
    for(auto it:mpp)
    {
        //it.first = key
        //it.second = value
        cout << it.first << " " << it.second << endl;
    }
  
  //========================================================================================
    //second
    map<int,pair<int,int>>mpp2;
    //third
    map<pair<int,int>,int>mpp3;
    
  
  //for accessing the values we can use the iterators and other functions are same as other associative containers
    return 0;
}
