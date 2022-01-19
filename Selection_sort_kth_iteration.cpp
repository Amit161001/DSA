#include<bits/stdc++.h>
using namespace std;
int n;
void selection_sort(int arr[],int k){
    int count=0;
    for(int i=0;i<n;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
                swap(arr[i],arr[min_idx]);
            }
        }
        count+=1;
        if(count==k){
            cout<<"kth iteraton is ";
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    cin>>n;
    int arr[n],k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter kth iteration ";
    cin>>k;
    selection_sort(arr,k);
    cout<<"Sorted array ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}