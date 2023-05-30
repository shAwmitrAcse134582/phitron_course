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
int main()
{
fast;
Student a[3];
for(int i=0;i<3;i++){
    getline(cin,a[i].name);
    cin>>a[i].roll>>a[i].marks;
    cin.ignore();

}
   for(ll i=0;i<2;i++){
    for(ll j=i+1;j<3;j++){
        if(a[i].roll<a[j].roll){
            swap(a[i],a[j]);
        }
    }
   }

   for(int i=0;i<3;i++){
    cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<" "<<endl;
   }

get_out;
}