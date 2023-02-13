class Solution {
 public:
  int numIdenticalPairs(vector<int>& nums) {
    int ans = 0;
    vector<int> count(101);

    for (const int num : nums)
      ans = ans + count[num]++;

    return ans;
  }
};
