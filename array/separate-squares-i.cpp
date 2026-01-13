class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double low = 2e9, high = 0;
        double totalArea = 0;
        
        for (auto& s : squares) {
            double x = s[0], y = s[1], l = s[2];
            low = min(low, y);
            high = max(high, y + l);
            totalArea += l * l;
        }

        for (int i = 0; i < 100; i++) {
            double mid = low + (high - low) / 2;
            double areaBelow = 0;
            
            for (auto& s : squares) {
                double y = s[1], l = s[2];
                if (y < mid) {
                    double heightBelow = min((double)l, mid - y);
                    areaBelow += l * heightBelow;
                }
            }
            
            if (areaBelow < totalArea / 2.0) {
                low = mid;
            } else {
                high = mid;
            }
        }      
        return low;
    }
};