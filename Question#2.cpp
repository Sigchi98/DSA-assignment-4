class Solution {
public:
    vector<vector<int>> findDisjointArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> answer1, answer2;

    for (int num : nums1) {
        bool found = false;
        for (int num2 : nums2) {
            if (num == num2) {
                found = true;
                break;
            }
        }
        if (!found) {
            answer1.push_back(num);
        }
    }

    for (int num : nums2) {
        bool found = false;
        for (int num1 : nums1) {
            if (num == num1) {
                found = true;
                break;
            }
        }
        if (!found) {
            answer2.push_back(num);
        }
    }

    return {answer1, answer2};
  }
};
