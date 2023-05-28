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
    Student(string name,int age){
       this->name=name;
       this->age=age;
    }
};
int main()
{
fast;
Student shawmitra("dwip",22);
cout<<shawmitra.name<<" "<<shawmitra.age<<endl;

get_out;
}