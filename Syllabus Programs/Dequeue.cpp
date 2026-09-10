#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> dq = {21,22,23,24};
    dq.push_back(25);
    dq.push_front(20);
    dq.push_front(19);
    dq.push_back(26);
    cout<<"Size of the deque is: "<<dq.size()<<endl;
    int i=0, size= dq.size();
    /*while(i < size){
        cout<<dq[i]<<endl;
        i++;
    }*/
    do{
        cout<<dq[i]<<endl;
        i++;
    }while(i < size);

    // for(int i= 0; i<dq.size(); i++){
        // cout<<dq[i]<<endl;
    // }
    
    /*dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.push_back(50);
    cout<<"Size of the deque is: "<<dq.size()<<endl;
    cout<<"Elements in the deque are: ";
    for(int i=0; i<dq.size(); i++){
        cout<<dq[i]<<" ";
    }*/


}