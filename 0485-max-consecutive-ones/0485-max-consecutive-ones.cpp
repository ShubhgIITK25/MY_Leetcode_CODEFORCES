class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int count = 0;
        int n = nums.size();
        int i = 0;
        while(i < n){
            if(nums[i] == 1){ 
                count++;
                maxi = max(maxi,count); 
            }else{
                count = 0;
            }
            i++;
        }
        return maxi;
    }
};