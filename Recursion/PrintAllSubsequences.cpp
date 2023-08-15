//printing the all subsequence for the given array

/*
    Subsequence : Contigious or Non contigious elements series which must be following the order

    Example: Arr = {3,1,2}
    possible subsequences:
    {3,1,2}
    {3,1}
    {3,2}
    {1,2}
    {1}
    {2}
    {3}
    {}
    {1,2,3} - {3,2,1} -> Is not a valid subsequence as this does not follow the order
    
*/


#include<bits/stdc++.h>
using namespace std;

void printAll(int index, vector<int> &store, int arr[], int N)
{
    //base case for reaching the end of array or any storing structure
    if(index == N)
    {
        for(auto it:store)
        {
            cout << it << " ";
        }
        
        //base case if none of the member is picked in the result
         if(store.size()==0)
        {
            cout << "{}";
        }
        
        cout << endl;
        return;
    }
    
    //now as per the choice of picking the index element into subsequence and proceed further
    
    store.push_back(arr[index]);
    printAll(index+1,store,arr,N);
    
    //as per the choice of not picking the index element into subsequence and proceed further
    
    store.pop_back();
    printAll(index+1,store,arr,N);
}
int main()
{
    int arr[] = {3,2,1,4};
    int N = 4;
    vector <int> store;
    
    //calling the function to print the subsequences
    printAll(0,store, arr,N);
    return 0;
}
