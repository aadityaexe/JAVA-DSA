class Solution
{
public:
  string toLowerCase(string s)
  {
    for (int i = 0; i < s.size(); i++)
    {
      int c = s[i];
      s[i] = tolower(c);
    }

    return s;
  }
};