#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fo(i,n) for(i=n;i>=0;i--)
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define f first
#define s second

typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve()
{
    int i,j,k,x,y,z,a,c,cnt,cnt1,cnt2,sum=0,ans=0;
    string S;
    cin>>S;
    stack<int> op;
    fo(i,S.size()-1)
    {
        if(S[i]>='0' && S[i]<='9')
           op.push(S[i]-'0');
        else
        {
            int op2=op.top();
            op.pop();
            int op1=op.top();
            op.pop();
            switch(S[i])
            {
            case '+' :
                op.push(op1+op2);
                break;
            case '-' :
                op.push(op1-op2);
                break;
            case '*' :
                op.push(op1*op2);
                break;
            case '/' :
                op.push(op1/op2);
                break;
            case '^' :
                op.push(pow(op1,op2));
                break;
            }
        }
    }
    cout<<op.top()<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
