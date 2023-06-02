#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Student{
    public:
    string name;
    int cls;
    string sec;
    int id;
    int m_marks;
    int e_marks;
};
bool cmp(Student a,Student b)
{
    if(a.m_marks+a.e_marks>b.m_marks+b.e_marks)
     return true;
     else if(a.m_marks+a.e_marks==b.m_marks+b.e_marks){
        if(a.id<b.id){
            return true;
        }
        else return false;
     }
     else return false;
}
int main()
{
fast;
int n;
cin>>n;
Student a[n];
for(ll i=0;i<n;i++)
{
    cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].id>>a[i].m_marks>>a[i].e_marks;
    
}
sort(a,a+n,cmp);
for(ll i=0;i<n;i++){
    cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<" "<<a[i].m_marks<<" "<<a[i].e_marks<<endl;
}
get_out;
}