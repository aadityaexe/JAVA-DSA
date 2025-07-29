class Solution
{
public:
  int mySqrt(int x)
  {
    int mid = 0, low = 1, high = x, ans = 0;
    if (x == 1)
      return 1;
    while (low <= high)
    {
      mid = low + (high - low) / 2;

      if ((long long)mid * mid <= x)
      {
        ans = mid;
        low = mid + 1;
      }
      else
        high = mid - 1;
    }

    return ans;
  }
};