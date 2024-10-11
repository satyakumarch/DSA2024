#include<iostream>
using namespace std;
struct student
{
    /* data */
    int id;
    string name;
    int marks;
    int age;
};
int main(){
student s1;
s1.id;
s1.name;
s1.marks;
s1.age;
cout<<"Enter the id of the student :";
cin>>s1.id;
cout<<"Enter the name of the student :";
cin>>s1.name;
cout<<"Enter the mark of the student :";
cin>>s1.marks;
cout<<"Enter the age of the student :";
cin>>s1.age;
cout<<"the details of the student are :"<<endl;
cout<<"the id of the student :"<< s1.id<<endl;
cout<<"the name of the student :"<< s1.name<<endl;
cout<<"the mark of the student :"<< s1.marks<<endl;
cout<<"the age of the student :"<< s1.age<<endl;

}