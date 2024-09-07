#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin >> n;
    int ans[n];
    for(int i=0;i<n;i++) cin >> ans[i];
    for(int i=n-1;i>=0;i--) cout << ans[i] << " ";
return 0;
}
