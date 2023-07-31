class Solution {
public:
    int countNegatives(vector<vector<int>>& v) {
         int n=v.size();
         int m=v[0].size();
         int cnt=0;
         for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                    if(v[i][j]<0){
                         cnt++;
                    }
             }
         }
         return cnt;
    }
};