#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=7;j++){
            if(j<=i||j>=8-i){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    for(int i=3;i>0;i--){
        for(int j=1;j<=7;j++){
            if(j<=i||j>=8-i){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}