#include<bits/stdc++.h>
using namespace std;
int n;
void selection_sort(int arr[]){
    for(int i=0;i<n;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
                swap(arr[i],arr[min_idx]);
            }
        }
    }
}
int main(){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr);
    cout<<"Sorted array ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}