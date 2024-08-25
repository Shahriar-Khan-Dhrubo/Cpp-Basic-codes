#include<iostream>
#include<stack>
using namespace std;
int main()
{
    std::stack<int> stk;
    stk.push(14);
    stk.push(7);
    stk.push(3);
    stk.push(23);
    stk.push(45);
    cout<<stk.top()<<endl;
    while(!stk.empty())
    {
        cout<<stk.top()<<endl;
        stk.pop();
    }
    return 0;
}
