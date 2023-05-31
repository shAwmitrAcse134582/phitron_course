#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Student{
    public:
   string name;
   int roll;
   int marks;
};

bool cmp(Student a,Student b){
    if(a.marks>b.marks) return true;
    else if(a.marks==b.marks){
        if(a.marks<b.marks) return true;
        else return false;
    }
    else return false;
}
int main()
{
fast;
ll n;
cin>>n;
Student a[n];
for(int i=0;i<n;i++){
    cin>>a[i].name;
    cin>>a[i].roll>>a[i].marks;
    
}
//sort
sort(a,a+n,cmp);

for(int i=0;i<n;i++){
    cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
}

get_out;
}