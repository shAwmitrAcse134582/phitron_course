class Solution {
public:
    vector<int> targetIndices(vector<int>& v, int t) {
        sort(v.begin(),v.end());
        int ans=0;

        vector<int>v2;
        for(int i=0;i<v.size();i++){
            if(v[i]==t){
            v2.push_back(i);
            ans++;
            }
        }
      return v2;
        
    }
};