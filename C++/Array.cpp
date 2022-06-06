#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the Element in the Arrays"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"You Enter the Element of Arrays"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}