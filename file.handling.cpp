#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    ofstream file;
    file.open("New Students.txt",ios::out|ios::app);
    string name;
    int age;
    file<<setw(30)<<left<<"Name"<<setw(20)<<"Age"<<endl;
    for(int i=1;i<=5;i++)
    {
        cout<<"Enter student name : ";
        getline(cin,name);
        cout<<"Age : ";
        cin>>age;
        cin.ignore();
        file<<setw(30)<<left<<name<<setw(20)<<age<<endl;
    }
    file.close();
    return 0;
}
