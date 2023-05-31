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
int main()
{
fast;
int n;
cin>>n;
Student a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i].name;
    cin>>a[i].roll>>a[i].marks;
}
for(int i = n-1;i>=0;i--){
    cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
}
get_out;
}