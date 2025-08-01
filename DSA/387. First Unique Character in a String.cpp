class Solution
{
public:
  int firstUniqChar(string s)
  {
    unordered_map<char, int> out;
    for (auto x : s)
    {
      out[x]++;
    }
    int index = -1;
    for (int i = 0; i < s.size(); i++)
    {
      if (out[s[i]] == 1)
      {
        index = i;
        break;
      }
    }
    return index;
  }
};
