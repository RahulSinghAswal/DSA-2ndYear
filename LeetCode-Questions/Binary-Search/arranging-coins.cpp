class Solution {
public:
    int arrangeCoins(int n) {
        int low = 0, high = n;
        long mid, res;

        while (low <= high) {
            mid = low + (high - low)/2;
            res = mid*(mid + 1)/2;

            if (res == n) {
                return mid;
            }

            else if (res > n) {
                high = mid - 1;
            }

            else {
                low = mid + 1;
            }
        }
        return high;
        
    }
};
