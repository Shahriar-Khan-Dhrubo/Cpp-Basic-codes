#include<iostream>
#include<string>
using namespace std;
int main()
{
    char name[30];
    int age;
    float salary;
    cout<< "Enter Your Name : ";
    cin.getline(name,30);
    cout<< "Enter Your Age : ";
    cin>>age;
    cout<< "Enter Your Salary : ";
    cin>>salary;
    cout<< "Name : "<<name << "\nAge : "<<age << "\nSalary : "<<salary;
    return 0;
}
