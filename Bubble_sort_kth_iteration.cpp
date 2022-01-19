#include<iostream>
using namespace std;
int n;
void Bubblesort(int arr[],int k)
{
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                
            }
        }
        count+=1;
        if(count==k){
            cout<<"kth iteration is ";
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
    cout<<"Enter kth Iteration ";
    cin>>k;
    Bubblesort(arr,k);
    cout<<"Sorted Array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}