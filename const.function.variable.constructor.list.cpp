#include<iostream>
#include<iomanip>
using namespace std;
class fees
{
public:
    const int tuition;
    const int exam;
    int bus;
    fees(int x,int y,int z)
    : tuition(x),exam(y)
    {
        bus=z;
    }
    ~fees()
    {

    }
    void print()
    {
        cout<<tuition<<"\t"<<exam<<"\t"<<bus<<endl;
    }
};
int main()
{
    fees student1(12000,5000,2000),student2(10000,3000,1000);
    student1.print();
    student2.print();
    return 0;
}
