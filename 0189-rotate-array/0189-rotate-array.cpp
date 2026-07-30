class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(), nums.begin()+n-k);
        reverse(nums.begin()+n-k, nums.end());
        reverse(nums.begin(), nums.end());

    }
};

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//       int n = nums.size();
//       k = k % n;
//       for (int i = 0; i < k; i++){
//         int temp = nums[n-1];
//         for(int j = n-1; j>0; j--){
//             nums[j] = nums[j-1];
//         }
//         nums[0] = temp;
//       }
//     }
// };

