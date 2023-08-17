#include <bits/stdc++.h> 
using namespace std;
void merge(vector<int>&v,int l,int r,int mid){
    int ls=mid-l+1;
    vector<int>lv(ls+1);

    int rs=r-mid;
    vector<int>rv(rs+1);

    for(int i=l,j=0;i<=mid;i++,j++){
        lv[j]=v[i];
    }

    for(int i=mid+1,j=0;i<=r;i++,j++){
        rv[j]=v[i];
    }
    lv[ls]=INT_MAX;
    rv[rs]=INT_MAX;
    int lp=0,rp=0;

    for(int i=l;i<=r;i++){
        if(lv[lp]<rv[rp]){
            v[i]=lv[lp];
            lp++;
        }
        else{
            v[i]=rv[rp];
            rp++;

        }
    }
    
}

void merge_sort(vector<int>&v,int l,int r){
    if(l==r){
        return;
    }
    int mid=(l+r)/2;
    merge_sort(v,l,mid);
    merge_sort(v,mid+1,r);
    merge(v,l,r,mid);

}
int findSecondLargest(int n, vector<int> &arr)
{
    merge_sort(arr,0,n-1);
    set<int,greater<int>>st;
       for(auto val:arr){
           st.insert(val);
       }
       if(st.size()==1)return -1;
       else{
          auto it=st.begin();
          it++;
          return *it;
       }
}