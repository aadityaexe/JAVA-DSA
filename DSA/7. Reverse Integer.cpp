class Solution
{
public:
  int reverse(int x)
  {
    int newNum = 0, y = 0, temp = x;
    while (temp != 0)
    {
      y = temp % 10;
      if (newNum > INT_MAX / 10 || (newNum == INT_MAX / 10 && y > 7))
        return 0;
      if (newNum < INT_MIN / 10 || (newNum == INT_MIN / 10 && y < -8))
        return 0;
      newNum = newNum * 10 + y;
      temp = temp / 10;
    }
    return newNum;
  }
};
