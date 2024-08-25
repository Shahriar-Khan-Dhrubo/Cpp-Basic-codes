#include<iostream>
using namespace std;
int main()
{
    try
    {
        int num1,num2;
        cout<< "Enter two number : ";
        cin>> num1>> num2;
        if(num2==0)
            throw -1;
        double result=(double)num1/num2;
        cout<<"Result : "<< result <<endl;
    }
    catch(int x) // using catch-all block is not a good practice
    {
        cout<<"Divide by zero is not possible\nBetter luck next time."<<endl;
    }
    return 0;
}
