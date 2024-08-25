#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
int fact(int n)
{
    if(n==0 || n==1) return 1;
    else return n*fact(n-1);
}
int main()
{
    int a,b;
    cin >> a >> b;
    int GCD=gcd(a,b);
    cout << "GCD = " << GCD <<endl;

    int FACT_A=fact(a);
    int FACT_B=fact(b);

    cout << "Factorial of A = " << FACT_A << endl;
    cout << "Factorial of B = " << FACT_B << endl;

    int permutation=fact(a)/fact(a-b);
    int combination=fact(a)/(fact(b)*fact(a-b));

    cout << a << "P" << b <<" = "<< permutation << endl;
    cout << a << "C" << b <<" = "<< combination << endl;
    return 0;
}
