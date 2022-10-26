#include<bits/stdc++.h>
using namespace std;
void print(map<string,string>&m){
    cout<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    map<string,string>m;
    /* m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"}); // Time complexity = O(log(n))
    m[6] = "g";
    m[5] = "cde"; //replaces the existing key with the new value */
    m["abcd"] = "abcd"; // Time complexity = O(s.size()*log(n))
   /*  map<int,string> :: iterator it = m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    } */
    auto it = m.find("abcd"); // Time complexity = O(log(n))
    if(it!=m.end()){
        m.erase(it); // Time complexity = O(log(n)) and it can't take m.end() as input.
    }
    m.clear();
    /* if(it == m.end()){
        cout<<"No Value";
    }
    else{
        cout<<it->first<<" "<<it->second;
    } */
    print(m);
    return 0;
}