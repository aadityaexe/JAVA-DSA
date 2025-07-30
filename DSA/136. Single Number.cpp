
// unorderd map

class Solution
{
public:
  int singleNumber(vector<int> &nums)
  {

    unordered_map<int, int> h;

    for (auto x : nums)
      h[x]++;

    for (auto z : h)
    {
      if (z.second == 1)
        return z.first;
    }
    return -1;
  }
};

// Using Bitwise XOR

class Solution
{
public:
  int singleNumber(vector<int> &nums)
  {
    int result = 0;
    for (int x : nums)
    {
      result ^= x;
    }
    return result;
  }
};
