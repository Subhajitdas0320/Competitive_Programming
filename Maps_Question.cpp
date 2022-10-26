/* Given N strings, print unique strings in lexiographical order with frequency.
N <= 10^5
|S|<=100 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}