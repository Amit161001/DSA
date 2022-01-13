#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<9;j++){
            if(j==i||j==8-i){
                cout<<char(65+i);
            }
            else 
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}