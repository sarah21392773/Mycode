#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    for(int i=0;i<s.length()/2+1;i++){
        if(s[i]!=s[s.length()-1-i]){
            cout << "no";
            break;
        }
        if(i>=s.length()/2) cout << "yes";
    }
return 0;
}
