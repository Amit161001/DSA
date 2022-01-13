#include<iostream>
using namespace std;
int isPrime(int n){
    int flag=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        return 0;
    }
    return flag;
}
void prime(int l,int n){
    if(n==0)
    return;
    if(isPrime(l)==0){
        cout<<l<<" ";
        prime(l+1,n-1);
    }
    else{
        prime(l+1,n);
    }
}
int main(){
    int n;
    cout<<"Enter no of prime numbers";
    cin>>n;
    prime(2,n);
    return 0;
}