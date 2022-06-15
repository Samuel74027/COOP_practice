#include <iostream>
using namespace std;

class Employee
{
private:
public:
    string Name;
    string Company;
    int Age;
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }

    void Introduce()
    {
        cout << "Hello my name is " << Name << endl;
    }
};

int main()
{
    Employee employee1 = Employee("Samuel", "Apple", 17);
    // employee1.name = "Samuel";
    // employee1.Age = 17;
    // employee1.Company = "Apple";
    cout << employee1.Name << endl;
    employee1.Introduce();

    // Employee employee2;
    // employee2.Name = "Bob";
    // employee2.Age = 50;
    // employee2.Company = "Broadcom";
    // employee2.Introduce();
}
