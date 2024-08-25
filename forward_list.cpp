#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;
int main()
{
    std::forward_list<int> list1 {1,2,3,4};
    std::forward_list<int> list2 {5,6,7,8};

    auto it=std::next(list1.begin(),3);
    list1.splice_after(it,list2);
    /*for(auto it2=list2.begin();it2!=list2.end();it2++)
    {
        list1.insert_after(it,*it2);
        it++;
    }
    //it=std::next(list2.begin(),4);
    //list2.insert_after(it,12); */
    //list1.sort();
    //list2.sort();
    //list1.merge(list2);

    cout<<endl;
    //list1.remove_if([](int x){return x>=10;});
    for(auto elm : list1)
        cout<<elm<<" ";
    cout<<endl;
    for(auto elm : list2)
        cout<<elm<<" ";
    cout<<endl;

    return 0;
}
