#include<bits/stdc++.h> // Define a header file for c++ 
using namespace std;
int  indexPosition(int ajay[], int n, int key){
    for(int i =0; i<n; i++){
        if(ajay[i]==key){
            cout<<"Index Number of key elements : "<<ajay[i]<<" : "<<i<<endl;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size for Arrays"<<endl;
    cin>>n;
    int ajay[n];
    cout<<"Enter the Elements inside Arrays: "<<endl;
    for(int i =0; i<n; i++){
        cin>>ajay[i];
    }
    int key;
    cout<<"Enter the key value"<<endl;
    cin>>key;
    indexPosition(ajay,n,key);
}