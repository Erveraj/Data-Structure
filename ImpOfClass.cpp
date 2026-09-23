#include<iostream>
#include<string>
using namespace std;
class Car {                 //This is a class named Car
    public:                 //This is an access specifier
    string name;          //Attributes of the class
    string model;
    int year;
    float price;
    string color;
};

int main(){
    Car car1;           //Creating a object 

    // Access attributes and set values
    car1.name = "THAR";
    car1.model = "ROXX 4X4";
    car1.year = 2026;
    car1.price = 23.9999;
    car1.color = "Black";

    cout <<"Name: "<<car1.name<<endl;
    cout <<"Model: "<<car1.model<<endl;
    cout <<"Year: "<<car1.year<<endl;
    cout <<"Price: "<<car1.price<<endl;
    cout <<"Color: "<<car1.color<<endl;

}