lass Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the array in ascending order
    int sum = 0;
    for (int i = 0; i < nums.size(); i += 2) {
        sum += nums[i]; // Add the minimum element of each pair to the sum
    }
    return sum;
    }
};
