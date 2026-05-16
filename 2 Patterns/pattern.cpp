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
void print8(int n){
    for(int i=0;i<n;i++){
        for(int y=0;y<i;y++){
            cout<<" ";
        }
        for(int y=0;y<2*n-1-2*i;y++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print9(int n){
    for(int i=1;i<=n;i++){
        for(int y=0;y<n-i;y++){
            cout<<" ";
        }
        for(int y=0;y<2*i-1;y++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int y=0;y<i;y++){
            cout<<" ";
        }
        for(int y=0;y<2*n-2*i-1;y++){
            cout<<"*";
        }
        
        cout<<endl;
    }
}
void print10(int n){
    
    for(int i=0;i<n;i++){
        int x = i;
        for(int y=0;y<=i;y++){
            x%2==0 ? cout<<"1 " : cout<<"0 ";
            x++;
        }
        cout<<endl;
    }
}
void print11(int n){
    int out=1;
    for(int i=0;i<n;i++){
        for(int y=0;y<=i;y++){
            cout<<out<<" ";
            out++;
        }
        cout<<endl;
    }
}
void print12(int n){
    for(int i=1;i<=n;i++){
        for(int y=1;y<=i;y++){
            cout<<y;
        }
        for(int y=1;y<=2*n-2*i;y++){
            cout<<" ";
        }
        for(int y=i;y>0;y--){
            cout<<y;
        }
        cout<<endl;
    }
}
void print13(int n){
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(int y=0;y<=i;y++){
            cout<< char(ch+y);
        }
        cout<<endl;
    }
}
void print14(int n){
    for(int i=1;i<=n;i++){
        for(int y=0;y<n-i;y++){
            cout<<" ";
        }
        for(int y=0;y<i;y++){
            cout<<"* ";
        }
        
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int y=1;y<i;y++){
            cout<<" ";
        }
        for(int y=0;y<=n-i;y++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>> n;
    print14(n);
    return 0;
}