#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
 class Player{
      public:
      char name[100];
      int roll;
      int cls;
      char section;

      Player(char n[100],int r,int c,char s){
        strcpy(name,n);
        roll=r;
        cls=c;
        section=s;
      }
 };

 Player fun(){
    char name[100]="shawmitra";
   Player shawmitra(name,13,14,'A');
   return shawmitra;
 }
int main()
{
fast;
    
    Player shawmitra=fun();

    cout<<shawmitra.name<<endl;
    cout<<shawmitra.roll<<endl;
   

get_out;
}