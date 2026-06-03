#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int x){
    int sum=0;
    int n = x;
    while (n>0){
        sum += pow(n%10,3);
        n=n/10;
        cout<<sum<<endl;
    }
    if(sum==x) return true;
    return false;
}

int main(){
    int x = 371;
    cout<<isArmstrong(x);
}