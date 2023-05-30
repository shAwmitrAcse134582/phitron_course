#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Student
{
    public:
     string name;
     int roll;
     int marks;
};
bool cmp(Student a,Student b){
    if(a.roll>b.roll) 
    return true;
    else
    return false;

}
int main()
{
fast;
Student a[3];
for(int i=0;i<3;i++){
    getline(cin,a[i].name);
    cin>>a[i].roll>>a[i].marks;
    cin.ignore();

}
   sort(a,a+3,cmp);

   for(int i=0;i<3;i++)
   {
    cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<" "<<endl;
   }

get_out;
}