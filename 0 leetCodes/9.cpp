#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
       int reversed = 0;
       int n=x;
       if(x<0){
        return false;
       }
       while( n>0){
        if(reversed>INT_MAX/10) return 0;
        if(reversed==INT_MAX/10 && n%10>7) return 0;
        reversed = reversed*10 + n%10;
        n=n/10;
       } 
       if (x == reversed) return true;
       else return false;
    }

int main(){
    int n = -1222134234234321;
    cout<<isPalindrome(n);
}