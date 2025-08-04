class Solution
{
public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
  {
    vector<int> result;
    for (int i = 0; i < nums1.size(); i++)
    {
      for (int j = 0; j < nums2.size(); j++)
      {
        if (nums1[i] == nums2[j])
        {

          result.push_back(nums1[i]);
          break;
        }
      }
    }
    for (int k = 0; k < result.size(); k++)
    {
      for (int j = k + 1; j < result.size();)
      {
        if (result[k] == result[j])
        {
          result.erase(result.begin() + j);
        }
        else
        {
          j++;
        }
      }
    }

    return result;
  }
};