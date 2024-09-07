#include <bits/stdc++.h>
using namespace std;

struct point{
    double x;
    double y;
};

int main(){
    int n;
    cin>>n;
    point p[n];
    
    for(int i=0;i<n;i++)cin>>p[i].x>>p[i].y;
    double a = 0.0;
    for(int i=0;i<n;i++){
        if(i==n-1){
            a+=(p[i].x)*(p[0].y)-(p[0].x)*(p[i].y);
        }
        else{
            a+=(p[i].x)*(p[i+1].y)-(p[i+1].x)*(p[i].y);
        }
    }
    a = abs(a/2);
    cout<<fixed<<setprecision(2)<<a<<endl;
}
