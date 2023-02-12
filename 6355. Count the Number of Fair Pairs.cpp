class Solution {
public:
    long long countFairPairs(vector<int> &v, int lower, int upper)
{
  sort(v.begin(), v.end());
  int n = v.size();
  long long ct = 0;
  for (int i = 0; i < n; i++)
  {
    int j = lower_bound(v.begin() + i + 1, v.end(), lower - v[i]) - v.begin();
    int k = upper_bound(v.begin() + i + 1, v.end(), upper - v[i]) - v.begin() - 1;
    if (j <= k)
    {
      ct += k - j + 1;
    }
  }
  return ct;
}//b
};
