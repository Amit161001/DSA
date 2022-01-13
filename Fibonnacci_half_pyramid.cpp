#include<iostream>
using namespace std;
int n;
int fib(int n){
    int a=1,b=1,c=0;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}
int main(){
    int a=1,b=1,c=0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            c=a+b;
            a=b;
            b=c;
        }
        cout<<"\n";
    }
    return 0;
}