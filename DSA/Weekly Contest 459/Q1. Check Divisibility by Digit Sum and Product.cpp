class Solution
{
public:
  bool checkDivisibility(int n)
  {
    int sum = 0, product = 1, temp = n;
    while (temp != 0)
    {
      int digit = temp % 10;
      sum += digit;
      product *= digit;
      temp /= 10;
      if (product > n || product + sum > n)
        return false;
    }
    if ((sum + product) == 0)
      return false;
    return n % (sum + product) == 0;
  }
};
