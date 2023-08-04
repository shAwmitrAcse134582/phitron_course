#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void marge(ll a[],int l,int r,int mid ){
        int ls=mid-l+1;
        int c[ls+1];
        int rs=r-mid;
        int d[rs+1];

        for(int i=l,j=0; i<=mid; i++,j++){
            c[j] = a[i];
        }
		

	for(int i=mid+1,j=0; i<=r; i++,j++){
            d[j] = a[i];
    }
     c[ls] = INT_MIN;
	    d[rs] = INT_MIN;

         int lp=0,rp=0;
        for(int i=l; i<=r; i++)
	{
		if(c[lp] >= d[rp])
		{
			a[i] = c[lp];
			lp++;
		}
		else
		{
			a[i] = d[rp];
			rp++;
		}
	}

		

}
void marge_sort(ll a[],int l,int r){
    if(l==r){
        return;
    }
    int mid=(l+r)/2;
    marge_sort(a,l,mid);
    marge_sort(a,mid+1,r);
    marge(a,l,r,mid);

}
int main()
{
fast;
ll n;
cin>>n;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

marge_sort(a,0,n-1);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
get_out;
}