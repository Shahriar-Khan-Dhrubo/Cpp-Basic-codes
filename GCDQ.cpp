#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 10];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int forward[n + 10], backward[n + 10];
        forward[0] = backward[n + 1] = 0;
        for (int i = 1; i <= n; i++)
            forward[i] = gcd(forward[i - 1], a[i]);
        for (int i = n; i >= 1; i--)
            backward[i] = gcd(backward[i + 1], a[i]);
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            cout<<gcd(forward[l-1],backward[r+1])<<endl;
        }
    }
}