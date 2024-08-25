#include<iostream>
#include<set>
#include<string>
#include<functional>
using namespace std;
class person
{
public:
    int age;
    string name;
    bool operator<(const person &e)const
    {
        return age>e.age;
    }
};
int main()
{
    std::set<int,std::greater<>> my_set {2,4,6,2,2,1,5,3,5,3};
    for(auto& element:my_set)
        cout<<element<<" ";
    cout<<endl;
    my_set.insert(7);
    my_set.erase(7);
    for(auto& element:my_set)
        cout<<element<<" ";
    cout<<endl;
    if(my_set.count(7)>0)
        cout<<"7 is present"<<endl;
    else
        cout<< "Not present."<<endl;
    cout<<*my_set.begin()<<endl;
    cout<<*my_set.rbegin()<<endl;
    return 0;
}
/*{
    std::set<person> census { {27,"MSK DHRUBO"},{25,"AA AVA"} };
    for(const auto& e:census)
    {
        cout<<e.name<<" "<<e.age;
        cout<<endl;
    }
    return 0;
}*/
