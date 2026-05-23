#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t){
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       if(s==t) return true;
       else return false; 
    }

int main(){
    string t="hello";
    string s = "ehllo";
    cout<<isAnagram(s,t);
}