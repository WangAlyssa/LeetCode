class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> product(n, 1);

        for (int i = 0; i < n; i++) {
            int temp = nums[i];
            nums[i] = 1;

            int currentProduct = 1;
            for (int j = 0; j < n; j++) {
                currentProduct *= nums[j];
            }

            product[i] = currentProduct;
            nums[i] = temp;
        }

        return product;
    }
};