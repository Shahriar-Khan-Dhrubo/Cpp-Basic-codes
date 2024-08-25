#include<iostream>
#include<array>
using namespace std;
int main()
{
    std::array<int,5> my_array1={1,3,5,67,8};
    std::array<int,5> my_array2 {3,5,7,9,29};
    for(auto i=0;i<my_array1.size();i++)
        cout<<my_array1[i]<<" ";
    cout<<endl;
    for(auto i=0;i<my_array2.size();i++)
        cout<<my_array2[i]<<" ";
    return 0;
}
