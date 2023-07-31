class Solution {
public:
    int search(vector<int>&v, int x) {
        int l=0;
        int r=v.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(v[m]==x){
                return m;
            }
            else if(v[m]<x){
                l=m+1;

            }
            else{
                r=m-1;
            }
        }
        return -1;
    }
};