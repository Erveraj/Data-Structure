#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {
    int age;
    string name;
  }person;

    struct {
    int age;
    string name;
  }person1;

  person.age = 19;
  person.name = "Krishdeep Singh";
  person1.age = 20;
  person1.name = "Shivam Singh";

  cout << "Age of Person: " << person.age << "\n";
  cout << "Name of Person: " << person.name << "\n";
  cout << "Age of Person1: " << person1.age << "\n";
  cout << "Name of Person1: " << person1.name << "\n";
  return 0;
}