#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        for(int j=(i*2)+1;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}