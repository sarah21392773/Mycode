#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int floar[5005];
    floar[0]=1;
    for(int i=0;i<N;i++) cin >> floar[i+1];
    int ans=0;
    for(int i=1;i<=N;i++){
        int temp = floar[i]-floar[i-1];
        ans += (temp>0 ? (3*temp) : (-2*temp));
    }
    cout << ans;
return 0;
}
