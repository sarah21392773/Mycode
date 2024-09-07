#include<bits/stdc++.h>
#define int long long
using namespace std;

int a,b,c,d,s;

signed main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> s;
            if(i%2==1) b+=s;
            else a+=s;
        }
        if(i%2==1){
            cout << a << ":" << b << "\n";
            if(a>b) c++;
            else d++;
            a=0;
            b=0;
        }
    }
    if(c>d) cout << "Win\n";
    else if(c<d) cout << "Lose\n";
    else cout << "Tie\n";
return 0;
}
