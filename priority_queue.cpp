#include<iostream>
#include<queue>
using namespace std;
int main()
{
    std::priority_queue<int,std::vector<int>,std::less<>> pq;
    for(int elm : {3,6,9,13,1,2,37})
        pq.push(elm);
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    return 0;
}
