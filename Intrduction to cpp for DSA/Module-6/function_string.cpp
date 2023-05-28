#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Student{
    public:
    string name;
    int age;
    int marks1;
    int marks2;
    Student(string nm,int ag,int m1,int m2){
        name=nm;
        age=ag;
        marks1=m1;
        marks2=m2;
    }
    void hello(){
        cout<<"hello"<<endl;
    }
    int total_marks(){
        return marks1+marks2;
    }

};
int main()
{
fast;
Student shawmitra("shawmitra",21,80,90);
cout<<shawmitra.name<<" "<<shawmitra.age<<endl;
shawmitra.hello();
cout<<shawmitra.total_marks()<<endl;
get_out;
}