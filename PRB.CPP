#include<bits/stdc++.h>
using namespace std;

int main(){
    double v,s,r,res;
    cin>>v>>s;
    r=s/(2*sin(acos(-1)/v));
    cout<< fixed << setprecision(10) << acos(-1)*r*r<<endl;
    return 0;
}
