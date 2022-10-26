#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int a[n];
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // sort(a,a+n);      Output = 2 4 5 7 8 25
    // sort(a+2,a+n);    Output = 4 5 2 7 8 25
    // sort(a,a+3);      Output = 2 4 5 25 7 8
    sort(v.begin() + 2, v.end()); // Time complexity = O(n*log(n))
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}