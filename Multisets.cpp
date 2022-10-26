#include<bits/stdc++.h>
using namespace std;

void print(multiset<string>&s){
    for(string value : s){
        cout<<value<<endl;
    }
   /*  for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<endl;
    } */
}

int main()
{
    multiset<string>s;
    s.insert("abd");  //--
    s.insert("zsdf"); //  |
    s.insert("zsdf"); //  |--> Time complexity = O(log(n))
    s.insert("bcd");  //  |
    s.insert("bcd");  //--
     auto it = s.find("bcd"); // Time complexity = O(log(n))
    if(it != s.end()){
        //s.erase(it); //only deletes one value the iterator is pointing to.
      /* s.erase(it);
          //or*/
       s.erase("bcd"); //deletes all the values in the multiset
    }
    print(s);
    return 0;
}