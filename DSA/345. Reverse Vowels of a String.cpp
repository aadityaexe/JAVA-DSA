class Solution
{
public:
  string reverseVowels(string s)
  {
    int start = 0;
    int end = s.length() - 1;
    while (start <= end)
    {
      if (!isvowel(s[start]))
      {
        start++;
      }
      else if (!isvowel(s[end]))
      {
        end--;
      }
      else
      {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
      }
    }
    return s;
  }

public:
  static bool isvowel(char ch)
  {
    char c = tolower(ch);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
      return true;
    }
    return false;
  }
};
