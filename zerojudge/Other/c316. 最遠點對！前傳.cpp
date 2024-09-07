#include<bits/stdc++.h>
#define int long long
using namespace std;

struct APoint{
    int x,y;
};
struct Big{
    int d=0,Ix,Iy;
};
Big big;
signed main(){
    int n;
    cin >> n;
    APoint points[n];
    for(int i=0;i<n;i++)
        cin >> points[i].x >> points[i].y;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            double d=sqrt(pow((points[i].x-points[j].x),2)+pow((points[i].y-points[j].y),2));
            if(d>big.d){
                big.d=d;
                big.Ix=i;
                big.Iy=j;
            }
            else if(d==big.d){
                if(i<big.Ix){
                    big.d=d;
                    big.Ix=i;
                    big.Iy=j;
                }
                else if(i==big.Ix&&j<big.Iy){
                    big.d=d;
                    big.Ix=i;
                    big.Iy=j;
                }
            }
        }
    }
    cout << big.Ix << " " << big.Iy;
return 0;
}
