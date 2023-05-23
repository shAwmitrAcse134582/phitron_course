#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class student{
    public:
    char name[100];
    int roll;
    char section;
    int cls;
};
int main()
{
fast;

student s;
s.roll=1;
s.cls=9;
s.section='A';
char nm[100]="shawmitra";
strcpy(s.name,nm);
 cout<<s.roll<<endl;
get_out;
}