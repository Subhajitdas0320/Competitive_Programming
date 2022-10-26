#include<bits/stdc++.h>
using namespace std;

void print(set<string>&s){
    for(string value : s){
        cout<<value<<endl;
    }
   /*  for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<endl;
    } */
}

int main()
{
    set<string>s;
    s.insert("abd");  //--
    s.insert("zsdf"); //  |
    s.insert("zsdf"); //  |--> Time complexity = O(log(n))
    s.insert("bcd");  //  |
    s.insert("bcd");  //--
    auto it = s.find("abd"); // Time complexity = O(log(n))
    if(it != s.end()){
       //cout<<*it;
       s.erase(it);
          //or
       s.erase("bcd");
    }
    print(s);
    return 0;
}