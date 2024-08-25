#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    std::list<int> list1 {1,2,3,7,8};
    std::list<int> list2 {4,5,6};
    auto it=std::next(list1.begin(),3);
    //list1.splice(it,list2);
    list1.insert(it,4);
    for(auto elm : list1)
        cout<<elm<<" ";
    cout<<endl;
    for(auto elm : list2)
        cout<<elm<<" ";
    cout<<endl;
    return 0;
}
