#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    while(1)
    {
        int x;
        int random_num=1+rand()%5;
        cout<< "Enter any number from 1 to 5 = ";
        cin>> x;
        if(x==0)
        {
            cout<<"End Game.\n";
            break;
        }
        if(x==random_num)
            cout<< "You won!!!\n";
        else
            cout<< "You lost.Better luck next time!!!\n";
        cout<<endl;
    }
    return 0;
}
