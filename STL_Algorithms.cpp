#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //vector<int> v(n);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    //int min = *min_element(v.begin() + 3, v.end());
    int min = *min_element(v, v+n);
    cout << min << endl;
    //int max = *max_element(v.begin(), v.end());
    int max = *max_element(v,v+n);
    cout << max << endl;
    //int sum = accumulate(v.begin(), v.end(), 0); // for finding sum
    int sum = accumulate(v, v+n, 0);
    cout << sum << endl;
    /* int ct = count(v.begin(), v.end(), 2); */ // To count the frequency of given element in the array
    int ct = count(v, v+n, 2);
    cout << ct << endl;
    // int element = *find(v.begin(),v.end(),2);
    //auto it = find(v.begin(), v.end(), 2);
    auto it = find(v, v+n, 10);
    if (it != v+n)
    {
        cout << *it << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    //reverse(v.begin()+2,v.end());
    reverse(v+2,v+n);
    for(auto val:v){
        cout<<val<<" ";
    }cout<<endl;
    string s = "abcdefghij";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}