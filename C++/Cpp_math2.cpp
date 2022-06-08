#include<bits/stdc++.h>
using namespace std;
int main(){
    double x,result,result1,result2,result3,result4,result5;
    cin>>x;
     double xDegrees = 90;
    x = xDegrees * 3.14159 / 180;
    result = sinh(x);
    result1 =cosh(x);
    result2 = tanh(x);
    result3 = asinh(x);
    result4 = acosh(x);
    result5 = atanh(x); 
    cout<<"90 Degrees = "<<result<<endl;
    cout<<"90 Degrees = "<<result1<<endl;
    cout<<"90 degrees = "<<result2<<endl;
    cout<<"90 Degrees = "<<result3<<endl;
    cout<<"90 Degrees = "<<result4<<endl;
    cout<<"90 Degrees = "<<result5<<endl;

}