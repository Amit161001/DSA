#include<iostream>
using namespace std;
void odd(int n){
    if(n==0)
    return;
    odd(n-1);
    cout<<n*2-1<<" ";
}
int main(){
    int n;
    cout<<"Enter no of odd numbers";
    cin>>n;
    odd(n);
    return 0;
}