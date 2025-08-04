class Solution
{
public:
  bool containsNearbyDuplicate(vector<int> &nums, int k)
  {
    int end = nums.size();

    for (int i = 0; i < end - 1; i++)
    {
      for (int j = i + 1; j <= i + k && j < end; j++)
      {
        if (nums[i] == nums[j])
        {
          return true;
        }
      }
    }

    return false;
  }
};
