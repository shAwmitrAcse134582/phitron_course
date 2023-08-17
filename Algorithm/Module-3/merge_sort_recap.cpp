#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+3;
vector<ll>v(N);
void merge(int l,int r,int mid){
    int left_size=mid-l+1;
    int L[left_size+1];

    int right_size=r-mid;
    int R[right_size+1];

    for(int i=l,j=0;i<=mid; i++,j++){
           L[j]=v[i];
    }

    for(int i=mid+1,j=0;i<=r;i++,j++){
        R[j]=v[i];
    }
    L[left_size]=INT_MAX;
    R[right_size]=INT_MAX;

    int lp=0,rp=0;
    for(int i=l;i<=r;i++){
        if(L[lp]<=R[rp]){
            v[i]=L[lp];
            lp++;
        }
        else{
            v[i]=R[rp];
            rp++;
        }
    }
}
void merge_sort(int l,int r){
    if(l==r)return;
    int mid=(l+r)/2;
    merge_sort(l,mid);
    merge_sort(mid+1,r);
    merge(l,r,mid);

}
int main()
{
fast;
 ll n;
 cin>>n;
 for(ll i=0;i<n;i++){
    cin>>v[i];
 }

 merge_sort(0,n-1);

 for(ll i=0;i<n;i++){
    cout<<v[i]<<" ";
 }
get_out;
}