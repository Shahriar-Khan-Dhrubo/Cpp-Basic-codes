#include<iostream>
#include<map>
using namespace std;
int main()
{
    std::multimap<char,int> multi;
    multi.insert(make_pair('a',1));
    multi.insert(make_pair('a',2));
    multi.insert(make_pair('a',3));
    multi.insert(make_pair('b',4));
    multi.insert(make_pair('c',5));

    for(const auto e:multi)
        cout<<e.first<< " " << e.second<< endl;//maximum time auto it is used ,cause it meaning iterator
    cout<<endl;
    auto range=multi.equal_range('a');
    for(auto e=range.first; e!=range.second; e++)
        cout<<e->first<<" "<<e->second<<endl;
    cout<<endl<<multi.count('a')<<endl<<endl;

    auto it=multi.find('a');
    while(it!=multi.end() && it->first=='a')
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    auto upper=multi.upper_bound('a');
    cout<<endl<<upper->first<<" "<<upper->second<<endl;

    auto lower=multi.lower_bound('a');
    cout<<endl<<lower->first<<" "<<lower->second<<endl;
    return 0;
}
