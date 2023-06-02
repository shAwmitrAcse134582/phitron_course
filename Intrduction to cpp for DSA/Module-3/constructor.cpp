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
      int cls;
      char section;

      student(char n[100],int r,int c,char s){
        strcpy(name,n);
        roll=r;
        cls=c;
        section=s;
      }


 };

int main()
{
fast;
    student shawmitra("Shawmitra",33,14,'A');
    student ashik("ashik",32,13,'B');
    cout<<shawmitra.name<<endl;
    cout<<ashik.name<<endl;
    

get_out;
}