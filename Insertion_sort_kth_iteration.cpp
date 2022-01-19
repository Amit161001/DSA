#include<bits/stdc++.h>
using namespace std;
int n;
void insertion_sort(int arr[],int k){
    int i,j,key;
    int count=0;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        count++;
        if(count==k){
            cout<<"kth iteration is ";
            for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
}
int main(){
    int arr[n],k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter kth iteration ";
    cin>>k;
    insertion_sort(arr,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}