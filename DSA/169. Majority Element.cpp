class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {

    unordered_map<int, int> x;
    int result, high = 0;
    for (auto m : nums)
    {
      x[m]++;
    }
    for (auto z : x)
    {
      if (z.second > high)
      {
        high = z.second;
        result = z.first;
      }
    }
    return result;
  }
};