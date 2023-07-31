class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0,neg=0;
        for(auto val:nums){
            if(val>0){
                pos++;
            }
            else if(val<0){
                neg++;
            }
        }
        return max(pos,neg);
    }
};