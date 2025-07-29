class Solution
{
public:
  double average(vector<int> &salary)
  {
    double total = 0, count = 0;
    sort(salary.begin(), salary.end());

    for (int i = 1; i < salary.size() - 1; i++)
    {
      total += salary[i];
      count++;
    }

    return total / count;
  }
};