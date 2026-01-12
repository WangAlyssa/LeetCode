class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> product(n, 1);

        int left = 1;
        for (int i = 0; i < n; i++) {
            product[i] = left;
            left *= nums[i];
        }

        int right = 1;
        for (int j = n - 1; j >= 0; j--) {
            product[j] *= right;
            right *= nums[j];
        }

        return product;
    }
};