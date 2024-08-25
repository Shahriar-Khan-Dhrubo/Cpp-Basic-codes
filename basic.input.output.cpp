#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int num1,num2;
    cout<< "Enter two numbers : ";
    cin>> num1>>num2;
    int sum,sub,multiplication,reminder;
    float division;
    sum=num1+num2;
    sub=num1-num2;
    multiplication=num1*num2;
    division=(float)num1/num2;
    reminder=num1%num2;
    cout<< setw(18)<<"Sum = "<<sum<<endl
        << setw(18) <<"Sub = "<< sub<<endl
        << setw(18)<<"Multiplication = "<< multiplication<<endl
        <<fixed<<setprecision(2) << setw(18)<< "Division = " << division<<endl
        << setw(18)<< "Reminder = "<< reminder;
    //char name1[30],name2[30];
    //float salary1,salary2;
    return 0;
}
