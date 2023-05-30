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
cout<<(a[2].roll);
// for(int i=0;i<3;i++){
//     cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<" "<<endl;
// }


get_out;
}