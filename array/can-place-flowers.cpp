class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();

        if (size == 1) {
            if (flowerbed[0] == 0) count++;
            return count >= n;
        }

        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            flowerbed[0] = 1;
            count++;
        }

        for (int i = 1; i < size - 1; i++) {
            if (flowerbed[i-1] == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0) {
                flowerbed[i] = 1;
                count++;
            }
        }

        if (flowerbed[size - 1] == 0 && flowerbed[size - 2] == 0) {
            flowerbed[size - 1] = 1;
            count++;
        }

        return count >= n;
    }
};