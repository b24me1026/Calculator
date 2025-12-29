#include <bits/stdc++.h>
using namespace std;

int main(){
    float a;
    float b;
    cout<<"The value of first digit is = ";
    cin>>a;
    cout<<"The value of second digit is = ";
    cin>>b;
    char sign;
    cout<<"The sighn '+'/'-'/'*'/'/' = ";
    cin>>sign;
    if(sign =='+') cout<<a+b;
    else if(sign =='-') cout<<a-b;
    else if(sign =='*') cout<<a*b;
    else if(sign =='/'&& b!=0) cout<<a/b;
    else cout<<"Error";
    return 0;
}