class Solution
{
public:
  vector<int> twoSum(vector<int> &numbers, int target)
  {
    int start = 0, end = numbers.size() - 1, sum = 0;
    while (start < end)
    {
      sum = numbers[start] + numbers[end];

      if (sum == target)
      {
        return {start + 1, end + 1};
      }
      else if (target > sum)
      {
        start++;
      }
      else
      {
        end--;
      }
    }
    return {0, 0};
  }
};