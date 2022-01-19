#include<bits/stdc++.h>
using namespace std;
int n;
void insertion_sort(int arr[]){
    int i,j,key;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}