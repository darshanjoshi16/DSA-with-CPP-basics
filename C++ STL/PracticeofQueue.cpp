// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    //we till understand the queue container
    cout << "Introduction to Queue"<<endl;
    cout<< "======================================"<<endl;
    
    //defining the queue structure
    //queue works on FIFO principle (First In First Out)
    queue<int>q;
    
    //pushing some values into queue
    q.push(20);
    q.push(37);
    q.push(43);
    
    
    //printing the value of front and back
    cout << q.front() << endl;
    cout << q.back() << endl;
    
    //we can pop the from the front of the queue
    q.pop();
    
    //it will display the value 37
    cout <<q.front()<<endl;
    
    //we can do the manipulation
    q.front()+=5;
    
    //it will output the value 42
    cout <<q.front()<<endl;
    
     //size of the queue
     cout << q.size() << endl;
     
     //we can also swap and empty same as stack
    return 0;
}
