#include<iostream>
using namespace std;
int main(){
    for(int i=5;i>=0;i--){
        for(int j=5;j>=i;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}