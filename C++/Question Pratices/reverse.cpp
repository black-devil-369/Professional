#include<bits/stdc++.h>
using namespace std;
void reverseArrays(int arr[], int n){
    int start = 0;
    int end = n-1;
    cout<<"Arrays of Elements After Reverse"<<endl;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i = 0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Elment enter by you inside a arrays"<<endl;
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverseArrays(arr,n);
}