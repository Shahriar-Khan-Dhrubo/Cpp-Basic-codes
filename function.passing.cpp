#include<iostream>
using namespace std;
int pointer(int *n) //passing by reference that changes the main value of the variable
{
    (*n)++;
}
int main()
{
    int x;
    cin>>x;
    cout<< "Before passing "<< x <<endl;
    pointer(&x);
    cout<< "After passing "<< x <<endl;
    return 0;
}
