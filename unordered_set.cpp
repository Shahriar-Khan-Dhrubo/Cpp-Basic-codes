#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    std::unordered_set<int> uset {2,5,2,34,5,34,4};

    for(auto elm : uset)
        cout<<elm<<" ";
    cout<<endl;

    uset.insert(13);

    if(uset.find(11)!=uset.end())
        cout<<"Found\n";
    else
        cout<<"Not Found\n";
    for(auto elm : uset)
        cout<<elm<<" ";
    cout<<endl;
    return 0;
}
