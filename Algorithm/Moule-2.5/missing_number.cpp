class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int x=nums.size();
       int sum1=(x*(x+1))/2;
       int sum2=0;
       for(int i=0;i<x;i++){
              sum2+=nums[i];
       }
        
    return sum1-sum2;
 
    }   
};