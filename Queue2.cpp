#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> bsc;
    bsc.push(21);
    bsc.push(22);
    bsc.push(23);
    bsc.push(24);
    
    cout<< "All the Elements of Queue are : "<<endl;
    while(!bsc.empty()){
        cout<< bsc.front() << "\t"<<endl;
        bsc.pop();
    }

    bsc.push(21);
    bsc.push(22);
    bsc.push(23);
    bsc.push(24);
    
    cout<< "\nSize of Queue = " << bsc.size()<<endl;
    cout<< "First element of Queue = " << bsc.front()<<endl;
    cout<< "Last element os Queue = " << bsc.back()<<endl;
    cout<< "Queue is empty ? " << bsc.empty()<<endl;
    cout<< "Queue is empty ? " << (bsc.empty() ? "True" : "False") <<endl;
    cout<< "Queue is empty ? " << (bsc.empty() ? "Yes" : "No") <<endl;
    
    bsc.pop();
    cout<< "\n"<<endl;
    cout<< "After Pop() Function"<<endl;
    cout<< "Size of Queue = " << bsc.size()<<endl;
    cout<< "First element of Queue = " << bsc.front()<<endl;
    cout<< "Queue is empty ? " << (bsc.empty() ? "True" : "False") <<endl;
    
    bsc.pop();
    bsc.pop();
    bsc.pop();
    cout<< "\n"<<endl;
    cout<< "After Pop() All the Elements "<<endl;
    cout<< "Size of Queue = " << bsc.size()<<endl;
    cout<< "First element of Queue = " << bsc.front()<<endl;
    cout<< "Queue is empty ? " << (bsc.empty() ? "True" : "False") <<endl;

}