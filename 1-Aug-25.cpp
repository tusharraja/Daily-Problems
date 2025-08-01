class Solution
{
public:
  vector<vector<int>> generate(int n)
  {
    vector<vector<int>> ans;
    vector<int> temp;
    temp.push_back(1);
    ans.push_back(temp);
    if (n == 1)
    {
      return ans;
    }

    for (int i = 1; i < n; i++)
    {
      vector<int> ds;

      int size = temp.size();
      ds.push_back(1);

      for (int k = 0; k + 1 < size; k++)
      {
        ds.push_back(temp[k] + temp[k + 1]);
      }
      ds.push_back(1);
      ans.push_back(ds);
      temp = ds;
    }
    return ans;
  }
};