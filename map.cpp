#include<iostream>
#include<map>
#include<string>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{
    std::map<string,int> my_map;
    my_map["MSK DHRUBO"]=27;
    my_map["AA AVA"]=25;
    for(const auto& pair:my_map)
        cout<<setw(30)<<left<<pair.first<<setw(10)<<pair.second<<endl;
    std::map<string,vector<int>> my_map2;
    my_map2["MSK DHRUBO"].resize(2);
    my_map2["AA AVA"].resize(2);
    for(auto& e:my_map2)
    {
        for(auto& el:e.second)
        {
            cin>>el;
        }
    }
    for(const auto e:my_map2)
    {
        cout<<e.first<<endl;
        for(const auto el:e.second)
            cout<<el<<" ";
        cout<<endl;
    }
    return 0;
}
