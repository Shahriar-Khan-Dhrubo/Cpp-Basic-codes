#include<iostream>
#include<set>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
class student
{
public:
    int age;
    string name;
    bool operator<(const student &e)const
    {
        return age<e.age;
    }
};
int main()
{
    std::multiset<int> multi;
    for(auto i=0;i<5;i++)
       {
           int value;
           cin>>value;
           multi.insert(value);
       }
    for(const auto& e:multi)
        cout<<e<<" ";
    cout<<endl;
    int count=multi.count(3);
    cout<<count<<endl;
    std::multiset<student> Class { {27,"MSK DHRUBO"},{25,"AA AVA"} };
    for(const auto& e:Class)
        cout<<setw(30)<<left<<e.name<<setw(15)<<e.age<<endl;
    return 0;
}
