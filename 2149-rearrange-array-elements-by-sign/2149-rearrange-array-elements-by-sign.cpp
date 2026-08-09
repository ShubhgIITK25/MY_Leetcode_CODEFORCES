class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int even = 0, odd = 1;
        vector<int> arr(n);

        for(int x : nums) {
            if(x > 0) {
                arr[even] = x;
                even += 2;
            } else {
                arr[odd] = x;
                odd += 2;
            }
        }

        return arr;
    }
};