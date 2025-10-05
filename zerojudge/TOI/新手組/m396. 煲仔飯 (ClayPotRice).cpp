#include<bits/stdc++.h>
using namespace std;

// T: 午休長, G: 去程, W: 等待, E: 吃飯, B: 回程
int T, G, W, E, B;

int main(){
ios::sync_with_stdio(false);
    cin >> T >> G >> W >> E >> B;
    int total = G + W + E + B;
    cout << (total<=T ? total : -1) << "\n";
return 0;
}
