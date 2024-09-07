#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int ans=0,N,K;
    cin >> N;
    for(long long int i=1;i<=N;i++){
        cin >> K;
        ans+=i*K;
    }
    cout << ans;
    return 0;
}
