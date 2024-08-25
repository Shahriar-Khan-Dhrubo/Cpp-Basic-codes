#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string S;
    getline(cin,S);
    string words;
    for(int i=0;i<S.size();i++)
    {
        if(ispunct(S[i]))
        {
            S[i]=' ';
        }
    }
    for(int i=0;i<S.size();i++)
    {
        if(S[i]==' ')
        {
            if(!words.empty())
            {
                cout<<words<<endl;
                words.clear();
            }
        }
        else
        {
            words+=S[i];
        }
    }
    if(!words.empty()) cout<<words<<endl;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        solve();
    }
}