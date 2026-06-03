#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n){
    int ans = 0;
    for(int i=2;i<n;i++){
        bool isPrime = true;
        for(int y=2;y*y<=i;y++){
            if(i%y==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime==true) ans++;
    }
    return ans;
}
int main(){
    int n=10;
    cout<<countPrimes(n);
}