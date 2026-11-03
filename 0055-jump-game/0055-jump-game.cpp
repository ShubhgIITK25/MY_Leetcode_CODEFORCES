class Solution {
public:
    bool canJump(vector<int>& nums) {
        int position = 0;
        int n = nums.size();
        int maxreach = 0;
        while(position <= maxreach){
            maxreach = max(maxreach, position + nums[position]);
            if(position >= n-1) return true;
            position++;
        }
        return false;
    }
};