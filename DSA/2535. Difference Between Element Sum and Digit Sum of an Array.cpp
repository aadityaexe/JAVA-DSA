class Solution
{
public:
  int differenceOfSum(vector<int> &nums)
  {
    int sum = 0, digSum = 0, temp = 0, x;

    for (int i = 0; i < nums.size(); i++)
    {
      sum += nums[i];
    }
    for (int j = 0; j < nums.size(); j++)
    {
      if (nums[j] <= 9)
      {
        digSum += nums[j];
      }
      else
      {
        temp = nums[j];
        while (temp != 0)
        {
          x = temp % 10;
          digSum += x;
          temp = temp / 10;
        }
      }
    }

    return abs(sum - digSum);
  }
};