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
    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};
int main()
{
fast;
Node a(10);
Node b(20);
   a.next=&b;
  cout<<a.val<<endl;
  cout<<b.val<<endl;
  cout<<a.next->val<<endl;

get_out;
}