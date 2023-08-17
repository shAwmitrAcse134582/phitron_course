class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>lv(m+1);
        vector<int>rv(n+1);
        for(int i=0,j=0;i<m;i++,j++){
            lv[j]=nums1[i];
        }

        for(int i=0,j=0;i<n;i++,j++){
            rv[j]=nums2[i];
        }
        // vector<int>v(n+m);
        lv[m]=INT_MAX;
        rv[n]=INT_MAX;
        int lp=0,rp=0;
        for(int i=0;i<n+m;i++){
            if(lv[lp]<rv[rp]){
                nums1[i]=lv[lp];
                lp++;
            }
            else{
                nums1[i]=rv[rp];
                rp++;
            }
        }
        
    }
};