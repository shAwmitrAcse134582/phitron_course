#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Node{
    public:
    int val;
     Node *next;
};
int main()
{
fast;
  Node a,b;
  a.val=10;
  b.val=20;
  a.next=&b;
  b.next=NULL;

  cout<<a.val<<endl;
  cout<<b.val<<endl;
  cout<<a.next->val<<endl;

get_out;
}