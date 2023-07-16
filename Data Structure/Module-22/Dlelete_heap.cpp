#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void insert_heap(vector<int>&v,int x){
     v.push_back(x);
    int cur_idx=v.size()-1;
    while(cur_idx!=0){
        int prnt_idx=(cur_idx-1)/2;
        if(v[prnt_idx]<v[cur_idx]){
            swap(v[prnt_idx],v[cur_idx]);
        }
        else{
            break;
        }
        cur_idx=prnt_idx;
    }
}
void delete_heap(vector<int>&v){
    v[0]=v[v.size()-1];
    v.pop_back();
    int cur=0;
    while(true){
        int left=cur*2+1;
        int right=cur*2+2;
        int last=v.size()-1;
        if(left<=last && right<=last){
            if(v[left]>=v[right] && v[left]>v[cur]){
          swap(v[left],v[cur]);
          cur=left;
         }
         else if(v[right]>=v[left] && v[right]>v[cur]){
               swap(v[right],v[cur]);
               cur=right;
         }
         else{
            break;
         }
        }
        else if(left<=last){
                  if(v[left]>v[cur]){
                    swap(v[left],v[cur]);
                    cur=left;
                  }
                  else{
                    break;
                  }
        }
        else if(right<=last){
             if(v[right]>v[cur]){
                swap(v[right],v[cur]);
                cur=right;
             }
             else{
                break;
             }
        }
        else{
            break;
        }
    }
}
int main()
{
fast;
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
  insert_heap(v,x);

}
delete_heap(v);
for(auto val:v){
    cout<<val<<" ";
}
get_out;
}