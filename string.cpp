#include <iostream>
#include<string>
using namespace std;

int main() {
    string a="I love programming.";
    cout<<a<<endl;

    a.append(" Coding in C/C++.");
    cout<<a<<endl;

    a.erase(20,17);
    cout<<a<<endl;

    a.insert(2,"really ");
    cout<<a<<endl;

    a.replace(9,4,"like");
    cout<<a<<endl;

    int size=a.size();
    cout<<size<<endl;
    return 0;
}
