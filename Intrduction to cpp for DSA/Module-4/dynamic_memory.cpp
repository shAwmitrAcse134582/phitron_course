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
   char name[100]="shawmitra";
 student *shawmitra =  new student(name,33,24,'a');
 cout<<shawmitra->name<<endl;
 delete shawmitra;
 cout<<shawmitra->name<<endl;
get_out;
}