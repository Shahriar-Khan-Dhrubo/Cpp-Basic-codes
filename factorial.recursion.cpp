#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);

}
int main()
{
    int n;
    cout<< "Enter an integer number = ";
    cin>>n;
    int result=fact(n);
    cout<<"Factorial of "<< n <<" is = "<<result <<endl;
    return 0;
}
