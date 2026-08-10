#include <iostream>
using namespace std;

void funx(){
int a, b;
cout<<"Enter first number: ";
cin>>a;
cout<<"Enter second number: ";
cin>>b;
cout<<"Sum of "<<a<<" and "<<b<<" is: "<<a+b<<endl;
}

int main() {
    cout<<"Hello its me, User Defined Function"<<endl;
    funx();
    cout<<"Thank you for using my function"<<endl;
    return 0;
}
