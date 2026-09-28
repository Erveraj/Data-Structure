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
    Car car1, car2, car3, car4;           //We are create four object for Class Car.

    // Access attributes and set values
    car1.name = "THAR";                car2.name = "BMW";           car3.name = "MERCEDES";            car4.name = "TOYOTA";
    car1.model = "ROXX 4X4";           car2.model = "BM4";          car3.model = "MERC 4X4";           car4.model = "TOYOTA 4X4";
    car1.year = 2026;                  car2.year = 2024;            car3.year = 2025;                  car4.year = 2023;
    car1.price = 239999.00;            car2.price = 890000.00;      car3.price = 1200000.00;           car4.price = 450000.00;
    car1.color = "Black";              car2.color = "Yellow";       car3.color = "White";              car4.color = "Red";

    cout <<"Name: "<<car1.name<<"\t\t"<<        "Name: "<<car2.name<<"\t\t"<<        "Name: "<<car3.name<<"\t\t"<<        "Name: "<<car4.name<<endl;
    cout <<"Model: "<<car1.model<<"\t\t"<<      "Model: "<<car2.model<<"\t\t"<<      "Model: "<<car3.model<<"\t\t"<<      "Model: "<<car4.model<<endl;
    cout <<"Year: "<<car1.year<<"\t\t"<<        "Year: "<<car2.year<<"\t\t"<<        "Year: "<<car3.year<<"\t\t"<<        "Year: "<<car4.year<<endl;
    cout <<"Price: "<<car1.price<<"\t\t"<<      "Price: "<<car2.price<<"\t\t"<<      "Price: "<<car3.price<<"\t\t"<<      "Price: "<<car4.price<<endl;
    cout <<"Color: "<<car1.color<<"\t\t"<<      "Color: "<<car2.color<<"\t\t"<<      "Color: "<<car3.color<<"\t\t"<<      "Color: "<<car4.color<<endl;
}