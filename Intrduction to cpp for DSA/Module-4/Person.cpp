#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Person{
    public:
    char name[100];
    float height;
    int age;
    Person(char *n,float h,int a){
        strcpy(name,n);
        height=h;
        age=a;
    }

};
int main()
{
fast;
Person *shawmitra=new Person("shawmitra",5.8,51);
Person *ashik=new Person("ashik",5.8,23);

int mx=max(shawmitra->age,ashik->age);
if(mx==shawmitra->age)
cout<<shawmitra->name<<endl;
else
cout<<ashik->name<<endl;

get_out;
}