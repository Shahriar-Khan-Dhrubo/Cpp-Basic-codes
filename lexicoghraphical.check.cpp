#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    if(a<b)
        cout<<"String one is lexicographically smaller."<<endl;
    else if(b<a)
        cout<<"String two is lexicographically smaller."<<endl;
    else
        cout<<"Strings are equal."<<endl;
    return 0;
}
