#include<bits/stdc++.h>
#define int long long
using namespace std;

int N,T,R,S;
tuple<int,int,int,int> ranks[15];

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> T >> R >> S;
        ranks[i]=make_tuple(T,S,R,i+1);
    }
    sort(ranks,ranks+N);
    for(int i=N-1;i>=0;i--){
       cout << get<3>(ranks[i]) << " " << get<0>(ranks[i]) << " " << get<2>(ranks[i]) << " " << get<1>(ranks[i]) << "\n";
    }
return 0;
}
