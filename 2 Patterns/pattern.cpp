#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=0; i<n;i++){
        for(int y=0; y<n; y++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void print2(int n){
    for(int i=0; i<n; i++){
        for(int y=0;y<=i;y++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int y=1; y<=i;y++){
            cout<<y;
        }
        cout<<"\n";
    }
}
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int y=1;y<=i;y++){
            cout<<i;
        }
        cout<<endl;
    }
}
void print5(int n){
    for(int i=0;i<n;i++){
        for(int y=0;y<n-i;y++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print6(int n){
    for(int i=0;i<n;i++){
        for(int y=1;y<=n-i;y++){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}
void print7(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i*2-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print7(n);
    return 0;
}