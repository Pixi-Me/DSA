#include<bits/stdc++.h>
using namespace std;
// Parameterises
int sumOfN(int n, int i=1, int sum=0){
    if(i>n) return sum;
    sum += i;
    i++;
    return sumOfN(n, i, sum);
}



int main(){
    cout<<sumOfN(3);
}