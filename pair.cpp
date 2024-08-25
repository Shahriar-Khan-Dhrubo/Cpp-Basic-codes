#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
bool f(const std::pair<int,int> &a,const std::pair<int,int> &b)
{
    return a.first<b.first;
}
int main()
{
    std::vector<std::pair<int,int>> a(3);
    //a.push_back(make_pair(2,7));
    //a.push_back(make_pair(9,13));
    //a.push_back(make_pair(1,7));

    for(auto &elm : a)
        cin>>elm.first>>elm.second;
    for(auto elm:a)
        cout<<elm.first<<" "<<elm.second<<endl;
    cout<<endl;
    sort(a.begin(),a.end(),f/*,[](const std::pair<int,int> &a,const std::pair<int,int> &b) {return a.first<b.first;});*/);
    for(auto elm:a)
        cout<<elm.first<<" "<<elm.second<<endl;
    return 0;
}
