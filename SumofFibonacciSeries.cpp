#include<iostream>
using namespace std;
int sum=0;
int fib(int n){
    if(n==1||n==0)
    return n;
    else 
    return(fib(n-1)+fib(n-2));
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        sum+=fib(i);
    }
    cout<<sum;
    return 0;
}
