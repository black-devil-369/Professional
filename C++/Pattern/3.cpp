#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"Another ways of printing of Number"<<endl;
    for(int i = 1; i<=n; i++){
        for(int j= i; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}