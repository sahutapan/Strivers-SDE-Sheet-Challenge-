#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans;
  vector<long long int> temp;
  long long int x=1;
  for(long long int i=1;i<=n;i++)
  {
    temp.clear();
    x=1;
    temp.push_back(x);
    for(long long int j=1;j<i;j++)
    {
      x=x*(i-j);
      x=x/j;
      temp.push_back(x);
    }
    ans.push_back(temp);
  }
  return ans;
}
