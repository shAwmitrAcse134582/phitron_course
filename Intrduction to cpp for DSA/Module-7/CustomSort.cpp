#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class CustomSort{
    public:
    char c;
    int cnt;
};
bool cmp(CustomSort a,CustomSort b)
{
    if(a.cnt>b.cnt)
    return true;
    else 
    return false;
}
int main()
{
fast;
int n;
cin>>n;
CustomSort frq[26];
for(int i=0;i<26;i++){
    frq[i].c=(i + 'a');
    frq[i].cnt=0;
}
for(int i=0;i<n;i++)
{
    char c;
    cin>>c;
    frq[c-'a'].cnt++;
}

sort(frq,frq+26,cmp);

for(int i=0;i<26;i++){
    if(frq[i].cnt>0){
        for(int j=0;j<frq[i].cnt;j++){
              cout<<frq[i].c;
        }
    } 
}

get_out;
}