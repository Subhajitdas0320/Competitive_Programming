#include <bits/stdc++.h>
using namespace std;

/* bool should_I_swap(int a, int b)
{
    if (a < b)
    {
        return true;
    }
    return false;
}
 */
bool cmp(pair<int, int> a, pair<int, int> b) // comparator function
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    /*   for (int i = 0; i < n; i++)
      {
          for (int j = i + 1; j < n; j++)
          {
              if (should_I_swap(v[i], v[j]))
              {
                  swap(v[i], v[j]);
              }
          }
      } */
    //sort(v.begin(), v.end(), cmp);
    sort(v.begin(), v.end(), greater<pair<int,int>>()); //Using inbuilt comparator for descending order
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
    return 0;
}