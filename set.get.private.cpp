#include<iostream>
#include<string>
using namespace std;
class student
{
public:
    void setter_age(int age)
    {
        this->age=age;
    }
    int getter_age()
    {
        return age;
    }
    void setter_name(string name)
    {
        this->name=name;
    }
    string getter_name()
    {
        return name;
    }
    void print()
    {
        cout<< "Name : " << getter_name() <<endl;
        cout << "Age : " << getter_age() << endl;
    }
private:
    string name;
    int age;
};
int main()
{
    student s1;
    s1.setter_name("SHAHRIAR KHAN DHRUBO");
    s1.setter_age(27);
    s1.print();
    return 0;
}
