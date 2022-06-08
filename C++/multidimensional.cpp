#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int arr1[a][b];
    cout<<"Enter the element for two Dimesional Arrays"<<endl;
    for(int i=0; i<a; i++){
        for( int j=0; j<b; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"The Element of Arrays Enter by you"<<endl;
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cout<<arr1[i][j]<<endl;
        }
    }
    cout<<"Size of two dimensional arrays"<<endl;
    cout<<sizeof(arr1)<<endl;
    cout<<"Lenght of Arrays"<<endl;
    cout<<sizeof(arr1)/sizeof(int)<<endl;
}