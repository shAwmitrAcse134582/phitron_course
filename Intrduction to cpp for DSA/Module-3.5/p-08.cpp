#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Cricketer{
    public:
    int jersy_no;
    char country[100];
};
int main()
{
fast;

  Cricketer *dhoni =new Cricketer;
  dhoni->jersy_no=7;
  char c[100]="India";
  strcpy(dhoni->country,c);
  // cout<<dhoni->jersy_no<<endl;
  // cout<<dhoni->country<<endl;

  Cricketer *kohli=new Cricketer;
  *kohli=*dhoni;
  delete dhoni;

    cout<<kohli->jersy_no<<endl;
       cout<<kohli->country<<endl;

get_out;
}