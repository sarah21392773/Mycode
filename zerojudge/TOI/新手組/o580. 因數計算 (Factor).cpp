#include<bits/stdc++.h>
#define int long long
using namespace std;

int x,y,N,M;

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> x >> y;
    for(int i=x;i<=y;i++){
        int Tm=0,stop=sqrt(i);
        for(int j=1;j<=stop;j++){
            if(i%j==0) Tm++;
        }
        Tm*=2;
        if(stop*stop == i) Tm--;
        if(Tm>M){
            M=Tm;
            N=i;
        }
    }
    cout << N << " " << M << "\n";
return 0;
}
