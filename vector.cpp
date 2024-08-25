#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    std::vector<int> my_vector1;
    //my_vector1.reserve(5);//use my_vector.resize(5) for cin>>my_vector[i]
    my_vector1.resize(5);
    for(auto i=0; i<my_vector1.size(); i++)
    {
        //int a;
        //cin>>a;
        //my_vector1.push_back(a);
        cin>>my_vector1[i];
    }
    for(auto &element:my_vector1)
        cout<<element<<" ";
    cout<<endl;
    int count=std::count(my_vector1.begin(),my_vector1.end(),3);
    cout<<count<<endl;
    return 0;
}
