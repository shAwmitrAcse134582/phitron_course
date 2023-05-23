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

 student fun(){
    char name[100]="shawmitra";
   student shawmitra(name,13,14,'A');
   return shawmitra;
 }
int main()
{
fast;
    
    student shawmitra=fun();

    // cout<<shawmitra.name<<endl;
    // cout<<shawmitra.roll<<endl;
    // cout<<shawmitra.cls<<endl;
    // cout<<shawmitra.section<<endl;

get_out;
}