class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minRow = m, minCol = n;

        // Find the minimum row and column from the operations
        for (vector<int>& op : ops) {
            minRow = min(minRow, op[0]);
            minCol = min(minCol, op[1]);
        }

        return minRow * minCol; // Return the maximum count
    }
};
