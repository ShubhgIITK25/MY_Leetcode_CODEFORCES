class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0;
        int r = 0;
        while(r<nums.size()){
            if(nums[l] == 0 && nums[r]!=0){
                swap(nums[l], nums[r]);
                l++;
                r++;
            }else if((nums[l]!=0 && nums[r]!=0)){
                l++;
                r++;
            }else if(nums[l]==0 && nums[r]==0){
                r++;
            }
        }
    }
};