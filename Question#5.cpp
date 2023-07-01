class Solution {
public:
    int arrangeCoins(int n) {
    long left = 1, right = n;
    while (left <= right) {
        long mid = left + (right - left) / 2;
        long totalCoins = mid * (mid + 1) / 2;
        
        if (totalCoins == n)
            return mid;
        else if (totalCoins > n)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return right; // When left > right, the right will contain the largest complete row
    }
};
