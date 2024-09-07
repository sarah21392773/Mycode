#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,kinds=INT_MAX;
string s[1005];
set<char> cnt[1005];

signed main(){
    cin >> n;
    for(int i=0;i<n;i++) cin >> s[i];
    sort(s,s+n);
    for(int i=0;i<n;i++){
        int len=s[i].length();
        for(int j=0;j<len;j++) cnt[i].insert(s[i][j]);
        int l=cnt[i].size();
        kinds=min(kinds,l);
    }
    for(int i=0;i<n;i++){
        if(cnt[i].size()<=kinds){
            cout << s[i] << " \n";
            break;
        }
    }
return 0;
}
