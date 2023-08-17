#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

const int N=1e5+7;
int arr[N];
void merge(int l,int r,int mid){
    int ls=mid-l+1;
    int a[ls+1];

    int rs=r-mid;
    int b[rs+1];

    for(int i=l,j=0; i<=mid; i++,j++)
		a[j] = arr[i];

	for(int i=mid+1,j=0; i<=r; i++,j++)
		b[j] = arr[i];

        a[ls] = INT_MAX;
	    b[rs] = INT_MAX;


       int lp=0,rp=0;
        for(int i=l; i<=r; i++)
	{
		if(a[lp] <= b[rp])
		{
			arr[i] = a[lp];
			lp++;
		}
		else
		{
			arr[i] = b[rp];
			rp++;
		}
	}
}
void merge_sort(int l,int r){
    if(l==r){
        return;
    }
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
    cin>>arr[i];
}

merge_sort(0,n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
get_out;
}