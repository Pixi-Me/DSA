#include<bits/stdc++.h>
using namespace std;
// Parameterises
int sumOfN(int n, int i=1, int sum=0){
    if(i>n) return sum;
    sum += i;
    i++;
    return sumOfN(n, i, sum);
}

int sumOfNFunctionised(int n){
    if(n==0) return 0;
    return n + sumOfNFunctionised(n-1);
}

int main(){
    cout<<sumOfNFunctionised(3);
}