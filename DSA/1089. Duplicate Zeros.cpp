class Solution
{
public:
  void duplicateZeros(vector<int> &arr)
  {
    int x = arr.size();
    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] == 0)
      {
        arr.insert(arr.begin() + (i + 1), 0);
        arr.erase(arr.begin() + x);
        i++;
      }
    }
  }
};