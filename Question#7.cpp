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

// for (vector<int>& op : ops) {
// }
// can be written as 

// for (int i = 0; i < ops.size(); i++) {
//     vector<int>& op = ops[i];
//     // Rest of the code...
// }

