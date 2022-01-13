#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=5;j>i;j--){
            cout<<" ";
        }
        for(int j=0;j<=i*2-2;j++){
            if(j==0 ||j==i*2-2){
                cout<<i;
            }
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    for(int i=4;i>0;i--){
        for(int j=4;j>=i;j--){
            cout<<" ";
        }
        for(int j=0;j<=i*2-2;j++){
            if(j==0 ||j==i*2-2){
                cout<<i;
            }
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}