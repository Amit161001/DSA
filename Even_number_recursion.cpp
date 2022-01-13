#include<iostream>
using namespace std;
void even(int n){
    if(n==0)
    return;
    even(n-1);
    cout<<n*2<<" ";
}
int main(){
    int n;
    cout<<"Enter no of even numbers";
    cin>>n;
    even(n);
    return 0;
}