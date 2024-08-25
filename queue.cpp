#include<iostream>
#include<queue> //FIFO first in first out
using namespace std;
int main()
{
    std::queue<int> que;
    que.push(14);
    que.push(3);
    que.push(1);
    que.push(7);

    cout<<que.front()<<" "<<que.back()<<endl;
    while(!que.empty())
    {
        cout<<que.front()<<" ";
        que.pop();
    }
    return 0;
}
